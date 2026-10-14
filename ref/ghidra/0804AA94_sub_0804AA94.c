// sub_0804AA94 at 0x0804AA94 (thumb)

undefined4 sub_0804AA94(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08008120(*(int *)(param_1 + 0x4c) + *param_2,*(int *)(param_1 + 0x50) + param_2[1]);
  iVar1 = *(int *)(param_1 + 0x4c) + iVar1;
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar1 = sub_08007CF8(iVar1 + param_2[4],*(int *)(param_1 + 0x50) + param_2[5]);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  return in_lr;
}

