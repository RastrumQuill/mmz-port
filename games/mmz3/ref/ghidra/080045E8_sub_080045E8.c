// sub_080045E8 at 0x080045E8 (thumb)

undefined4 sub_080045E8(void)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = DAT_020002a0;
  if (DAT_020002a0 == 0) {
    if (DAT_020002a2 != 0) {
      sub_080FCCE4();
      DAT_020002a2 = sVar1;
      DAT_020002a0 = 8;
    }
  }
  else {
    DAT_020002a0 = DAT_020002a0 + -1;
  }
  sub_080FCCD8();
  return in_lr;
}

