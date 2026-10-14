// sub_080892D8 at 0x080892D8 (thumb)

undefined4 sub_080892D8(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08009240(*(int *)(param_1 + 0x54) + *(int *)(param_2 + 8),
                       *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0xc));
  iVar1 = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_08008DE8(iVar1 + *(int *)(param_2 + 0x18),
                       *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0x1c));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  return in_lr;
}

