// sub_080E9BC8 at 0x080E9BC8 (thumb)

undefined4 sub_080E9BC8(void)

{
  undefined4 in_lr;
  
  DAT_0200241e = DAT_0200241e | 1;
  if (DAT_02030bf4 == 0) {
    if ((DAT_02030104 & 0x40) == 0) {
      sub_0800393C(&DAT_085473d4,(DAT_020023c4 & 0xc) << 0xc);
      sub_08003E14(&DAT_085473e0,0);
      sub_0800393C(&DAT_08547348,(DAT_020023c4 & 0xc) * 0x1000);
      sub_08003E14(&DAT_08547354,0);
    }
    else {
      sub_0800393C(&DAT_085473e8,(DAT_020023c4 & 0xc) << 0xc);
      sub_08003E14(&DAT_085473f4,0);
    }
    DAT_02030bf4 = 1;
  }
  if ((DAT_02030104 & 0x40) == 0) {
    sub_080E9CFC(&DAT_02030bf0);
    sub_080E9EE8(&DAT_02030bf0);
  }
  else {
    DAT_020023c0 = DAT_020023c0 | 0x100;
    if (DAT_02030bf4 < 0x20) {
      DAT_02030bf4 = DAT_02030bf4 + 1;
    }
    DAT_020023cc._2_2_ = 0x20 - DAT_02030bf4;
    sub_080043C4(DAT_02030bf0,&DAT_085222a0,0x12,0,0);
  }
  return in_lr;
}

