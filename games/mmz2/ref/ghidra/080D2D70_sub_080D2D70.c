// sub_080D2D70 at 0x080D2D70 (thumb)

undefined8 sub_080D2D70(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0) {
      if (DAT_0202ebc2 == 0) {
        DAT_0202ebc2 = 1;
        uVar1 = 0x237;
      }
      else {
        uVar1 = 0x238;
      }
    }
    else {
      uVar1 = 0x239;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    if (DAT_0202ebc2 < 2) {
      DAT_0202ebc2 = 2;
      uVar1 = 0x23a;
    }
    else {
      uVar1 = 0x23b;
    }
  }
  else {
    uVar1 = 0x23c;
  }
  return CONCAT44(in_lr,uVar1);
}

