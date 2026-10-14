// sub_08022524 at 0x08022524 (thumb)

longlong sub_08022524(int param_1)

{
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(*(int *)(param_1 + 0xc) + 4) + -8;
  }
  return (ulonglong)in_lr << 0x20;
}

