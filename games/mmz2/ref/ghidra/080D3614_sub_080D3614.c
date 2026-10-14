// sub_080D3614 at 0x080D3614 (thumb)

undefined8 sub_080D3614(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(DAT_0202e130 + 0x200) & 0x200) == 0) {
    if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
      if (DAT_0202ebc7 == 0) {
        DAT_0202ebc7 = 1;
        uVar1 = 0x26c;
      }
      else {
        uVar1 = 0x26d;
      }
    }
    else if ((DAT_0202ebb5 & 0x80) == 0) {
      if (DAT_0202ebc7 < 2) {
        DAT_0202ebc7 = 2;
        uVar1 = 0x26e;
      }
      else {
        uVar1 = 0x26f;
      }
    }
    else {
      uVar1 = 0x270;
    }
  }
  else {
    uVar1 = 0x2a5;
  }
  return CONCAT44(in_lr,uVar1);
}

