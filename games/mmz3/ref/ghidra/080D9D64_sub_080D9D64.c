// sub_080D9D64 at 0x080D9D64 (thumb)

undefined8 sub_080D9D64(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02030106 & 1) == 0) {
    if (DAT_02030118 == 0) {
      DAT_02030118 = 1;
      uVar1 = 0x259;
    }
    else if (((*(byte *)(DAT_0203df90 + 0x29) & 0xf) >> 2 & 1) == 0) {
      uVar1 = 0x25a;
    }
    else {
      uVar1 = 0x25b;
    }
  }
  else if (DAT_02030118 < 2) {
    DAT_02030118 = 2;
    uVar1 = 0x25c;
  }
  else if ((*(byte *)(DAT_0203df90 + 10) & 0xf) >> 3 == 0) {
    uVar1 = 0x25d;
  }
  else {
    uVar1 = 0x25e;
  }
  return CONCAT44(in_lr,uVar1);
}

