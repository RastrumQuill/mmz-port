// sub_080DA40C at 0x080DA40C (thumb)

undefined8 sub_080DA40C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x10)) {
  case 10:
    if ((DAT_02030106 & 1) != 0) {
      uVar1 = 0x2a2;
      break;
    }
    if ((DAT_02030105 & 8) != 0) {
      uVar1 = 0x2a0;
      break;
    }
  default:
    uVar1 = 0x29e;
    break;
  case 0xb:
    if ((DAT_02030106 & 1) == 0) {
      if ((DAT_02030105 & 8) == 0) {
        if (((*(byte *)(DAT_0203df90 + 0xe) & 0xf) >> 1 & 1) == 0) {
          uVar1 = 0x2a6;
        }
        else {
          uVar1 = 0x2a7;
        }
      }
      else {
        uVar1 = 0x2a9;
      }
    }
    else {
      uVar1 = 0x2ab;
    }
    break;
  case 0xc:
    if (DAT_0203011b == '\0') {
      DAT_0203011b = '\x01';
      uVar1 = 0x2c8;
    }
    else {
      uVar1 = 0x2c9;
    }
    break;
  case 0xd:
    if (DAT_0203011c == '\0') {
      DAT_0203011c = '\x01';
      uVar1 = 0x2c0;
    }
    else {
      uVar1 = 0x2c1;
    }
    break;
  case 0xe:
    if (DAT_0203011d == '\0') {
      DAT_0203011d = '\x01';
      uVar1 = 0x2c2;
    }
    else {
      uVar1 = 0x2c3;
    }
    break;
  case 0xf:
    if (DAT_0203011e == '\0') {
      DAT_0203011e = '\x01';
      uVar1 = 0x2c4;
    }
    else {
      uVar1 = 0x2c5;
    }
    break;
  case 0x10:
    if (DAT_0203011f == '\0') {
      DAT_0203011f = '\x01';
      uVar1 = 0x2c6;
    }
    else {
      uVar1 = 0x2c7;
    }
    break;
  case 0x11:
    if (DAT_02030120 == '\0') {
      DAT_02030120 = '\x01';
      uVar1 = 700;
    }
    else {
      uVar1 = 0x2bd;
    }
    break;
  case 0x12:
    if (DAT_02030121 == '\0') {
      DAT_02030121 = '\x01';
      uVar1 = 0x2be;
    }
    else {
      uVar1 = 0x2bf;
    }
    break;
  case 0x13:
    if (DAT_02030122 == '\0') {
      DAT_02030122 = '\x01';
      uVar1 = 0x2ba;
    }
    else {
      uVar1 = 699;
    }
    break;
  case 0x14:
    if (DAT_02030123 == '\0') {
      DAT_02030123 = '\x01';
      uVar1 = 0x2ca;
    }
    else {
      uVar1 = 0x2cb;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

