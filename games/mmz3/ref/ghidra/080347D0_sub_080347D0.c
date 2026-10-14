// sub_080347D0 at 0x080347D0 (thumb)

undefined8 sub_080347D0(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02002442 & 1) == 0) {
    if ((DAT_02002440 & 1) == 0) {
      if ((DAT_0200243c & 0x20) == 0) {
        if ((DAT_02002439 & 4) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 4;
  }
  return CONCAT44(in_lr,uVar1);
}

