// sub_080B3460 at 0x080B3460 (thumb)

undefined8 sub_080B3460(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_081284E0((**(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                       ((*(int **)(param_1 + 0x28))[1] - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
  return CONCAT44(in_lr,(uint)(iVar1 << 0x10) >> 0x18);
}

