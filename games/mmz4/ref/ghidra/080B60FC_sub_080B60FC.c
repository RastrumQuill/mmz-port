// sub_080B60FC at 0x080B60FC (thumb)

undefined4 sub_080B60FC(int param_1)

{
  short *psVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  pbVar2 = (byte *)(*(int *)(param_1 + 0x28) + 0xce);
  *pbVar2 = *pbVar2 & ~(byte)(1 << *(sbyte *)(param_1 + 0xb5));
  sub_0807F804(param_1);
  return in_lr;
}

