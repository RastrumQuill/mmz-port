// sub_080EAA1C at 0x080EAA1C (thumb)

undefined4 sub_080EAA1C(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_02030c14;
  iVar2 = (*(short *)((int)&DAT_080fe64c + ((uint)(param_2 << 0x18) >> 0x17)) * 7 >> 3) + 7 >> 3;
  DAT_02002414 = (short)iVar2 * 8 + 0xcU & 0xff | 0x400;
  if (iVar2 != 0) {
    sub_08001BA4(0x2c5,DAT_02030c14 + 0x402,iVar2 * 2);
    sub_08001BA4(0x2c6,iVar1 + 0x4c2,iVar2 * 2);
  }
  *(undefined2 *)(iVar1 + 0x400) = 0x2c1;
  *(undefined2 *)(iVar1 + 0x440) = 0x2c2;
  *(undefined2 *)(iVar1 + 0x480) = 0x2c3;
  *(undefined2 *)(iVar1 + 0x4c0) = 0x2c4;
  iVar1 = iVar2 * 2 + iVar1;
  *(undefined2 *)(iVar1 + 0x402) = 0x6c1;
  *(undefined2 *)(iVar1 + 0x442) = 0x6c2;
  *(undefined2 *)(iVar1 + 0x482) = 0x6c3;
  *(undefined2 *)(iVar1 + 0x4c2) = 0x6c4;
  return in_lr;
}

