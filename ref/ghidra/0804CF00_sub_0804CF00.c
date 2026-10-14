// sub_0804CF00 at 0x0804CF00 (thumb)

undefined4 sub_0804CF00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  *(undefined *)(param_1 + 0x45) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(char *)(param_1 + 0x1f) = *(char *)(param_1 + 0x12) + -0x80;
  iVar2 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 10;
  *(int *)(param_1 + 0x5c) = iVar2;
  iVar1 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * -10;
  *(int *)(param_1 + 0x60) = iVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar2 - *(int *)(param_1 + 0x54));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar1 - *(int *)(param_1 + 0x58));
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = iVar1;
  return in_lr;
}

