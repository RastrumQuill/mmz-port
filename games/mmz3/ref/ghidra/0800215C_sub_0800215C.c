// sub_0800215C at 0x0800215C (thumb)

undefined4 sub_0800215C(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if (uVar1 < 0xa1) {
    sub_080021D0(&DAT_03001710);
    sub_080021D0(&DAT_03001734);
    if (uVar1 == 0xa0) {
      uVar1 = DAT_04000004;
      DAT_04000004 = uVar1 & 0xffef;
      uVar2 = DAT_04000004;
      DAT_03001594 = 0x8001e11;
      uVar1 = DAT_04000200._0_2_;
      DAT_04000200._0_2_ = uVar1 & 0xfffd;
      uVar2 = DAT_04000200._0_2_;
    }
  }
  return in_lr;
}

