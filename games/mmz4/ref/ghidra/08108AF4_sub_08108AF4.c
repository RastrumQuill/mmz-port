// sub_08108AF4 at 0x08108AF4 (thumb)

void sub_08108AF4(int param_1)

{
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08869378)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

