// sub_080019E0 at 0x080019E0 (thumb)

undefined4 sub_080019E0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xffbf;
  uVar2 = DAT_04000200._0_2_;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xff7f;
  uVar2 = DAT_04000200._0_2_;
  DAT_04000128 = 0;
  DAT_04000134 = 0xc000;
  DAT_04000134 = 0;
  DAT_04000128 = 0x6003;
  uVar1 = DAT_04000128;
  if ((uVar1 & 4) == 0) {
    DAT_030015a8 = 0x8001f2d;
    uVar1 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar1 | 0x40;
    uVar2 = DAT_04000200._0_2_;
    DAT_0400010c = 0xc0d256;
  }
  else {
    DAT_030015a8 = 0x8000b79;
    uVar1 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar1 & 0xffbf;
    uVar2 = DAT_04000200._0_2_;
  }
  DAT_030015ac = 0x8001f4d;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 | 0x80;
  uVar2 = DAT_04000200._0_2_;
  return in_lr;
}

