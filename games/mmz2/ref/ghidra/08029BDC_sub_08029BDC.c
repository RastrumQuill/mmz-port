// sub_08029BDC at 0x08029BDC (thumb)

undefined4 sub_08029BDC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x2b9) - 1;
  *(byte *)(param_1 + 0x2b9) = (byte)iVar1;
  if (iVar1 == 0) {
    sub_08035080(param_1);
    sub_08035404(param_1);
  }
  return in_lr;
}

