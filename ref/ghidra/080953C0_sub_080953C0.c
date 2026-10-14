// sub_080953C0 at 0x080953C0 (thumb)

void sub_080953C0(int param_1)

{
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0xc);
  return;
}

