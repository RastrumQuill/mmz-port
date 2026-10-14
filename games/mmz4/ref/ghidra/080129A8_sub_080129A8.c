// sub_080129A8 at 0x080129A8 (thumb)

undefined4 sub_080129A8(void)

{
  char cVar1;
  char cVar2;
  undefined4 in_lr;
  
  cVar2 = -(char)((int)-(DAT_0202e8ba & 0x10) >> 0x1f);
  if ((DAT_0202e8ba & 0x20) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if ((DAT_0202e8ba & 0x40) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if ((DAT_0202e8ba & 0x80) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if ((DAT_0202cac0 & 0xf) == 0) {
    cVar1 = '\x06';
  }
  else {
    cVar1 = '\x04';
  }
  DAT_0202dadc._0_1_ = cVar1 - cVar2;
  if ((DAT_02001284 >> 8 == 7) && ((DAT_02001284 & 0xff) == 2)) {
    if ((DAT_0202dad8 & 1) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 1;
      sub_0800249C(0x24,0);
      sub_0800249C(0x25,0);
      sub_0800249C(0x26,0);
    }
    sub_080025D8(0x24);
    sub_080025D8(0x25);
    sub_080025D8(0x26);
  }
  else if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0x24);
    sub_08002624(0x25);
    sub_08002624(0x26);
  }
  if ((DAT_0202cac0 & 0xf) == 0) {
    if ((DAT_02001286 >> 8 == 7) && ((DAT_02001286 & 0xff) == 3)) {
      if ((DAT_0202dad8 & 2) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 2;
        sub_0800249C(0x27,0);
        sub_0800249C(0x2e,0);
        sub_0800249C(0xb5,0);
      }
      sub_080025D8(0x27);
      sub_080025D8(0x2e);
      sub_080025D8(0xb5);
    }
    else if ((DAT_0202dad8 & 2) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 2;
      sub_08002624(0x27);
      sub_08002624(0x2e);
      sub_08002624(0xb5);
    }
    if ((DAT_02001284 >> 8 == 7) && ((DAT_02001284 & 0xff) == 4)) {
      if ((DAT_0202dad8 & 4) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 4;
        sub_0800249C(0x28,0);
        sub_0800249C(0x29,0);
        sub_0800249C(0xb3,0);
      }
      sub_080025D8(0x28);
      sub_080025D8(0x29);
      sub_080025D8(0xb3);
    }
    else if ((DAT_0202dad8 & 4) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 4;
      sub_08002624(0x28);
      sub_08002624(0x29);
      sub_08002624(0xb3);
    }
  }
  else {
    if ((DAT_02001286 >> 8 == 7) && ((DAT_02001286 & 0xff) == 3)) {
      if ((DAT_0202dad8 & 2) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 2;
        sub_0800249C(0x27,0);
        sub_0800249C(0x2e,0);
        sub_0800249C(0xb2,0);
      }
      sub_080025D8(0x27);
      sub_080025D8(0x2e);
      sub_080025D8(0xb2);
    }
    else if ((DAT_0202dad8 & 2) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 2;
      sub_08002624(0x27);
      sub_08002624(0x2e);
      sub_08002624(0xb2);
    }
    if ((DAT_02001284 >> 8 == 7) && ((DAT_02001284 & 0xff) == 4)) {
      if ((DAT_0202dad8 & 4) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 4;
        sub_0800249C(0x28,0);
        sub_0800249C(0x29,0);
        sub_0800249C(0xb4,0);
      }
      sub_080025D8(0x28);
      sub_080025D8(0x29);
      sub_080025D8(0xb4);
    }
    else if ((DAT_0202dad8 & 4) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 4;
      sub_08002624(0x28);
      sub_08002624(0x29);
      sub_08002624(0xb4);
    }
  }
  return in_lr;
}

