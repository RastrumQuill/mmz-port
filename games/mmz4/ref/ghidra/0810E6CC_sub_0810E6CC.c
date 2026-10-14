// sub_0810E6CC at 0x0810E6CC (thumb)

undefined4 sub_0810E6CC(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202f384;
  iVar2 = (*(short *)((int)&DAT_08128c10 + ((uint)(param_2 << 0x18) >> 0x17)) * 7 >> 3) + 7 >> 3;
  DAT_02000a54 = (short)iVar2 * 8 + 0xcU & 0xff | 0x400;
  if (iVar2 != 0) {
    sub_08000AB4(0x2d1,DAT_0202f384 + 0x402,iVar2 * 2);
    sub_08000AB4(0x2d2,iVar1 + 0x4c2,iVar2 * 2);
  }
  *(undefined2 *)(iVar1 + 0x400) = 0x2cd;
  *(undefined2 *)(iVar1 + 0x440) = 0x2ce;
  *(undefined2 *)(iVar1 + 0x480) = 0x2cf;
  *(undefined2 *)(iVar1 + 0x4c0) = 0x2d0;
  iVar1 = iVar2 * 2 + iVar1;
  *(undefined2 *)(iVar1 + 0x402) = 0x6cd;
  *(undefined2 *)(iVar1 + 0x442) = 0x6ce;
  *(undefined2 *)(iVar1 + 0x482) = 0x6cf;
  *(undefined2 *)(iVar1 + 0x4c2) = 0x6d0;
  return in_lr;
}

