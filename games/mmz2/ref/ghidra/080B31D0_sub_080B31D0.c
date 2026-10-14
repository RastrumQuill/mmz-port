// sub_080B31D0 at 0x080B31D0 (thumb)

void sub_080B31D0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

