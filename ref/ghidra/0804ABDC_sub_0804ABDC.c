// sub_0804ABDC at 0x0804ABDC (thumb)

undefined4 sub_0804ABDC(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08007EE0(*(int *)(param_1 + 0x4c) + *(int *)(param_2 + 0x18),
                       *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0x1c));
  iVar1 = *(int *)(param_1 + 0x4c) + iVar1;
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar1 = sub_08007CF8(iVar1 + *(int *)(param_2 + 8),
                       *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0xc));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  return in_lr;
}

