#include "Vour.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vour* top = new Vour{contextp};
    while (!contextp->gotFinish()) { 
        int a=rand()&1;
        int b=rand()&1;
        top->a=a;
        top->b=b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n",a,b,top->f);
        assert(top->f==(a^b));
    }
    delete top;
    delete contextp;
    return 0;
}
