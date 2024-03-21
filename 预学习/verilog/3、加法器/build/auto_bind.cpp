#include <nvboard.h>
#include "VALU.h"

void nvboard_bind_all_pins(VALU* top) {
	nvboard_bind_pin( &top->op, 3, BTNL, BTNC, BTNR);
	nvboard_bind_pin( &top->a, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->b, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->seg1, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin( &top->seg2, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
	nvboard_bind_pin( &top->overflow, 1, LD0);
	nvboard_bind_pin( &top->carry, 1, LD1);
	nvboard_bind_pin( &top->zero, 1, LD2);
}
