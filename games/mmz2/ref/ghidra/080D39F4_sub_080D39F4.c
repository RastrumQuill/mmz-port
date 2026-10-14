// sub_080D39F4 at 0x080D39F4 (thumb)

undefined8 sub_080D39F4(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if (DAT_0202ebca == 0) {
      DAT_0202ebca = 1;
      uVar1 = 0x27d;
    }
    else {
      uVar1 = 0x27e;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    if (DAT_0202ebca < 2) {
      DAT_0202ebca = 2;
      uVar1 = 0x27f;
    }
    else {
      uVar1 = 0x280;
    }
  }
  else {
    uVar1 = 0x281;
  }
  return CONCAT44(in_lr,uVar1);
}

