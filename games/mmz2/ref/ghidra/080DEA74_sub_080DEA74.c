// sub_080DEA74 at 0x080DEA74 (thumb)

undefined4 sub_080DEA74(void)

{
  undefined4 in_lr;
  
  DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 1;
  if (DAT_0202f644 == 0) {
    sub_08002638(&DAT_08390ec8,(DAT_02000f94 & 0xc) << 0xc);
    sub_08002AEC(&DAT_08390ed4,0);
    DAT_0202f644 = 1;
  }
  sub_080DEACC(&DAT_0202f640);
  sub_080DECC8(&DAT_0202f640);
  return in_lr;
}

