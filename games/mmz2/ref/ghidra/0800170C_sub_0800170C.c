// sub_0800170C at 0x0800170C (thumb)

undefined4 sub_0800170C(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  DAT_030015a8 = 0x8000b79;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xffbf;
  uVar2 = DAT_04000200._0_2_;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xff7f;
  uVar2 = DAT_04000200._0_2_;
  DAT_02000cdc = 0;
  DAT_02000cdd = 0;
  DAT_02000ce2 = 0xfff;
  DAT_02000cdf = 0;
  DAT_02000cde = 0;
  DAT_02000ce0 = 0;
  DAT_02000ce1 = 0;
  DAT_02000d0a = (undefined2)param_3;
  DAT_02000cf0 = param_2 + param_3;
  DAT_02000cf4 = param_2 + param_3 * 2;
  DAT_02000cf8 = param_2 + param_3 * 3;
  uVar3 = 0;
  DAT_02000cec = param_2;
  DAT_02000cfc = param_1;
  do {
    (&DAT_02000d00)[(short)uVar3] = 0;
    uVar4 = (int)(short)uVar3 + 1;
    uVar3 = uVar4 & 0xffff;
  } while ((int)(uVar4 * 0x10000) >> 0x10 < 2);
  DAT_02000ca2 = DAT_02000ca2 | 2;
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

