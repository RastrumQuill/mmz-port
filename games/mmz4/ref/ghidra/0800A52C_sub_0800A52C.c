// sub_0800A52C at 0x0800A52C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800A52C(void)

{
  undefined4 in_lr;
  
  if (_DAT_0202dae4 == 0) {
    _DAT_0202dae4 = sub_080EB828(1);
  }
  if (DAT_02001284 >> 8 == 1) {
    if ((((DAT_02001284 & 0xff) == 0) && (DAT_02001286 >> 8 == 1)) && ((DAT_02001286 & 0xff) == 1))
    {
      if (DAT_0202dad4 < 3) {
        DAT_0202dadc._0_1_ = (char)DAT_0202dadc + '\x01';
      }
      else if (((ushort)DAT_0202daf8 & 0x3f) == 0) {
        DAT_0202dadc._0_1_ = (char)DAT_0202dadc + '\x01';
      }
      if ((char)DAT_0202dadc == '@') {
        DAT_0202dadc._0_1_ = '\0';
      }
    }
    if ((DAT_02001284 >> 8 != 1) || ((DAT_02001284 & 0xff) != 3)) goto LAB_0800a608;
    if (DAT_02001286 >> 8 == 1) {
      if (((DAT_02001286 & 0xff) == 2) &&
         (DAT_0202dadc._3_1_ = DAT_0202dadc._3_1_ + '\x01', DAT_0202dadc._3_1_ == '\x1a')) {
        DAT_0202dadc._3_1_ = '\0';
      }
      goto LAB_0800a608;
    }
  }
  else {
LAB_0800a608:
    if ((DAT_02001286 >> 8 == 1) && ((DAT_02001286 & 0xff) == 2)) {
      if ((DAT_0202dad8 & 1) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 1;
        sub_0800249C(0xc,0);
      }
      sub_080025D8(0xc);
      goto LAB_0800a674;
    }
  }
  if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0xc);
  }
LAB_0800a674:
  if (((DAT_02001284 >> 8 == 1) && ((DAT_02001284 & 0xff) == 3)) && ((DAT_0202dad5 & 1) != 0)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0xd,0);
    }
    sub_080025D8(0xd);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0xd);
  }
  return in_lr;
}

