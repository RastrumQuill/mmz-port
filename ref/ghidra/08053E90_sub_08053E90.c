// sub_08053E90 at 0x08053E90 (thumb)

void sub_08053E90(int param_1)

{
  *(undefined *)(param_1 + 0x10) = *(undefined *)(*(int *)(param_1 + 0x20) + 0x11);
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x11) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return;
}

