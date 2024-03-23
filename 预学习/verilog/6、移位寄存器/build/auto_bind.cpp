#include <nvboard.h>
#include "Vrandom.h"

void nvboard_bind_all_pins(Vrandom* top) {
	nvboard_bind_pin( &top->ctrl, 1, BTNC);
	nvboard_bind_pin( &top->seg_1, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin( &top->seg_2, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
}
