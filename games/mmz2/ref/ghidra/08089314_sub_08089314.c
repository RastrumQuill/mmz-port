// sub_08089314 at 0x08089314 (thumb)

undefined4 sub_08089314(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080090D4(*(int *)(param_1 + 0x54) + *(int *)(param_2 + 0x10),
                       *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0x14));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  return in_lr;
}

