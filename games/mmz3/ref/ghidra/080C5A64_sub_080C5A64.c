// sub_080C5A64 at 0x080C5A64 (thumb)

void sub_080C5A64(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  return;
}

