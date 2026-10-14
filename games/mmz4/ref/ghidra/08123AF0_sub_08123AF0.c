// sub_08123AF0 at 0x08123AF0 (thumb)

longlong sub_08123AF0(int param_1)

{
  uint in_lr;
  
  if ((*(short *)(param_1 + 6) != 0) && (DAT_02000a90 < *(uint *)(param_1 + 0xddc))) {
    sub_08006A6C(1,*(uint *)(param_1 + 0xddc));
  }
  return (ulonglong)in_lr << 0x20;
}

