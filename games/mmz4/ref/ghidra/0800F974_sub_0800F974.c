// sub_0800F974 at 0x0800F974 (thumb)

undefined4 sub_0800F974(void)

{
  undefined4 in_lr;
  
  DAT_0202dae0 = DAT_0202dae0 + 1;
  if ((DAT_0202cac0 & 0xf) == 3) {
    if ((DAT_02001284 >> 8 == 5) && ((DAT_02001284 & 0xff) == 0)) {
      if ((DAT_0202dad8 & 1) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 1;
        sub_0800249C(0x34,0);
        sub_0800249C(0x35,0);
        sub_0800249C(0xae,0);
      }
      sub_080025D8(0x34);
      sub_080025D8(0x35);
      sub_080025D8(0xae);
    }
    else if ((DAT_0202dad8 & 1) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 1;
      sub_08002624(0x34);
      sub_08002624(0x35);
      sub_08002624(0xae);
    }
  }
  else if ((DAT_02001284 >> 8 == 5) && ((DAT_02001284 & 0xff) == 0)) {
    if ((DAT_0202dad8 & 1) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 1;
      sub_0800249C(0x34,0);
      sub_0800249C(0x35,0);
      sub_0800249C(0xad,0);
    }
    sub_080025D8(0x34);
    sub_080025D8(0x35);
    sub_080025D8(0xad);
  }
  else if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0x34);
    sub_08002624(0x35);
    sub_08002624(0xad);
  }
  if ((DAT_02001286 >> 8 == 5) && ((DAT_02001286 & 0xff) == 1)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0x37,0);
      sub_0800249C(0x38,0);
    }
    sub_080025D8(0x37);
    sub_080025D8(0x38);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x37);
    sub_08002624(0x38);
  }
  if ((DAT_02001286 >> 8 == 5) && ((DAT_02001286 & 0xff) == 2)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0x39,0);
      sub_0800249C(0x56,0);
    }
    sub_080025D8(0x39);
    sub_080025D8(0x56);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0x39);
    sub_08002624(0x56);
  }
  if ((DAT_02001286 >> 8 == 5) && ((DAT_02001286 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0x57,0);
    }
    sub_080025D8(0x57);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0x57);
  }
  if ((DAT_02001286 >> 8 == 5) && ((DAT_02001286 & 0xff) == 4)) {
    if ((DAT_0202dad8 & 0x10) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x10;
      sub_0800249C(0x58,0);
      sub_0800249C(0x59,0);
      sub_0800249C(0x5a,0);
      sub_0800249C(0x5b,0);
      sub_0800249C(0x5d,0);
    }
    sub_080025D8(0x58);
    sub_080025D8(0x59);
    sub_080025D8(0x5a);
    sub_080025D8(0x5b);
    sub_080025D8(0x5d);
  }
  else if ((DAT_0202dad8 & 0x10) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x10;
    sub_08002624(0x58);
    sub_08002624(0x59);
    sub_08002624(0x5a);
    sub_08002624(0x5b);
    sub_08002624(0x5d);
  }
  return in_lr;
}

