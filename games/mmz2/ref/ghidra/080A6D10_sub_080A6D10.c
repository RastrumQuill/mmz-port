// sub_080A6D10 at 0x080A6D10 (thumb)

void sub_080A6D10(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

