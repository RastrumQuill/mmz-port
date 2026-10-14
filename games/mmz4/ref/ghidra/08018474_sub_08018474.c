// sub_08018474 at 0x08018474 (thumb)

undefined4 sub_08018474(void)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((DAT_0202daf0._1_1_ == '\0') && ((char)DAT_0202daf0 != '\0')) {
    DAT_0202daf0._1_1_ = '\x01';
    sub_08002B10(0x17c);
  }
  else if ((DAT_0202daf0._1_1_ != '\0') && ((char)DAT_0202daf0 == '\0')) {
    DAT_0202daf0._1_1_ = (char)DAT_0202daf0;
    sub_08002B5C(0x17c);
  }
  DAT_0202daf0._0_1_ = 0;
  if ((DAT_0202daec != 0) &&
     (iVar1 = DAT_0202daec - 1, DAT_0202daec = (ushort)iVar1, iVar1 * 0x10000 < 0)) {
    DAT_0202daec = 0x7fff;
  }
  if ((DAT_02001286 >> 8 == 0xc) && ((DAT_02001286 & 0xff) == 4)) {
    if ((DAT_0202dad8 & 1) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 1;
      sub_0800249C(0x3b,0);
      sub_0800249C(0x3c,0);
      sub_0800249C(0x3d,0);
      sub_0800249C(0x3e,0);
    }
    sub_080025D8(0x3b);
    sub_080025D8(0x3c);
    sub_080025D8(0x3d);
    sub_080025D8(0x3e);
  }
  else if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0x3b);
    sub_08002624(0x3c);
    sub_08002624(0x3d);
    sub_08002624(0x3e);
  }
  if ((DAT_02001284 >> 8 == 0xc) && ((DAT_02001284 & 0xff) == 5)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0x42,0);
    }
    sub_080025D8(0x42);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x42);
  }
  if (((DAT_0202dad9 & 1) != 0) && ((short)DAT_0202dadc != 0)) {
    if ((short)DAT_0202dadc < -0x9c0) {
      DAT_0202dadc._0_2_ = (short)DAT_0202dadc + 1;
    }
    else {
      DAT_0202dadc._0_2_ = (short)DAT_0202dadc + 0x10;
    }
  }
  if (((DAT_0202dad9 & 2) != 0) && (DAT_0202dadc._2_2_ != 0)) {
    if (DAT_0202dadc._2_2_ < -0x9c0) {
      DAT_0202dadc._2_2_ = DAT_0202dadc._2_2_ + 1;
    }
    else {
      DAT_0202dadc._2_2_ = DAT_0202dadc._2_2_ + 0x10;
    }
  }
  return in_lr;
}

