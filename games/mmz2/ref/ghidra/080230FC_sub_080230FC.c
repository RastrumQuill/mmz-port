// sub_080230FC at 0x080230FC (thumb)

ulonglong sub_080230FC(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (uint)*(byte *)(param_1 + 0x182) - param_2;
  if (iVar1 < 0) {
    param_2 = param_2 + iVar1;
    iVar1 = 0;
  }
  *(byte *)(param_1 + 0x182) = (byte)iVar1;
  return CONCAT44(in_lr,param_2) & 0xffffffff000000ff;
}

