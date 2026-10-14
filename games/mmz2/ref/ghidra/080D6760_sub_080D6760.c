// sub_080D6760 at 0x080D6760 (thumb)

void sub_080D6760(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2a4) = 0;
  return;
}

