#include <nvboard.h>
#include "Vlight.h"

void nvboard_bind_all_pins(Vlight* top) {
	nvboard_bind_pin( &top->rst, 1, SW0);
	nvboard_bind_pin( &top->led, 16, LD0, LD1, LD2, LD3, LD4, LD5, LD6, LD7, LD8, LD9, LD10, LD11, LD12, LD13, LD14, LD15);
}
