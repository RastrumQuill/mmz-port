// sub_08027DE0 at 0x08027DE0 (thumb)

longlong sub_08027DE0(int param_1)

{
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(*(int *)(param_1 + 0xc) + 4) + -8;
  }
  return (ulonglong)in_lr << 0x20;
}

