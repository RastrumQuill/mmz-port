// sub_08026FD8 at 0x08026FD8 (thumb)

void sub_08026FD8(int param_1)

{
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 8);
  }
  return;
}

