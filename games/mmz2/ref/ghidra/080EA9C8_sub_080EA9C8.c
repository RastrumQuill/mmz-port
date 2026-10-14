// sub_080EA9C8 at 0x080EA9C8 (thumb)

ulonglong sub_080EA9C8(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  undefined4 in_lr;
  
  iVar1 = 0;
  for (psVar2 = &DAT_0835e6fc; *(short *)(((uint)(param_1 << 0x10) >> 0xf) + param_2) != *psVar2;
      psVar2 = psVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_lr,iVar1) & 0xffffffff000000ff;
}

