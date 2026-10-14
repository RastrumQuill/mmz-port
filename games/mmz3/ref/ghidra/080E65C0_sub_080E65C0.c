// sub_080E65C0 at 0x080E65C0 (thumb)

void sub_080E65C0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

