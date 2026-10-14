// sub_080D3E94 at 0x080D3E94 (thumb)

undefined8 sub_080D3E94(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if (DAT_0202ebcc == '\0') {
      DAT_0202ebcc = '\x01';
      uVar1 = 0x29e;
    }
    else {
      uVar1 = 0x29f;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    uVar1 = 0x2a0;
  }
  else {
    uVar1 = 0x2a1;
  }
  return CONCAT44(in_lr,uVar1);
}

