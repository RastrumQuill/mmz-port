// sub_0801A880 at 0x0801A880 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0801A880(int *param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  DAT_0202dae0._0_1_ = (byte)DAT_0202dae0 + 1;
  if (0x5f < (byte)DAT_0202dae0) {
    DAT_0202dae0._0_1_ = 0;
  }
  if ((*param_1 - 0x168001U < 0x34fff) &&
     (cVar1 = sub_08128954(((char)(byte)DAT_0202dae0 + -4) * 0x1000000 >> 0x18,0x18), cVar1 == '\0')
     ) {
    sub_08002B10(0x181);
  }
  DAT_0202dae0._1_1_ = DAT_0202dae0._1_1_ + 1;
  if (0xbf < DAT_0202dae0._1_1_) {
    DAT_0202dae0._1_1_ = 0;
  }
  _DAT_0202dae4 = _DAT_0202dae4 + 1;
  DAT_0202dada = DAT_0202dada + 1;
  DAT_0202dad9 = DAT_0202dad9 + '\x01';
  if (DAT_0202dad9 == ' ') {
    DAT_0202dad9 = '\0';
  }
  DAT_0202dadc._0_1_ = (char)DAT_0202dadc + '\x01';
  if ((char)DAT_0202dadc == '\x19') {
    DAT_0202dadc._0_1_ = '\0';
  }
  if ((DAT_02001284 >> 8 == 0xf) && ((DAT_02001284 & 0xff) == 0)) {
    if ((DAT_0202dad8 & 1) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 1;
      sub_0800249C(0x9e,0);
      sub_0800249C(0x9f,0);
      sub_0800249C(0xa0,0);
      sub_0800249C(0xa1,0);
      sub_0800249C(0xaf,0);
    }
    sub_080025D8(0x9e);
    sub_080025D8(0x9f);
    sub_080025D8(0xa0);
    sub_080025D8(0xa1);
    sub_080025D8(0xaf);
  }
  else if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0x9e);
    sub_08002624(0x9f);
    sub_08002624(0xa0);
    sub_08002624(0xa1);
    sub_08002624(0xaf);
  }
  if ((DAT_02001286 >> 8 == 0xf) && (((DAT_02001286 & 0xff) == 3 || ((DAT_02001286 & 0xff) == 6))))
  {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0xb0,0);
    }
    sub_080025D8(0xb0);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0xb0);
  }
  if ((DAT_02001286 >> 8 == 0xf) && ((DAT_02001286 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0xa4,0);
      sub_0800249C(0xa5,0);
      sub_0800249C(0xb1,0);
    }
    sub_080025D8(0xa4);
    sub_080025D8(0xa5);
    sub_080025D8(0xb1);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0xa4);
    sub_08002624(0xa5);
    sub_08002624(0xb1);
  }
  if ((DAT_02001284 >> 8 == 0xf) && ((DAT_02001284 & 0xff) == 4)) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0x9e,0);
      sub_0800249C(0x9f,0);
      sub_0800249C(0xa2,0);
      sub_0800249C(0xa3,0);
    }
    sub_080025D8(0x9e);
    sub_080025D8(0x9f);
    sub_080025D8(0xa2);
    sub_080025D8(0xa3);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0x9e);
    sub_08002624(0x9f);
    sub_08002624(0xa2);
    sub_08002624(0xa3);
  }
  if (DAT_0202e891 == '\x01') {
    if ((DAT_0202dad8 & 0x80) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x80;
      sub_0800249C(0xc9,800);
    }
    sub_080025D8(0xc9);
  }
  else if ((DAT_0202dad8 & 0x80) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x80;
    sub_08002624(0xc9);
    DAT_0202e891 = -1;
  }
  return in_lr;
}

