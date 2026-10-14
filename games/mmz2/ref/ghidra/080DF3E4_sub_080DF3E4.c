// sub_080DF3E4 at 0x080DF3E4 (thumb)

undefined4 sub_080DF3E4(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202f654;
  iVar2 = (*(short *)((int)&DAT_080ef450 + (((param_2 & 0xff) << 0x10) >> 0xf)) * 7 >> 3) + 7 >> 3;
  DAT_02000fe4._0_2_ = (short)iVar2 * 8 + 0xcU & 0xff | 0x400;
  if (iVar2 != 0) {
    sub_0800090C(0x2c4,DAT_0202f654 + 0x402,iVar2 * 2);
    sub_0800090C(0x2c5,iVar1 + 0x4c2,iVar2 * 2);
  }
  *(undefined2 *)(iVar1 + 0x400) = 0x2c0;
  *(undefined2 *)(iVar1 + 0x440) = 0x2c1;
  *(undefined2 *)(iVar1 + 0x480) = 0x2c2;
  *(undefined2 *)(iVar1 + 0x4c0) = 0x2c3;
  iVar1 = iVar2 * 2 + iVar1;
  *(undefined2 *)(iVar1 + 0x402) = 0x6c0;
  *(undefined2 *)(iVar1 + 0x442) = 0x6c1;
  *(undefined2 *)(iVar1 + 0x482) = 0x6c2;
  *(undefined2 *)(iVar1 + 0x4c2) = 0x6c3;
  return in_lr;
}

