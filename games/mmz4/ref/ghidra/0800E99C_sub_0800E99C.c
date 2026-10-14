// sub_0800E99C at 0x0800E99C (thumb)

undefined4 sub_0800E99C(void)

{
  undefined4 in_lr;
  
  if ((DAT_0202dad4 == '\x01') && (DAT_0202dae0 == 0)) {
    DAT_0202dae0 = sub_081016B0(&DAT_0202eb94);
  }
  else if ((DAT_0202dad4 == '\x02') &&
          ((((DAT_0202e924 & 1) == 0 && ((DAT_0202e918 & 8) == 0)) &&
           (DAT_0202eb94 = DAT_0202eb94 + -1, DAT_0202eb94 == 0)))) {
    *(undefined *)(DAT_0202dae0 + 0xd) = 1;
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_0202ea68 = 0x8000;
    DAT_0202dad4 = '\0';
    DAT_0202dadc._2_1_ = 1;
  }
  if (((DAT_02001286 >> 8 == 4) && ((DAT_02001286 & 0xff) == 1)) &&
     (DAT_0202dad9 = DAT_0202dad9 + '\x01', DAT_0202dad9 == '0')) {
    DAT_0202dad9 = '\0';
  }
  if ((DAT_0202cac0 & 0xf) == 2) {
    if ((DAT_02001284 >> 8 == 4) && ((DAT_02001284 & 0xff) == 0)) {
      if ((DAT_0202dad8 & 1) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 1;
        sub_0800249C(0x82,0);
      }
      sub_080025D8(0x82);
    }
    else if ((DAT_0202dad8 & 1) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 1;
      sub_08002624(0x82);
    }
  }
  else if ((DAT_02001284 >> 8 == 4) && ((DAT_02001284 & 0xff) == 0)) {
    if ((DAT_0202dad8 & 1) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 1;
      sub_0800249C(0xc4,0);
    }
    sub_080025D8(0xc4);
  }
  else if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0xc4);
  }
  if ((DAT_02001284 >> 8 == 4) && ((DAT_02001284 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0x7b,0);
    }
    sub_080025D8(0x7b);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x7b);
  }
  if ((DAT_02001284 >> 8 == 4) && ((DAT_02001284 & 0xff) == 4)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0x7c,0);
    }
    sub_080025D8(0x7c);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0x7c);
  }
  if ((DAT_02001286 >> 8 == 4) && ((DAT_02001286 & 0xff) == 5)) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0x7d,0);
    }
    sub_080025D8(0x7d);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0x7d);
  }
  if ((DAT_02001284 >> 8 == 4) && ((DAT_02001284 & 0xff) == 6)) {
    if ((DAT_0202dad8 & 0x10) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x10;
      sub_0800249C(0x7e,0);
      sub_0800249C(0x7f,0);
      sub_0800249C(0x83,0);
    }
    sub_080025D8(0x7e);
    sub_080025D8(0x7f);
    sub_080025D8(0x83);
  }
  else if ((DAT_0202dad8 & 0x10) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x10;
    sub_08002624(0x7e);
    sub_08002624(0x7f);
    sub_08002624(0x83);
  }
  if ((DAT_02001286 >> 8 == 4) && ((DAT_02001286 & 0xff) == 7)) {
    if ((DAT_0202dad8 & 0x20) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x20;
      sub_0800249C(0x80,0);
      sub_0800249C(0x81,0);
    }
    sub_080025D8(0x80);
    sub_080025D8(0x81);
  }
  else if ((DAT_0202dad8 & 0x20) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x20;
    sub_08002624(0x80);
    sub_08002624(0x81);
  }
  if ((((DAT_0202cac0 & 0xf) == 2) && (DAT_02001286 >> 8 == 4)) && ((DAT_02001286 & 0xff) == 1)) {
    if ((DAT_0202dad8 & 0x40) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x40;
      sub_0800249C(199,0);
    }
    sub_080025D8(199);
  }
  else if ((DAT_0202dad8 & 0x40) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x40;
    sub_08002624(199);
  }
  return in_lr;
}

