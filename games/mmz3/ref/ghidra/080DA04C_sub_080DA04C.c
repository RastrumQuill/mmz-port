// sub_080DA04C at 0x080DA04C (thumb)

undefined8 sub_080DA04C(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02030106 & 1) == 0) {
    if ((DAT_02030105 & 8) == 0) {
      if (DAT_02030115 == 0) {
        DAT_02030115 = 1;
        uVar1 = 0x279;
      }
      else {
        uVar1 = 0x27a;
      }
    }
    else if (DAT_02030115 < 2) {
      DAT_02030115 = 2;
      uVar1 = 0x27b;
    }
    else {
      uVar1 = 0x27c;
    }
  }
  else if (DAT_02030115 < 3) {
    DAT_02030115 = 3;
    uVar1 = 0x27d;
  }
  else {
    uVar1 = 0x27e;
  }
  return CONCAT44(in_lr,uVar1);
}

