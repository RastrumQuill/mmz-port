// sub_08016C00 at 0x08016C00 (thumb)

undefined4 sub_08016C00(void)

{
  undefined4 in_lr;
  
  DAT_0202dad9 = DAT_0202dad9 + '\x01';
  if (DAT_0202dad9 == '&') {
    DAT_0202dad9 = '\0';
  }
  DAT_0202dada = DAT_0202dada + -1;
  if (DAT_0202dada == 0) {
    DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039;
    DAT_0202dada = ((ushort)((uint)DAT_0203587c >> 0x10) & 0x7f) + 0x98;
  }
  if ((DAT_02001286 >> 8 == 0xb) && ((DAT_02001286 & 0xff) == 1)) {
    if ((DAT_0202dad8 & 1) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 1;
      sub_0800249C(0x2a,0);
      sub_0800249C(0x2b,0);
    }
    sub_080025D8(0x2a);
    sub_080025D8(0x2b);
  }
  else if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0x2a);
    sub_08002624(0x2b);
  }
  if ((DAT_02001284 >> 8 == 0xb) && ((DAT_02001284 & 0xff) == 4)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0x2c,0);
    }
    sub_080025D8(0x2c);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x2c);
  }
  if ((DAT_02001284 >> 8 == 0xb) && ((DAT_02001284 & 0xff) == 5)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0x2d,0);
    }
    sub_080025D8(0x2d);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0x2d);
  }
  if ((DAT_02001284 >> 8 == 0xb) && ((DAT_02001284 & 0xff) == 8)) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0x44,0);
      sub_0800249C(0x45,0);
      sub_0800249C(0x46,0);
      sub_0800249C(0x47,0);
    }
    sub_080025D8(0x44);
    sub_080025D8(0x45);
    sub_080025D8(0x46);
    sub_080025D8(0x47);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0x44);
    sub_08002624(0x45);
    sub_08002624(0x46);
    sub_08002624(0x47);
  }
  if ((DAT_02001284 >> 8 == 0xb) && ((DAT_02001284 & 0xff) == 10)) {
    if ((DAT_0202dad8 & 0x10) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x10;
      sub_0800249C(0x51,0);
      sub_0800249C(0x52,0);
      sub_0800249C(0x53,0);
    }
    sub_080025D8(0x51);
    sub_080025D8(0x52);
    sub_080025D8(0x53);
  }
  else if ((DAT_0202dad8 & 0x10) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x10;
    sub_08002624(0x51);
    sub_08002624(0x52);
    sub_08002624(0x53);
  }
  if ((((DAT_0202dad6 & 1) == 0) || (DAT_02001284 >> 8 != 0xb)) || ((DAT_02001284 & 0xff) != 0xc)) {
    if ((DAT_0202dad8 & 0x20) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 0x20;
      sub_08002624(0xcb);
    }
  }
  else {
    if ((DAT_0202dad8 & 0x20) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x20;
      sub_0800249C(0xcb,0);
    }
    sub_080025D8(0xcb);
  }
  if ((((DAT_0202dad6 & 2) == 0) || (DAT_02001284 >> 8 != 0xb)) ||
     (((DAT_02001284 & 0xff) != 0xc && ((DAT_02001284 & 0xff) != 0xd)))) {
    if ((DAT_0202dad8 & 0x40) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 0x40;
      sub_08002624(0xcc);
    }
  }
  else {
    if ((DAT_0202dad8 & 0x40) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x40;
      sub_0800249C(0xcc,0);
    }
    sub_080025D8(0xcc);
  }
  if ((((DAT_0202dad6 & 4) == 0) || (DAT_02001284 >> 8 != 0xb)) ||
     (((DAT_02001284 & 0xff) != 0xc && ((DAT_02001284 & 0xff) != 0xd)))) {
    if ((DAT_0202dad8 & 0x80) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 0x80;
      sub_08002624(0xcd);
    }
  }
  else {
    if ((DAT_0202dad8 & 0x80) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x80;
      sub_0800249C(0xcd,0);
    }
    sub_080025D8(0xcd);
  }
  return in_lr;
}

