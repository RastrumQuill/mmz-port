// sub_0804C070 at 0x0804C070 (thumb)

undefined4 sub_0804C070(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  cVar2 = bVar1 - 2;
  *(char *)(param_1 + 0x12) = cVar2;
  *(char *)(param_1 + 0x1f) = cVar2;
  iVar4 = (short)(&DAT_080c8e24)[bVar1 + 0x3e] * 10;
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar3 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * -10;
  *(int *)(param_1 + 0x60) = iVar3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar4 - *(int *)(param_1 + 0x54));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar3 - *(int *)(param_1 + 0x58));
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x58) = iVar3;
  return in_lr;
}

