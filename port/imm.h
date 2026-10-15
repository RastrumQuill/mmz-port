/* Included before the lifted code in the PC port: the constants listed in
 * tools/lift/patches.txt come from these variables (set by view.c from the
 * view size; the original values for the GBA view). */
#define LIFT_IMM(name, value) ((unsigned)port_imm_##name)
extern int port_imm_SPAWN_RANGE_X, port_imm_SPAWN_RANGE_Y, port_imm_SPAWN_WINDOW_Y;
extern int port_imm_CULL_RANGE_X, port_imm_CULL_WINDOW_X, port_imm_CULL_RANGE_Y, port_imm_CULL_WINDOW_Y;
