// sub_080230DC at 0x080230DC (thumb)

ulonglong sub_080230DC(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (uint)*(byte *)(param_1 + 0x182) + param_2;
  if (0xff < iVar1) {
    param_2 = param_2 - (iVar1 + -0xff);
    iVar1 = 0xff;
  }
  *(byte *)(param_1 + 0x182) = (byte)iVar1;
  return CONCAT44(in_lr,param_2) & 0xffffffff000000ff;
}

