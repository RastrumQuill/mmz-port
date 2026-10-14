// sub_08107D4C at 0x08107D4C (thumb)

void sub_08107D4C(int param_1)

{
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

