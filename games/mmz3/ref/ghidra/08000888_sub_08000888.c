// sub_08000888 at 0x08000888 (thumb)

undefined4 sub_08000888(void)

{
  uint uVar1;
  int extraout_r1;
  undefined4 uVar2;
  
  sub_080008CC();
  uVar1 = FUN_08000e28();
  if ((uVar1 & 0x7f) == 0) {
    if ((uVar1 & 0x80) == 0) {
      FUN_08000f64(2);
      uVar2 = 2;
      FUN_08000ef4(4);
      if (extraout_r1 == 0) {
        FUN_08000f28();
      }
    }
    else {
      uVar2 = 8;
      FUN_08000f64(0);
    }
  }
  else {
    uVar2 = 4;
    FUN_08000f64(1);
  }
  return uVar2;
}

