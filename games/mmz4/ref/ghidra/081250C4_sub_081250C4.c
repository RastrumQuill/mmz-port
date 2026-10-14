// sub_081250C4 at 0x081250C4 (thumb)

longlong sub_081250C4(int param_1)

{
  uint in_lr;
  
  if ((*(short *)(param_1 + 6) != 0) && ((*(uint *)(param_1 + 0xdf0) & 2) != 0)) {
    if ((*(int *)(param_1 + 0xdd4) < *(int *)(param_1 + 0xddc)) || (*(int *)(param_1 + 0xddc) == 0))
    {
      *(int *)(param_1 + 0xddc) = *(int *)(param_1 + 0xdd4);
    }
    if ((*(uint *)(param_1 + 0xdd4) < DAT_02000a9c) || (DAT_02000a9c == 0)) {
      sub_08006A6C(4,*(undefined4 *)(param_1 + 0xddc));
    }
  }
  *(uint *)(param_1 + 0xdf0) = *(uint *)(param_1 + 0xdf0) | 4;
  return (ulonglong)in_lr << 0x20;
}

