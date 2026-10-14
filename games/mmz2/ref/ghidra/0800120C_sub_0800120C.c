// sub_0800120C at 0x0800120C (thumb)

undefined4 sub_0800120C(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  DAT_030015a8 = 0x8000b79;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xffbf;
  uVar2 = DAT_04000200._0_2_;
  DAT_030015ac = 0x8000b79;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xff7f;
  uVar2 = DAT_04000200._0_2_;
  DAT_02000ca1 = 0;
  DAT_02000ca0 = 0;
  DAT_02000ca4 = 0;
  DAT_02000ca2 = 0;
  DAT_02000ca5 = 0;
  DAT_02000ca6 = 0;
  DAT_02000cdc = 0;
  DAT_02000cdd = 0;
  DAT_02000ce2 = 0xfff;
  DAT_02000cdf = 0;
  DAT_02000cde = 0;
  DAT_02000ce0 = 0;
  DAT_02000ce1 = 0;
  DAT_02000ca8 = 0;
  DAT_02000ca9 = 0;
  DAT_02000caa = 0;
  DAT_02000cab = 0;
  DAT_02000ccc = 0xff;
  DAT_02000cce = 0xff;
  DAT_02000cd0 = 0;
  DAT_02000cd2 = 0xfff;
  DAT_02000cd4 = 0;
  DAT_02000cd6 = 0;
  DAT_02000cd8 = 0;
  uVar3 = 0;
  do {
    iVar5 = (int)(short)uVar3;
    (&DAT_02000cb4)[iVar5] = 0xfff;
    (&DAT_02000cac)[iVar5] = (&DAT_02000cb4)[iVar5];
    (&DAT_02000cbc)[iVar5] = (&DAT_02000cac)[iVar5];
    (&DAT_02000cc4)[iVar5] = (&DAT_02000cbc)[iVar5];
    uVar3 = iVar5 + 1U & 0xffff;
  } while ((int)((iVar5 + 1U) * 0x10000) >> 0x10 < 2);
  uVar3 = 0;
  do {
    (&DAT_04000120)[(short)uVar3] = 0xffff;
    uVar4 = (int)(short)uVar3 + 1;
    uVar3 = uVar4 & 0xffff;
  } while ((int)(uVar4 * 0x10000) >> 0x10 < 2);
  return in_lr;
}

