// sub_08054FBC at 0x08054FBC (thumb)

undefined8 sub_08054FBC(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0xb7);
  *pbVar2 = *pbVar2 + 1;
  iVar1 = *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*pbVar2] * 0x10;
  *(int *)(param_1 + 0x58) = iVar1;
  return CONCAT44(in_lr,(uint)(iVar1 == *(int *)(param_1 + 0xb8)));
}

