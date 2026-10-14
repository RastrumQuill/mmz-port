// sub_080D9E68 at 0x080D9E68 (thumb)

undefined8 sub_080D9E68(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02030106 & 1) == 0) {
    if ((DAT_02030105 & 8) == 0) {
      if (DAT_02030113 == 0) {
        DAT_02030113 = 1;
        uVar1 = 0x26c;
      }
      else {
        uVar1 = 0x26d;
      }
    }
    else if (DAT_02030113 < 2) {
      DAT_02030113 = 2;
      uVar1 = 0x26e;
    }
    else if (DAT_02030113 < 3) {
      DAT_02030113 = 3;
      uVar1 = 0x26f;
    }
    else {
      uVar1 = 0x270;
    }
  }
  else if ((*(byte *)(DAT_0203df90 + 0x2b) & 1) == 0) {
    uVar1 = 0x271;
  }
  else {
    uVar1 = 0x272;
  }
  return CONCAT44(in_lr,uVar1);
}

