// sub_08001810 at 0x08001810 (thumb)

undefined4 sub_08001810(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  DAT_030015a8 = 0x8000b79;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xffbf;
  uVar2 = DAT_04000200._0_2_;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xff7f;
  uVar2 = DAT_04000200._0_2_;
  DAT_02000d08 = 0;
  uVar4 = 0;
  do {
    iVar3 = (int)(short)uVar4;
    (&DAT_02000d00)[iVar3] = 0;
    (&DAT_02000ce4)[iVar3] = 0;
    uVar4 = iVar3 + 1U & 0xffff;
  } while ((int)((iVar3 + 1U) * 0x10000) >> 0x10 < 2);
  DAT_02000ce0 = 1;
  DAT_02000cdf = 0;
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

