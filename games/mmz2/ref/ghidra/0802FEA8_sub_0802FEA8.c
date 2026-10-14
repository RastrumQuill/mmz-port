// sub_0802FEA8 at 0x0802FEA8 (thumb)

undefined4 sub_0802FEA8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x2b9) - 1;
  *(byte *)(param_1 + 0x2b9) = (byte)iVar1;
  if (iVar1 == 0) {
    sub_08035310(param_1);
    sub_08035488(param_1);
  }
  return in_lr;
}

