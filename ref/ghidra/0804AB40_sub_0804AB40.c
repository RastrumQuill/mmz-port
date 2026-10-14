// sub_0804AB40 at 0x0804AB40 (thumb)

undefined4 sub_0804AB40(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08008120(*(int *)(param_1 + 0x4c) + *(int *)(param_2 + 8),
                       *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0xc));
  iVar1 = *(int *)(param_1 + 0x4c) + iVar1;
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar1 = sub_08007B30(iVar1 + *(int *)(param_2 + 0x18),
                       *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0x1c));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  return in_lr;
}

