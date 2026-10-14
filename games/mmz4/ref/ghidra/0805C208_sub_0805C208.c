// sub_0805C208 at 0x0805C208 (thumb)

undefined8 sub_0805C208(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  byte abStack_40c [1024];
  byte abStack_c [4];
  
  sub_08128B5C(abStack_c,&DAT_08129009,3);
  iVar1 = (int)*(short *)(param_1 + 0xa4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x1f;
  }
  return CONCAT44(in_lr,(uint)abStack_c[iVar1 >> 5]);
}

