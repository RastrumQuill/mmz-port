// sub_0803126C at 0x0803126C (thumb)

ulonglong sub_0803126C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = 2;
  iVar2 = 0;
  do {
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + (uint)*(byte *)(param_1 + 8 + iVar1);
  } while (iVar1 != 0);
  return CONCAT44(in_lr,iVar2) & 0xffffffff000000ff;
}

