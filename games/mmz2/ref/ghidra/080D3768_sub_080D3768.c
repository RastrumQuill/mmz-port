// sub_080D3768 at 0x080D3768 (thumb)

undefined8 sub_080D3768(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if (DAT_0202ebc8 == 0) {
      DAT_0202ebc8 = 1;
      uVar1 = 0x271;
    }
    else if (DAT_0202ebc8 < 2) {
      DAT_0202ebc8 = 2;
      uVar1 = 0x272;
    }
    else {
      uVar1 = 0x273;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    if (DAT_0202ebc8 < 3) {
      DAT_0202ebc8 = 3;
      uVar1 = 0x274;
    }
    else {
      uVar1 = 0x275;
    }
  }
  else {
    uVar1 = 0x276;
  }
  return CONCAT44(in_lr,uVar1);
}

