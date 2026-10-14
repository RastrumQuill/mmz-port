// sub_08000B2C at 0x08000B2C (thumb)

undefined4 sub_08000B2C(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if ((uVar1 < 0xa0) && (sub_08000BE8(&DAT_0300051c), uVar1 == 0x9f)) {
    uVar1 = DAT_04000004;
    DAT_04000004 = uVar1 & 0xffef;
    uVar2 = DAT_04000004;
    uVar1 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar1 & 0xfffd;
    uVar2 = DAT_04000200._0_2_;
  }
  return in_lr;
}

