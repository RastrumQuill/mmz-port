// sub_080D9A58 at 0x080D9A58 (thumb)

undefined8 sub_080D9A58(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02030106 & 1) == 0) {
    if ((DAT_02030105 & 8) == 0) {
      if (DAT_02030110 == 0) {
        DAT_02030110 = 1;
        uVar1 = 0x244;
      }
      else {
        DAT_02030110 = 2;
        uVar1 = 0x245;
      }
    }
    else if (DAT_02030110 < 3) {
      DAT_02030110 = 3;
      uVar1 = 0x246;
    }
    else if ((*(byte *)(DAT_0203df90 + 0x1c) & 0xf) >> 3 == 0) {
      uVar1 = 0x247;
    }
    else {
      uVar1 = 0x248;
    }
  }
  else if (DAT_02030110 < 4) {
    DAT_02030110 = 4;
    uVar1 = 0x249;
  }
  else {
    uVar1 = 0x24a;
  }
  return CONCAT44(in_lr,uVar1);
}

