// sub_080ECAE4 at 0x080ECAE4 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080ECAE4(void)

{
  undefined4 in_lr;
  
  if (DAT_02002475 < 3) {
    _DAT_020023d8 = (uint)DAT_02002475 * 0x50;
    sub_0800393C(&DAT_085472bc,(DAT_020023ca & 0xc) << 0xc);
    sub_08003E14(&DAT_085472c8,0);
    sub_08004340(0x38,&DAT_085222a0,3,0,0);
  }
  else {
    _DAT_020023d8 = (DAT_02002475 - 3) * 0x50;
    sub_0800393C(&DAT_085472d0,(DAT_020023ca & 0xc) << 0xc);
    sub_08003E14(&DAT_085472dc,0);
    sub_08004340(0x38,&DAT_085222a0,4,0,0);
  }
  return in_lr;
}

