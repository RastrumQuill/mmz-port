// sub_080B9298 at 0x080B9298 (thumb)

void sub_080B9298(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

