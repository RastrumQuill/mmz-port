// sub_080D324C at 0x080D324C (thumb)

undefined8 sub_080D324C(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if (DAT_0202ebc6 == 0) {
      DAT_0202ebc6 = 1;
      uVar1 = 0x251;
    }
    else {
      uVar1 = 0x252;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    if (DAT_0202ebc6 < 2) {
      DAT_0202ebc6 = 2;
      uVar1 = 0x253;
    }
    else {
      uVar1 = 0x254;
    }
  }
  else {
    uVar1 = 0x255;
  }
  return CONCAT44(in_lr,uVar1);
}

