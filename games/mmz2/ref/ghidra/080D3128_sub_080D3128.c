// sub_080D3128 at 0x080D3128 (thumb)

undefined8 sub_080D3128(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if (DAT_0202ebc5 == '\0') {
      DAT_0202ebc5 = '\x01';
      uVar1 = 0x24d;
    }
    else {
      uVar1 = 0x24e;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    uVar1 = 0x24f;
  }
  else {
    uVar1 = 0x250;
  }
  return CONCAT44(in_lr,uVar1);
}

