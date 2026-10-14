// sub_080D9F64 at 0x080D9F64 (thumb)

undefined8 sub_080D9F64(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02030106 & 1) == 0) {
    if ((DAT_02030105 & 8) == 0) {
      if (DAT_02030114 == 0) {
        DAT_02030114 = 1;
        uVar1 = 0x273;
      }
      else {
        uVar1 = 0x274;
      }
    }
    else if (DAT_02030114 < 2) {
      DAT_02030114 = 2;
      uVar1 = 0x275;
    }
    else {
      uVar1 = 0x276;
    }
  }
  else if (DAT_02030114 < 3) {
    DAT_02030114 = 3;
    uVar1 = 0x277;
  }
  else {
    uVar1 = 0x278;
  }
  return CONCAT44(in_lr,uVar1);
}

