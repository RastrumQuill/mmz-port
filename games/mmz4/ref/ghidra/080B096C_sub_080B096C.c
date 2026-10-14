// sub_080B096C at 0x080B096C (thumb)

undefined8 sub_080B096C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_081284E0((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                       (*(int *)(DAT_0202dbf0 + 0x58) - (*(int *)(param_1 + 0x58) + 0xf00)) * 0x100
                       >> 0x10);
  return CONCAT44(in_lr,(uint)(iVar1 << 0x10) >> 0x18);
}

