// sub_0800D830 at 0x0800D830 (thumb)

undefined4 sub_0800D830(void)

{
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 0) {
    if ((DAT_02001284 >> 8 == 3) && ((DAT_02001284 & 0xff) == 0)) {
      if ((DAT_0202dad8 & 0x10) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 0x10;
        sub_0800249C(0xab,0);
      }
      sub_080025D8(0xab);
    }
    else if ((DAT_0202dad8 & 0x10) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 0x10;
      sub_08002624(0xab);
    }
    if ((DAT_02001286 >> 8 == 3) && ((DAT_02001286 & 0xff) == 1)) {
      if ((DAT_0202dad8 & 1) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 1;
        sub_0800249C(0x1c,0);
        sub_0800249C(0xaa,0);
      }
      sub_080025D8(0x1c);
      sub_080025D8(0xaa);
    }
    else if ((DAT_0202dad8 & 1) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 1;
      sub_08002624(0x1c);
      sub_08002624(0xaa);
    }
  }
  if ((DAT_02001286 >> 8 == 3) && ((DAT_02001286 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0x1d,0);
      sub_0800249C(0x1e,0);
    }
    sub_080025D8(0x1d);
    sub_080025D8(0x1e);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x1d);
    sub_08002624(0x1e);
  }
  if ((DAT_02001286 >> 8 == 3) && ((DAT_02001286 & 0xff) == 4)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0x1f,0);
      sub_0800249C(0x20,0);
      sub_0800249C(0x21,0);
    }
    sub_080025D8(0x1f);
    sub_080025D8(0x20);
    sub_080025D8(0x21);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0x1f);
    sub_08002624(0x20);
    sub_08002624(0x21);
  }
  if ((DAT_02001284 >> 8 == 3) && ((DAT_02001284 & 0xff) == 5)) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0x22,0);
      sub_0800249C(0x23,0);
    }
    sub_080025D8(0x22);
    sub_080025D8(0x23);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0x22);
    sub_08002624(0x23);
  }
  if ((DAT_02001286 >> 8 == 3) && ((DAT_02001286 & 0xff) == 3)) {
    DAT_0202dad9 = DAT_0202dad9 + 1 & 7;
  }
  return in_lr;
}

