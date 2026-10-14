// sub_08089338 at 0x08089338 (thumb)

undefined4 sub_08089338(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080090D4(*(int *)(param_1 + 0x54) + param_2[4],*(int *)(param_1 + 0x58) + param_2[5]);
  iVar1 = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_08008DE8(iVar1 + *param_2,*(int *)(param_1 + 0x58) + param_2[1]);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  return in_lr;
}

