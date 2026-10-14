// sub_080D3B28 at 0x080D3B28 (thumb)

undefined8 sub_080D3B28(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if (DAT_0202ebcb == 0) {
      DAT_0202ebcb = 1;
      uVar1 = 0x282;
    }
    else {
      uVar1 = 0x283;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    if (DAT_0202ebcb < 2) {
      DAT_0202ebcb = 2;
      uVar1 = 0x284;
    }
    else {
      uVar1 = 0x285;
    }
  }
  else {
    uVar1 = 0x286;
  }
  return CONCAT44(in_lr,uVar1);
}

