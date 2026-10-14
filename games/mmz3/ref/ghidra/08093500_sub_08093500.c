// sub_08093500 at 0x08093500 (thumb)

undefined8 sub_08093500(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x54) + -0xe00;
  if (0 < param_2) {
    iVar2 = *(int *)(param_1 + 0x54) + 0xe00;
  }
  sVar1 = sub_08009A3C(iVar2,*(int *)(param_1 + 0x58) + 0xa00);
  return CONCAT44(in_lr,(uint)(sVar1 != 0));
}

