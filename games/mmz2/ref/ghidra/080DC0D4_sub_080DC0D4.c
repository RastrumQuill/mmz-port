// sub_080DC0D4 at 0x080DC0D4 (thumb)

void sub_080DC0D4(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

