// sub_080DA7E0 at 0x080DA7E0 (thumb)

undefined8 sub_080DA7E0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 0x17) {
    if ((DAT_02030106 & 1) != 0) {
      uVar2 = 0x2af;
      goto LAB_080da8c2;
    }
    if ((DAT_02030105 & 8) != 0) {
      uVar2 = 0x2ae;
      goto LAB_080da8c2;
    }
  }
  else if (bVar1 < 0x18) {
    if (bVar1 == 0x16) {
      if (DAT_02030125 == '\0') {
        DAT_02030125 = '\x01';
        uVar2 = 0x2b4;
      }
      else {
        uVar2 = 0x2b5;
      }
      goto LAB_080da8c2;
    }
  }
  else {
    if (bVar1 == 0x18) {
      if ((DAT_02030106 & 1) == 0) {
        if ((DAT_02030105 & 8) == 0) {
          uVar2 = 0x2b0;
        }
        else if (((*(byte *)(DAT_0203df90 + 5) & 0xf) >> 2 & 1) == 0) {
          uVar2 = 0x2b1;
        }
        else {
          uVar2 = 0x2b2;
        }
      }
      else {
        uVar2 = 0x2b3;
      }
      goto LAB_080da8c2;
    }
    if (bVar1 == 0x19) {
      if (DAT_02030128 == '\0') {
        DAT_02030128 = '\x01';
        uVar2 = 0x2b8;
      }
      else {
        uVar2 = 0x2b9;
      }
      goto LAB_080da8c2;
    }
  }
  uVar2 = 0x2ad;
LAB_080da8c2:
  return CONCAT44(in_lr,uVar2);
}

