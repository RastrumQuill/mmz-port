// sub_080B557C at 0x080B557C (thumb)

void sub_080B557C(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xec) = 0;
  return;
}

