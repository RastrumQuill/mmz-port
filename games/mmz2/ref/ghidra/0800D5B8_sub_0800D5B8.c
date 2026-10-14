// sub_0800D5B8 at 0x0800D5B8 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800D5B8(undefined4 param_1)

{
  undefined4 in_lr;
  
  _DAT_0202e020 = _DAT_0202e020 + 1;
  if ((DAT_020017d4 >> 8 == 6) && ((DAT_020017d4 & 0xff) == 1)) {
    DAT_0202e02c._0_1_ = (char)DAT_0202e02c + '\x01';
    if ((char)DAT_0202e02c == 'H') {
      DAT_0202e02c._0_1_ = '\0';
    }
    DAT_0202e02c._2_1_ = DAT_0202e02c._2_1_ + 1;
    if (0x2f < DAT_0202e02c._2_1_) {
      DAT_0202e02c._2_1_ = 0;
      sub_08015518(1,param_1);
    }
  }
  return in_lr;
}

