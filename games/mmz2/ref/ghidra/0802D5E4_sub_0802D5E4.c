// sub_0802D5E4 at 0x0802D5E4 (thumb)

undefined4 sub_0802D5E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x2b9) - 1;
  *(byte *)(param_1 + 0x2b9) = (byte)iVar1;
  if (iVar1 == 0) {
    sub_08035238(param_1);
    sub_0803543C(param_1);
  }
  return in_lr;
}

