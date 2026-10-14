// sub_080D38B0 at 0x080D38B0 (thumb)

undefined8 sub_080D38B0(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if (DAT_0202ebc9 == 0) {
      DAT_0202ebc9 = 1;
      uVar1 = 0x277;
    }
    else {
      uVar1 = 0x278;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    if (DAT_0202ebc9 < 2) {
      DAT_0202ebc9 = 2;
      uVar1 = 0x279;
    }
    else {
      uVar1 = 0x27a;
    }
  }
  else if (DAT_0202ebc9 < 3) {
    DAT_0202ebc9 = 3;
    uVar1 = 0x27b;
  }
  else {
    uVar1 = 0x27c;
  }
  return CONCAT44(in_lr,uVar1);
}

