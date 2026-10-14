// sub_080DA238 at 0x080DA238 (thumb)

undefined8 sub_080DA238(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02030106 & 1) == 0) {
    if ((DAT_02030105 & 8) == 0) {
      if (DAT_02030117 == 0) {
        DAT_02030117 = 1;
        uVar1 = 0x286;
      }
      else {
        uVar1 = 0x287;
      }
    }
    else if (DAT_02030117 < 2) {
      DAT_02030117 = 2;
      uVar1 = 0x288;
    }
    else {
      uVar1 = 0x289;
    }
  }
  else if (DAT_02030117 < 3) {
    DAT_02030117 = 3;
    uVar1 = 0x28a;
  }
  else {
    uVar1 = 0x28b;
  }
  return CONCAT44(in_lr,uVar1);
}

