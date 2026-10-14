// sub_0804AB7C at 0x0804AB7C (thumb)

undefined4 sub_0804AB7C(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08007EE0(*(int *)(param_1 + 0x4c) + *(int *)(param_2 + 0x10),
                       *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0x14));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  return in_lr;
}

