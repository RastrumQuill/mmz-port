// sub_080018D4 at 0x080018D4 (thumb)

undefined4 sub_080018D4(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  DAT_030015a8 = 0x8000b79;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xffbf;
  uVar2 = DAT_04000200._0_2_;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xff7f;
  uVar2 = DAT_04000200._0_2_;
  uVar3 = 0;
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
  do {
    iVar4 = (int)(short)uVar3;
    (&DAT_02000cb4)[iVar4] = 0xfff;
    (&DAT_02000cac)[iVar4] = (&DAT_02000cb4)[iVar4];
    (&DAT_02000cbc)[iVar4] = (&DAT_02000cac)[iVar4];
    (&DAT_02000cc4)[iVar4] = (&DAT_02000cbc)[iVar4];
    uVar3 = iVar4 + 1U & 0xffff;
  } while ((int)((iVar4 + 1U) * 0x10000) >> 0x10 < 2);
  DAT_02000ca2 = DAT_02000ca2 | 4;
  uVar1 = DAT_04000128;
  if ((uVar1 & 4) == 0) {
    DAT_030015a8 = 0x8001f2d;
    uVar1 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar1 | 0x40;
    uVar2 = DAT_04000200._0_2_;
  }
  DAT_030015ac = 0x8001f4d;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 | 0x80;
  uVar2 = DAT_04000200._0_2_;
  return in_lr;
}

