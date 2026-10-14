// sub_080D50E4 at 0x080D50E4 (thumb)

void sub_080D50E4(int param_1)

{
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a09c)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

