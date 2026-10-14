// sub_0804AB1C at 0x0804AB1C (thumb)

undefined4 sub_0804AB1C(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08007B30(*(int *)(param_1 + 0x4c) + *param_2,*(int *)(param_1 + 0x50) + param_2[1]);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  return in_lr;
}

