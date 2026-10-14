// sub_08109F90 at 0x08109F90 (thumb)

void sub_08109F90(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

