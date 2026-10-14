// sub_0804AA70 at 0x0804AA70 (thumb)

undefined4 sub_0804AA70(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08007CF8(*(int *)(param_1 + 0x4c) + *(int *)(param_2 + 8),
                       *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0xc));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  return in_lr;
}

