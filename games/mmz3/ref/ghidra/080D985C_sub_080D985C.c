// sub_080D985C at 0x080D985C (thumb)

undefined8 sub_080D985C(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_0200243c & 0x10) == 0) {
    if ((DAT_02030106 & 1) == 0) {
      if ((DAT_02030105 & 8) == 0) {
        if (DAT_0203010f == 0) {
          DAT_0203010f = 1;
          uVar1 = 0x23d;
        }
        else if (DAT_0203010f == 1) {
          DAT_0203010f = 2;
          uVar1 = 0x23e;
        }
        else {
          DAT_0203010f = 3;
          uVar1 = 0x23f;
        }
      }
      else if (((*(byte *)(DAT_0203df90 + 0x1a) & 0xf) >> 2 & 1) == 0) {
        uVar1 = 0x241;
      }
      else {
        uVar1 = 0x2d3;
      }
    }
    else if (DAT_0203010f < 4) {
      DAT_0203010f = 4;
      uVar1 = 0x242;
    }
    else {
      uVar1 = 0x243;
    }
  }
  else if ((DAT_02030106 & 1) == 0) {
    if ((DAT_02030105 & 8) == 0) {
      if (DAT_0203010f == 0) {
        DAT_0203010f = 1;
        uVar1 = 0x2cc;
      }
      else if (DAT_0203010f == 1) {
        DAT_0203010f = 2;
        uVar1 = 0x2cd;
      }
      else {
        DAT_0203010f = 3;
        uVar1 = 0x2ce;
      }
    }
    else if (((*(byte *)(DAT_0203df90 + 0x1a) & 0xf) >> 2 & 1) == 0) {
      uVar1 = 0x2cf;
    }
    else {
      uVar1 = 0x2d0;
    }
  }
  else if (DAT_0203010f < 4) {
    DAT_0203010f = 4;
    uVar1 = 0x2d1;
  }
  else {
    uVar1 = 0x2d2;
  }
  return CONCAT44(in_lr,uVar1);
}

