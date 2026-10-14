// sub_08011E00 at 0x08011E00 (thumb)

undefined4 sub_08011E00(void)

{
  undefined4 in_lr;
  
  if ((DAT_02001286 >> 8 == 6) && ((DAT_02001286 & 0xff) == 1)) {
    if ((DAT_0202dad8 & 1) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 1;
      sub_0800249C(0x5e,0);
    }
    sub_080025D8(0x5e);
  }
  else if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0x5e);
  }
  if ((DAT_02001284 >> 8 == 6) && ((DAT_02001284 & 0xff) == 2)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0x5f,0);
    }
    sub_080025D8(0x5f);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x5f);
  }
  if (((DAT_02001284 >> 8 == 6) && ((DAT_02001284 & 0xff) == 2)) &&
     ((DAT_02001286 >> 8 != 6 || ((DAT_02001286 & 0xff) != 6)))) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0x71,0);
      sub_0800249C(0x86,0x2c0);
    }
    sub_080025D8(0x71);
    sub_080025D8(0x86);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0x71);
    sub_08002624(0x86);
  }
  if ((DAT_02001286 >> 8 == 6) && ((DAT_02001286 & 0xff) == 1)) {
    DAT_0202dad9 = DAT_0202dad9 + '\x01';
    if (DAT_0202dad9 == '\x12') {
      DAT_0202dad9 = '\0';
    }
    DAT_0202dada._0_1_ = (char)DAT_0202dada + '\x01';
    if ((char)DAT_0202dada == '6') {
      DAT_0202dada._0_1_ = '\0';
    }
  }
  return in_lr;
}

