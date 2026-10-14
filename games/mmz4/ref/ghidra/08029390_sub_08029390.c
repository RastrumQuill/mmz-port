// sub_08029390 at 0x08029390 (thumb)

longlong sub_08029390(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + *(int *)(iVar2 + 4) * 0x10 + 0x10);
  if (*(char *)(iVar2 + 1) == '\0') {
    sub_0802AAD4((int)*(short *)(iVar2 + 2),*(int *)(iVar2 + 4));
  }
  else if (iVar1 != 0) {
    sub_0802AAD4((int)*(short *)(iVar2 + 2),iVar1 + 0x54);
  }
  return (ulonglong)in_lr << 0x20;
}

