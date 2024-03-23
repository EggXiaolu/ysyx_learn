#include <Vrandom.h>
#include <nvboard.h>
#include <time.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static Vrandom *top;
void nvboard_bind_all_pins(Vrandom *top);

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());

    nvboard_update();
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vrandom;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    // tfp->open("random.vcd");

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
        top->ctrl = 0;
        sleep(1);
        step_and_dump_wave();
        top->ctrl = 1;
        sleep(1);
        step_and_dump_wave();
        printf("0x%x  0x%x\n", top->seg_1, top->seg_2);
    }
    sim_exit();
}
