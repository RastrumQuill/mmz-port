// sub_08070718 at 0x08070718 (thumb)

undefined8 sub_08070718(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08007CF8(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1300);
  iVar2 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  return CONCAT44(in_lr,(uint)(iVar2 < 0 && 0 < iVar1));
}

