#include <VALU.h>
#include <nvboard.h>
#include <time.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static VALU *top;
void nvboard_bind_all_pins(VALU *top);

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());

    nvboard_update();
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new VALU;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    // tfp->open("ALU.vcd");

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
        top->op = 0b010;
        for (int i = 0; i <= 0b1111; i++) {
            top->a = i;
            printf("%d\n", top->a);
            for (int j = 0; j <= 0b1111; j++) {
                top->b = j;
                sleep(1);
                step_and_dump_wave();
            }
        }
        step_and_dump_wave();
    }
    sim_exit();
}
