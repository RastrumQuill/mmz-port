// sub_080892B4 at 0x080892B4 (thumb)

undefined4 sub_080892B4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08008DE8(*(int *)(param_1 + 0x54) + *param_2,*(int *)(param_1 + 0x58) + param_2[1]);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  return in_lr;
}

