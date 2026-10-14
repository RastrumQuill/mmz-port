// sub_08089198 at 0x08089198 (thumb)

undefined4 sub_08089198(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08009240(*(int *)(param_1 + 0x54) + *param_2,*(int *)(param_1 + 0x58) + param_2[1]);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  return in_lr;
}

