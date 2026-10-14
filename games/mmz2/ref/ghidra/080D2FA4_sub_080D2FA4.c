// sub_080D2FA4 at 0x080D2FA4 (thumb)

undefined8 sub_080D2FA4(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0) {
      if (DAT_0202ebc4 == 0) {
        DAT_0202ebc4 = 1;
        uVar1 = 0x244;
      }
      else {
        uVar1 = 0x245;
      }
    }
    else if (DAT_0202ebc4 < 2) {
      DAT_0202ebc4 = 2;
      uVar1 = 0x246;
    }
    else {
      uVar1 = 0x247;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    if (DAT_0202ebc4 < 4) {
      DAT_0202ebc4 = 4;
      uVar1 = 0x248;
    }
    else if (DAT_0202ebc4 < 5) {
      DAT_0202ebc4 = 5;
      uVar1 = 0x249;
    }
    else {
      uVar1 = 0x24a;
    }
  }
  else if (DAT_0202ebc4 < 6) {
    DAT_0202ebc4 = 6;
    uVar1 = 0x24b;
  }
  else {
    uVar1 = 0x24c;
  }
  return CONCAT44(in_lr,uVar1);
}

