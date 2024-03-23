#include <Vtop.h>
#include <nvboard.h>
#include <time.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static Vtop *top;
void nvboard_bind_all_pins(Vtop *top);

void step_and_dump_wave() {
    nvboard_update();

    top->clk = 0;
    top->eval();

    top->clk = 1;
    top->eval();

    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtop;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    // tfp->open("top.vcd");

    nvboard_bind_all_pins(top);
    nvboard_init();
}

void sim_exit() {
    step_and_dump_wave();
    nvboard_quit();
    // tfp->close();
}

static void reset(int n) {
    top->clrn = 1;
    while (n-- > 0)
        step_and_dump_wave();
    top->clrn = 0;
}

int main() {
    sim_init();
    // reset(10);
    top->clrn = 0;
    while (1) {
        step_and_dump_wave();
    }
    sim_exit();
}
