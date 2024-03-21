#include <nvboard.h>
#include "Vencode83.h"

void nvboard_bind_all_pins(Vencode83* top) {
	nvboard_bind_pin( &top->x, 8, SW9, SW8, SW7, SW6, SW5, SW4, SW3, SW2);
	nvboard_bind_pin( &top->en, 1, SW0);
	nvboard_bind_pin( &top->h, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
}
