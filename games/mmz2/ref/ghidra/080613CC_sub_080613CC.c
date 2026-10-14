// sub_080613CC at 0x080613CC (thumb)

undefined4 sub_080613CC(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
  pbVar1 = (byte *)(param_1 + 0xc9);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar1] * 5;
  *pbVar1 = *pbVar1 + 3;
  return in_lr;
}

