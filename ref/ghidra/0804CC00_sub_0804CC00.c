// sub_0804CC00 at 0x0804CC00 (thumb)

undefined4 sub_0804CC00(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + -2;
  *(char *)(param_1 + 0x1f) = cVar1 + '}';
  iVar3 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 10;
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar2 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * -10;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar3 - *(int *)(param_1 + 0x54));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar2 - *(int *)(param_1 + 0x58));
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = iVar2;
  return in_lr;
}

