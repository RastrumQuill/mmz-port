// sub_080D9C5C at 0x080D9C5C (thumb)

undefined8 sub_080D9C5C(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02030106 & 1) == 0) {
    if ((DAT_02030105 & 8) == 0) {
      if (DAT_02030112 == 0) {
        DAT_02030112 = 1;
        uVar1 = 0x252;
      }
      else if (((*(byte *)(DAT_0203df90 + 0x2b) & 0xf) >> 2 & 1) == 0) {
        uVar1 = 0x253;
      }
      else {
        uVar1 = 0x254;
      }
    }
    else if (DAT_02030112 < 2) {
      DAT_02030112 = 2;
      uVar1 = 0x255;
    }
    else {
      uVar1 = 0x256;
    }
  }
  else if (DAT_02030112 < 3) {
    DAT_02030112 = 3;
    uVar1 = 599;
  }
  else {
    uVar1 = 600;
  }
  return CONCAT44(in_lr,uVar1);
}

