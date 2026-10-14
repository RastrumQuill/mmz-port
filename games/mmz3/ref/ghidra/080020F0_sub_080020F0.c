// sub_080020F0 at 0x080020F0 (thumb)

undefined4 sub_080020F0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if ((uVar1 < 0xa1) && (sub_080021D0(&DAT_03001734), uVar1 == 0xa0)) {
    uVar1 = DAT_04000004;
    DAT_04000004 = uVar1 & 0xffef;
    uVar2 = DAT_04000004;
    DAT_03001594 = 0x8001e11;
    uVar1 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar1 & 0xfffd;
    uVar2 = DAT_04000200._0_2_;
  }
  return in_lr;
}

