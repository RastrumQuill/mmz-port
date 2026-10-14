// sub_0806610C at 0x0806610C (thumb)

undefined8 sub_0806610C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  byte abStack_810 [2048];
  byte abStack_10 [8];
  
  sub_08128B5C(abStack_10,&DAT_081291b9,5);
  iVar1 = (int)*(short *)(param_1 + 0xa4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  return CONCAT44(in_lr,(uint)abStack_10[iVar1 >> 4]);
}

