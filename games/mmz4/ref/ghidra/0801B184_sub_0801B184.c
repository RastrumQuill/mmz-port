// sub_0801B184 at 0x0801B184 (thumb)

undefined4 sub_0801B184(void)

{
  undefined4 in_lr;
  
  if ((DAT_0202dad6 == '\x01') && (DAT_0202daf0 == 0)) {
    DAT_0202e10e = 0x360;
    DAT_0202df0e = 7;
    sub_08001D30(&DAT_08c4480c,0xf1c0);
    sub_08002208(&DAT_08c44818,(DAT_0202df0e - 9) * 0x20 + 0x200);
    DAT_0202daf0 = sub_081016B0(&DAT_0202daf4);
    if (DAT_0202daf0 != 0) {
      *(int *)(DAT_0202daf0 + 0x54) = *(int *)(DAT_0202daf0 + 0x54) + -0x1000;
    }
  }
  else if ((DAT_0202dad6 == '\x02') &&
          ((DAT_0202daf4 = DAT_0202daf4 + -1, DAT_0202daf4 == 0 || ((DAT_0202e918 & 0x10) != 0)))) {
    *(undefined *)(DAT_0202daf0 + 0xd) = 1;
    DAT_0202dad6 = '\0';
  }
  DAT_0202daec = DAT_0202daec + 1;
  if (DAT_02001284 >> 8 == 0x10) {
    if (((DAT_02001284 & 0xff) == 6) &&
       (DAT_0202dada._0_1_ = (char)DAT_0202dada + '\x01', (char)DAT_0202dada == '\b')) {
      DAT_0202dada._0_1_ = '\0';
    }
    if ((DAT_02001284 >> 8 == 0x10) && ((DAT_02001284 & 0xff) == 0)) {
      if ((DAT_0202dad8 & 1) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 1;
        sub_0800249C(0x8a,0);
      }
      sub_080025D8(0x8a);
      goto LAB_0801b2f8;
    }
  }
  if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0x8a);
  }
LAB_0801b2f8:
  if ((DAT_02001286 >> 8 == 0x10) && ((DAT_02001286 & 0xff) == 1)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0x8b,0);
      sub_0800249C(0x8c,0);
      sub_0800249C(0x8d,0);
      sub_0800249C(0x8e,0);
    }
    sub_080025D8(0x8b);
    sub_080025D8(0x8c);
    sub_080025D8(0x8d);
    sub_080025D8(0x8e);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x8b);
    sub_08002624(0x8c);
    sub_08002624(0x8d);
    sub_08002624(0x8e);
  }
  if ((DAT_02001284 >> 8 == 0x10) && ((DAT_02001284 & 0xff) == 2)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0x8f,0);
    }
    sub_080025D8(0x8f);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0x8f);
  }
  if ((DAT_02001284 >> 8 == 0x10) && ((DAT_02001284 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0x90,0);
      sub_0800249C(0x93,0);
    }
    sub_080025D8(0x90);
    sub_080025D8(0x93);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0x90);
    sub_08002624(0x93);
  }
  if ((DAT_02001284 >> 8 == 0x10) && ((DAT_02001284 & 0xff) == 5)) {
    if ((DAT_0202dad8 & 0x10) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x10;
      sub_0800249C(0x91,0);
    }
    sub_080025D8(0x91);
  }
  else if ((DAT_0202dad8 & 0x10) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x10;
    sub_08002624(0x91);
  }
  if ((DAT_02001286 >> 8 == 0x10) && ((DAT_02001286 & 0xff) == 7)) {
    if ((DAT_0202dad8 & 0x20) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x20;
      sub_0800249C(0x92,0);
    }
    sub_080025D8(0x92);
  }
  else if ((DAT_0202dad8 & 0x20) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x20;
    sub_08002624(0x92);
  }
  if ((((DAT_02001284 >> 8 == 0x10) && ((DAT_02001284 & 0xff) == 6)) && (DAT_02001286 >> 8 == 0x10))
     && ((DAT_02001286 & 0xff) == 8)) {
    if ((DAT_0202dad8 & 0x40) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x40;
      sub_0800249C(0xc6,0);
    }
    sub_080025D8(0xc6);
  }
  else if ((DAT_0202dad8 & 0x40) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x40;
    sub_08002624(0xc6);
  }
  return in_lr;
}

