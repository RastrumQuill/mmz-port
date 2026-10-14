// sub_080D9B68 at 0x080D9B68 (thumb)

undefined8 sub_080D9B68(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02030106 & 1) == 0) {
    if ((DAT_02030105 & 8) == 0) {
      if (DAT_02030111 == 0) {
        DAT_02030111 = 1;
        uVar1 = 0x24c;
      }
      else {
        DAT_02030111 = 2;
        uVar1 = 0x24d;
      }
    }
    else if ((*(byte *)(DAT_0203df90 + 0x2a) & 1) == 0) {
      uVar1 = 0x24e;
    }
    else {
      uVar1 = 0x24f;
    }
  }
  else if (DAT_02030111 < 3) {
    DAT_02030111 = 3;
    uVar1 = 0x250;
  }
  else {
    uVar1 = 0x251;
  }
  return CONCAT44(in_lr,uVar1);
}

