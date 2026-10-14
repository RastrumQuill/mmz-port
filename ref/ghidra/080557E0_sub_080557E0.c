// sub_080557E0 at 0x080557E0 (thumb)

void sub_080557E0(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x11) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return;
}

