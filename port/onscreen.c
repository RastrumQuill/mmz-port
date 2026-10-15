/* The game's "how far off screen" test, for the wider view.
 *
 * sub_08013D9C(camera, position) gives how far a point is outside the GBA
 * screen: the larger of its horizontal distance beyond 120 pixels from the
 * camera's centre and its vertical distance beyond 80 (24.8 fixed point, 0
 * when on screen). Enemy code uses it, about 80 times, to wake up, appear,
 * attack or leave when it comes near or goes past the screen's edge; with
 * the GBA's numbers, enemies would wait well inside the wider view and seem
 * to come from nowhere. Here the screen is the view, each side as far as it
 * reaches (view.c); in cutscenes and the GBA view, the GBA screen.
 */
#include "lift.h"
#include "pc.h"

void lift_sub_08013D9C(void) {
	u32 lr = LIFT_ENTRY_LR();
	u32 cam = cpu.r[0], pos = cpu.r[1];
	s32 dx = (s32)lift_read32(cam + 0x38) - (s32)lift_read32(pos);
	s32 dy = (s32)lift_read32(cam + 0x3C) - (s32)lift_read32(pos + 4);
	/* camera minus point: positive when the point is left of / above it */
	s32 ox = dx >= 0 ? dx - (120 + view_ext_left) * 256 : -dx - (120 + view_ext_right) * 256;
	s32 oy = dy >= 0 ? dy - (80 + view_ext_up) * 256 : -dy - (80 + view_ext_down) * 256;
	if (ox < 0) ox = 0;
	if (oy < 0) oy = 0;
	cpu.r[0] = ox >= oy ? ox : oy;
	cpu.r[1] = oy;
	cpu.r[2] = ox;
	cpu.r[3] = cam;
	lift_cycles += 40;
	lift_ret = lr;
}
