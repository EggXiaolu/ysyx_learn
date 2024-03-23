#include <nvboard.h>
#include "VFSM_bin.h"

void nvboard_bind_all_pins(VFSM_bin* top) {
	nvboard_bind_pin( &top->in, 1, SW1);
	nvboard_bind_pin( &top->reset, 1, SW2);
	nvboard_bind_pin( &top->out, 1, LD0);
}
