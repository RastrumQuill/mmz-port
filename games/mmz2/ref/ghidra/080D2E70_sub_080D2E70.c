// sub_080D2E70 at 0x080D2E70 (thumb)

undefined8 sub_080D2E70(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0) {
      if (DAT_0202ebc3 == 0) {
        DAT_0202ebc3 = 1;
        uVar1 = 0x23d;
      }
      else {
        uVar1 = 0x23e;
      }
    }
    else if (DAT_0202ebc3 < 2) {
      DAT_0202ebc3 = 2;
      uVar1 = 0x23f;
    }
    else {
      uVar1 = 0x240;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    if ((*(byte *)(DAT_0202e130 + 0x232) & 2) == 0) {
      uVar1 = 0x241;
    }
    else {
      uVar1 = 0x2a6;
    }
  }
  else if (DAT_0202ebc3 < 4) {
    DAT_0202ebc3 = 4;
    uVar1 = 0x242;
  }
  else {
    uVar1 = 0x243;
  }
  return CONCAT44(in_lr,uVar1);
}

