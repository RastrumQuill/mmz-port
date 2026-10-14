// sub_08034794 at 0x08034794 (thumb)

undefined8 sub_08034794(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_0200243f & 0x80) == 0) {
    if ((DAT_0200243d & 1) == 0) {
      if ((DAT_0200243a & 0x80) == 0) {
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
  return CONCAT44(in_lr,uVar1);
}

