// sub_0805972C at 0x0805972C (thumb)

undefined4 sub_0805972C(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xb4) & 1) != 0) {
    pbVar1 = (byte *)(param_1 + 0xb5);
    *pbVar1 = *pbVar1 + 2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + (short)(&DAT_08128c10)[*pbVar1] * 2;
  }
  return in_lr;
}

