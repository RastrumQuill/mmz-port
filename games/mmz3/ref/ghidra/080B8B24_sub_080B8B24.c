// sub_080B8B24 at 0x080B8B24 (thumb)

void sub_080B8B24(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

