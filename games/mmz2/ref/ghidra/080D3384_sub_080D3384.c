// sub_080D3384 at 0x080D3384 (thumb)

undefined8 sub_080D3384(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0) {
      uVar1 = 0x256;
    }
    else {
      uVar1 = 599;
    }
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    uVar1 = 600;
  }
  else {
    uVar1 = 0x259;
  }
  return CONCAT44(in_lr,uVar1);
}

