// sub_08014CE0 at 0x08014CE0 (thumb)

undefined4 sub_08014CE0(void)

{
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 0xf) && ((DAT_02002c54 & 0xff) == 0)) {
    if ((DAT_0202f4a8 & 1) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 1;
      sub_080040A8(0x7c,0);
      sub_080040A8(0x7d,0);
      sub_080040A8(0x7e,0);
      sub_080040A8(0x82,0);
      sub_080040A8(0xa6,0);
    }
    sub_080041E4(0x7c);
    sub_080041E4(0x7d);
    sub_080041E4(0x7e);
    sub_080041E4(0x82);
    sub_080041E4(0xa6);
  }
  else if ((DAT_0202f4a8 & 1) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 1;
    sub_08004230(0x7c);
    sub_08004230(0x7d);
    sub_08004230(0x7e);
    sub_08004230(0x82);
    sub_08004230(0xa6);
  }
  if ((DAT_02002c56 >> 8 == 0xf) && ((DAT_02002c56 & 0xff) == 1)) {
    if ((DAT_0202f4a8 & 2) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 2;
      sub_080040A8(0x7f,0);
      sub_080040A8(0x80,0);
      sub_080040A8(0x81,0);
    }
    sub_080041E4(0x7f);
    sub_080041E4(0x80);
    sub_080041E4(0x81);
  }
  else if ((DAT_0202f4a8 & 2) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 2;
    sub_08004230(0x7f);
    sub_08004230(0x80);
    sub_08004230(0x81);
  }
  if ((DAT_02002c54 >> 8 == 0xf) && ((DAT_02002c54 & 0xff) == 2)) {
    if ((DAT_0202f4a8 & 4) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 4;
      sub_080040A8(0xa1,0);
      sub_080040A8(0xa2,0);
      sub_080040A8(0xa3,0);
      sub_080040A8(0xa4,0);
      sub_080040A8(0xa5,0);
    }
    sub_080041E4(0xa1);
    sub_080041E4(0xa2);
    sub_080041E4(0xa3);
    sub_080041E4(0xa4);
    sub_080041E4(0xa5);
  }
  else if ((DAT_0202f4a8 & 4) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 4;
    sub_08004230(0xa1);
    sub_08004230(0xa2);
    sub_08004230(0xa3);
    sub_08004230(0xa4);
    sub_08004230(0xa5);
  }
  if ((DAT_02002c56 >> 8 == 0xf) && ((DAT_02002c56 & 0xff) == 3)) {
    if ((DAT_0202f4a8 & 8) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 8;
      sub_080040A8(0x9a,0);
      sub_080040A8(0x9b,0);
      sub_080040A8(0x9c,0);
      sub_080040A8(0x9d,0);
      sub_080040A8(0x9e,0);
      sub_080040A8(0x9f,0);
      sub_080040A8(0xa0,0);
    }
    sub_080041E4(0x9a);
    sub_080041E4(0x9b);
    sub_080041E4(0x9c);
    sub_080041E4(0x9d);
    sub_080041E4(0x9e);
    sub_080041E4(0x9f);
    sub_080041E4(0xa0);
  }
  else if ((DAT_0202f4a8 & 8) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 8;
    sub_08004230(0x9a);
    sub_08004230(0x9b);
    sub_08004230(0x9c);
    sub_08004230(0x9d);
    sub_08004230(0x9e);
    sub_08004230(0x9f);
    sub_08004230(0xa0);
  }
  if (DAT_0202f4a9 == '\0') {
    if ((DAT_02030104 & 0x10) != 0) {
      DAT_0202f4a9 = '\x01';
      sub_080093E8(1,6,0x4e);
    }
    if (DAT_0202f4a9 == '\0') {
      return in_lr;
    }
  }
  if ((DAT_02030104 & 0x10) == 0) {
    DAT_0202f4a9 = '\x01';
    sub_080093E8(1,6,0x17);
  }
  return in_lr;
}

