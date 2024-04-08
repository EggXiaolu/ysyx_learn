#include <Vtop.h>
#include <nvboard.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

static Vtop top;
void nvboard_bind_all_pins(Vtop* top);

static void sw_val(int a, int b) {
  top.a = a;
  top.eval();
  top.b = b;
  top.eval();
}

int main() {
  nvboard_bind_all_pins(&top);
  nvboard_init();
  sw_val(1, 0); 
  while (1) {
        nvboard_update();
    }
}
