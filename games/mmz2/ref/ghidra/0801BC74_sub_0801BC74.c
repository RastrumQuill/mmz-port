// sub_0801BC74 at 0x0801BC74 (thumb)

longlong sub_0801BC74(int param_1)

{
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(*(int *)(param_1 + 0xc) + 4) + -8;
  }
  return (ulonglong)in_lr << 0x20;
}

