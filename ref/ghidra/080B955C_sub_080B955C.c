// sub_080B955C at 0x080B955C (thumb)

void sub_080B955C(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return;
}

