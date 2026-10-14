// sub_08089374 at 0x08089374 (thumb)

undefined4 sub_08089374(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080090D4(*(int *)(param_1 + 0x54) + *(int *)(param_2 + 0x18),
                       *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0x1c));
  iVar1 = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_08008F50(iVar1 + *(int *)(param_2 + 8),
                       *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0xc));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  return in_lr;
}

