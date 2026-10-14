// sub_081234C0 at 0x081234C0 (thumb)

longlong sub_081234C0(int param_1)

{
  uint in_lr;
  
  if ((*(short *)(param_1 + 6) != 0) && (DAT_02000a8c < *(uint *)(param_1 + 0xddc))) {
    sub_08006A6C(0,*(uint *)(param_1 + 0xddc));
  }
  return (ulonglong)in_lr << 0x20;
}

