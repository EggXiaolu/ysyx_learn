#include <Vmux41.h>
#include <nvboard.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static Vmux41 *top;
void nvboard_bind_all_pins(Vmux41 *top);

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());

    nvboard_update();
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vmux41;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    // tfp->open("mux41.vcd");

    nvboard_bind_all_pins(top);
    nvboard_init();
}

void sim_exit() {
    step_and_dump_wave();
    nvboard_quit();
    // tfp->close();
}

int main() {
    sim_init();
    while (1) {
        step_and_dump_wave();
    }

    sim_exit();
}
