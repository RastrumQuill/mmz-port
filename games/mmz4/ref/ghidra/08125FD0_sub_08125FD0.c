// sub_08125FD0 at 0x08125FD0 (thumb)

longlong sub_08125FD0(int param_1)

{
  uint in_lr;
  
  if ((*(short *)(param_1 + 6) != 0) && (DAT_02000aa4 < *(uint *)(param_1 + 0xddc))) {
    sub_08006A6C(6,*(uint *)(param_1 + 0xddc));
  }
  return (ulonglong)in_lr << 0x20;
}

