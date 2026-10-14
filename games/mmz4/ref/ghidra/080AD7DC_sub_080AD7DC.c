// sub_080AD7DC at 0x080AD7DC (thumb)

undefined8 sub_080AD7DC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_081284E0((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                       (*(int *)(DAT_0202dbf0 + 0x58) - (*(int *)(param_1 + 0x58) + 0xf00)) * 0x100
                       >> 0x10);
  return CONCAT44(in_lr,(uint)(iVar1 << 0x10) >> 0x18);
}

