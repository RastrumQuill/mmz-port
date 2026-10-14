// sub_080E0A34 at 0x080E0A34 (thumb)

void sub_080E0A34(int param_1)

{
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e1d8)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

