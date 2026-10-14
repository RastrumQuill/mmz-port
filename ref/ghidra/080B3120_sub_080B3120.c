// sub_080B3120 at 0x080B3120 (thumb)

void sub_080B3120(int param_1)

{
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

