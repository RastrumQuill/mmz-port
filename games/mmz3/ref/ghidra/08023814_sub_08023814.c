// sub_08023814 at 0x08023814 (thumb)

longlong sub_08023814(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + *(int *)(iVar2 + 4) * 0x10 + 0x10);
  if (*(char *)(iVar2 + 1) == '\0') {
    sub_08024FE4((int)*(short *)(iVar2 + 2),*(int *)(iVar2 + 4));
  }
  else if (iVar1 != 0) {
    sub_08024FE4((int)*(short *)(iVar2 + 2),iVar1 + 0x54);
  }
  return (ulonglong)in_lr << 0x20;
}

