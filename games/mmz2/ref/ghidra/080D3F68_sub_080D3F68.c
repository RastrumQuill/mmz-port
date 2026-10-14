// sub_080D3F68 at 0x080D3F68 (thumb)

undefined8 sub_080D3F68(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if ((*(byte *)(DAT_0202e130 + 0x22a) & 0x40) == 0) {
      uVar1 = 0x2a2;
    }
    else {
      uVar1 = 0x2a7;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    uVar1 = 0x2a3;
  }
  else {
    uVar1 = 0x2a4;
  }
  return CONCAT44(in_lr,uVar1);
}

