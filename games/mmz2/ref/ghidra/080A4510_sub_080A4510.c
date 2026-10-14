// sub_080A4510 at 0x080A4510 (thumb)

void sub_080A4510(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

