// sub_0800C774 at 0x0800C774 (thumb)

undefined4 sub_0800C774(void)

{
  undefined4 in_lr;
  
  if (((DAT_02001284 >> 8 == 2) && ((DAT_02001284 & 0xff) == 3)) &&
     (DAT_0202dadc._0_1_ = (char)DAT_0202dadc + '\x01', (char)DAT_0202dadc == '\f')) {
    DAT_0202dadc._0_1_ = '\0';
  }
  if ((DAT_02001284 >> 8 == 2) && ((DAT_02001284 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 1) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 1;
      sub_0800249C(2,0x60);
      sub_0800249C(3,0x60);
    }
    sub_080025D8(2);
    sub_080025D8(3);
  }
  else if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(2);
    sub_08002624(3);
  }
  if ((DAT_02001284 >> 8 == 2) && ((DAT_02001284 & 0xff) == 5)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(4,0x60);
    }
    sub_080025D8(4);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(4);
  }
  if ((DAT_02001284 >> 8 == 2) && ((DAT_02001284 & 0xff) == 2)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0xb,0);
    }
    sub_080025D8(0xb);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0xb);
  }
  if ((DAT_02001286 >> 8 == 2) && ((DAT_02001286 & 0xff) == 1)) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0xe,0x160);
      sub_0800249C(0x19,0x1a0);
    }
    sub_080025D8(0xe);
    sub_080025D8(0x19);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0xe);
    sub_08002624(0x19);
  }
  if ((DAT_02001284 >> 8 == 2) && ((DAT_02001284 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 0x10) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x10;
      sub_0800249C(0xf,0xa0);
      sub_0800249C(0x10,0x180);
      sub_0800249C(0x11,0x180);
    }
    sub_080025D8(0xf);
    sub_080025D8(0x10);
    sub_080025D8(0x11);
  }
  else if ((DAT_0202dad8 & 0x10) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x10;
    sub_08002624(0xf);
    sub_08002624(0x10);
    sub_08002624(0x11);
  }
  if ((DAT_02001284 >> 8 == 2) && ((DAT_02001284 & 0xff) == 5)) {
    if ((DAT_0202dad8 & 0x20) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x20;
      sub_0800249C(0x18,0xa0);
    }
    sub_080025D8(0x18);
  }
  else if ((DAT_0202dad8 & 0x20) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x20;
    sub_08002624(0x18);
  }
  if ((DAT_02001284 >> 8 == 2) && ((DAT_02001284 & 0xff) == 8)) {
    if ((DAT_0202dad8 & 0x40) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x40;
      sub_0800249C(0x1a,0);
      sub_0800249C(0x1b,0);
    }
    sub_080025D8(0x1a);
    sub_080025D8(0x1b);
  }
  else if ((DAT_0202dad8 & 0x40) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x40;
    sub_08002624(0x1a);
    sub_08002624(0x1b);
  }
  if ((DAT_02001286 >> 8 == 2) && ((DAT_02001286 & 0xff) == 9)) {
    if ((DAT_0202dad8 & 0x80) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x80;
      sub_0800249C(0xe0,0);
      sub_0800249C(0xe1,0);
    }
    sub_080025D8(0xe0);
    sub_080025D8(0xe1);
  }
  else if ((DAT_0202dad8 & 0x80) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x80;
    sub_08002624(0xe0);
    sub_08002624(0xe1);
  }
  return in_lr;
}

