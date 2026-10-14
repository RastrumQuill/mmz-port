// sub_081242E8 at 0x081242E8 (thumb)

longlong sub_081242E8(int param_1)

{
  uint in_lr;
  
  if ((*(short *)(param_1 + 6) != 0) && (DAT_02000a94 < *(uint *)(param_1 + 0xddc))) {
    sub_08006A6C(2,*(uint *)(param_1 + 0xddc));
  }
  return (ulonglong)in_lr << 0x20;
}

