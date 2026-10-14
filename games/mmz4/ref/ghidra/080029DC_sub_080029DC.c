// sub_080029DC at 0x080029DC (thumb)

undefined4 sub_080029DC(void)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = DAT_02000020;
  if (DAT_02000020 == 0) {
    if (DAT_02000022 != 0) {
      sub_081270B8();
      DAT_02000022 = sVar1;
      DAT_02000020 = 8;
    }
  }
  else {
    DAT_02000020 = DAT_02000020 + -1;
  }
  sub_081270AC();
  return in_lr;
}

