// sub_080B600C at 0x080B600C (thumb)

undefined4 sub_080B600C(int param_1)

{
  short *psVar1;
  byte *pbVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  sub_08002B10(0x35);
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  pbVar2 = (byte *)(*(int *)(param_1 + 0x28) + 0xce);
  *pbVar2 = *pbVar2 & ~(byte)(1 << *(sbyte *)(param_1 + 0xb5));
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + -0x1000;
  sub_080D0894(1,&local_14);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

