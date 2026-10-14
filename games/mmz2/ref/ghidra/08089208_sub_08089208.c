// sub_08089208 at 0x08089208 (thumb)

undefined4 sub_08089208(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08008F50(*(int *)(param_1 + 0x54) + *(int *)(param_2 + 8),
                       *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0xc));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  return in_lr;
}

