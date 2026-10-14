// sub_0804AA00 at 0x0804AA00 (thumb)

undefined4 sub_0804AA00(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08008120(*(int *)(param_1 + 0x4c) + *param_2,*(int *)(param_1 + 0x50) + param_2[1]);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  return in_lr;
}

