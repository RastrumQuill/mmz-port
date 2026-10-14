// sub_080554C0 at 0x080554C0 (thumb)

void sub_080554C0(int param_1)

{
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return;
}

