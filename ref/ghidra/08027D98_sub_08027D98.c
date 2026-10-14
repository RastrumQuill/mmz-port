// sub_08027D98 at 0x08027D98 (thumb)

void sub_08027D98(int param_1)

{
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 8);
  }
  return;
}

