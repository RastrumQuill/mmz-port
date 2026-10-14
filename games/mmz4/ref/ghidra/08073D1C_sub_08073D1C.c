// sub_08073D1C at 0x08073D1C (thumb)

undefined8 sub_08073D1C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  byte abStack_810 [2048];
  byte abStack_10 [8];
  
  sub_08128B5C(abStack_10,&DAT_081292ca,5);
  iVar1 = (int)*(short *)(param_1 + 0xa4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  return CONCAT44(in_lr,(uint)abStack_10[iVar1 >> 4]);
}

