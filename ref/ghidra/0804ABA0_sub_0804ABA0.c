// sub_0804ABA0 at 0x0804ABA0 (thumb)

undefined4 sub_0804ABA0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08007EE0(*(int *)(param_1 + 0x4c) + param_2[4],*(int *)(param_1 + 0x50) + param_2[5]);
  iVar1 = *(int *)(param_1 + 0x4c) + iVar1;
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar1 = sub_08007B30(iVar1 + *param_2,*(int *)(param_1 + 0x50) + param_2[1]);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  return in_lr;
}

