// sub_080AEBB8 at 0x080AEBB8 (thumb)

undefined4 sub_080AEBB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0809C980();
  iVar1 = *(byte *)(param_1 + 0x12) + 4;
  *(char *)(param_1 + 0x12) = (char)iVar1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + (short)(&DAT_080c8e24)[iVar1] * 4;
  return in_lr;
}

