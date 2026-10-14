// sub_08088914 at 0x08088914 (thumb)

undefined8 sub_08088914(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
  iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
  return CONCAT44(in_lr,(uint)(0 < iVar1 && iVar2 < 0));
}

