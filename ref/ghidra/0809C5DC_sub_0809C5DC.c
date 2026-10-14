// sub_0809C5DC at 0x0809C5DC (thumb)

void sub_0809C5DC(int param_1)

{
  if (((param_1 != 0) && (*(char *)(param_1 + 9) == 'W')) && (*(char *)(param_1 + 0x10) == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return;
}

