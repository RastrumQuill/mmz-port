// sub_080DA130 at 0x080DA130 (thumb)

undefined8 sub_080DA130(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02030106 & 1) == 0) {
    if ((DAT_02030105 & 8) == 0) {
      if (DAT_02030116 == 0) {
        DAT_02030116 = 1;
        uVar1 = 0x27f;
      }
      else {
        uVar1 = 0x280;
      }
    }
    else if (DAT_02030116 < 2) {
      DAT_02030116 = 2;
      uVar1 = 0x281;
    }
    else {
      uVar1 = 0x282;
    }
  }
  else if (DAT_02030116 < 3) {
    DAT_02030116 = 3;
    uVar1 = 0x283;
  }
  else if (((*(byte *)(DAT_0203df90 + 0x2b) & 0xf) >> 1 & 1) == 0) {
    uVar1 = 0x284;
  }
  else {
    uVar1 = 0x285;
  }
  return CONCAT44(in_lr,uVar1);
}

