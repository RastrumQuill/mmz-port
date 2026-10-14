// sub_0801CD7C at 0x0801CD7C (thumb)

longlong sub_0801CD7C(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + *(int *)(iVar2 + 4) * 0x10 + 0x10);
  if (*(char *)(iVar2 + 1) == '\0') {
    sub_0801DD2C((int)*(short *)(iVar2 + 2),*(int *)(iVar2 + 4));
  }
  else if (iVar1 != 0) {
    sub_0801DD2C((int)*(short *)(iVar2 + 2),iVar1 + 0x54);
  }
  return (ulonglong)in_lr << 0x20;
}

