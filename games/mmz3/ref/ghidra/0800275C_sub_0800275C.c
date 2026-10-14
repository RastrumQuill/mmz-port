// sub_0800275C at 0x0800275C (thumb)

undefined4 sub_0800275C(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (DAT_02001790 != '\0') {
    DAT_0400010c = 0xff7c;
    DAT_0400010e = 0x41;
    DAT_02000004 = DAT_04000208;
    DAT_04000208 = 0;
    uVar1 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar1 | 0x40;
    DAT_04000208 = DAT_02000004;
  }
  return in_lr;
}

