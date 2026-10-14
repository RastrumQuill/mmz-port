// sub_080CEDE8 at 0x080CEDE8 (thumb)

void sub_080CEDE8(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

