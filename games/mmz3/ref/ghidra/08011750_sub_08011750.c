// sub_08011750 at 0x08011750 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08011750(void)

{
  undefined4 in_lr;
  
  DAT_0202f4b0._0_2_ = (short)DAT_0202f4b0 + 1;
  DAT_0202f4aa = DAT_0202f4aa + 1;
  if ((DAT_02002c56 >> 8 == 10) && ((DAT_02002c56 & 0xff) == 1)) {
    if ((_DAT_0202f4a8 & 1) == 0) {
      _DAT_0202f4a8 = _DAT_0202f4a8 | 1;
      sub_080040A8(0x20,0);
      sub_080040A8(0x21,0);
      sub_080040A8(0x26,0);
      sub_080040A8(0x27,0);
      sub_080040A8(0x28,0);
      sub_080040A8(0x8e,0);
    }
    sub_080041E4(0x20);
    sub_080041E4(0x21);
    sub_080041E4(0x26);
    sub_080041E4(0x27);
    sub_080041E4(0x28);
    sub_080041E4(0x8e);
  }
  else if ((_DAT_0202f4a8 & 1) != 0) {
    _DAT_0202f4a8 = _DAT_0202f4a8 ^ 1;
    sub_08004230(0x20);
    sub_08004230(0x21);
    sub_08004230(0x26);
    sub_08004230(0x27);
    sub_08004230(0x28);
    sub_08004230(0x8e);
  }
  if ((DAT_02002c56 >> 8 == 10) && ((DAT_02002c56 & 0xff) == 2)) {
    if ((_DAT_0202f4a8 & 2) == 0) {
      _DAT_0202f4a8 = _DAT_0202f4a8 | 2;
      sub_080040A8(0x93,0);
    }
    sub_080041E4(0x93);
  }
  else if ((_DAT_0202f4a8 & 2) != 0) {
    _DAT_0202f4a8 = _DAT_0202f4a8 ^ 2;
    sub_08004230(0x93);
  }
  if ((DAT_02002c56 >> 8 == 10) && ((DAT_02002c56 & 0xff) == 3)) {
    if ((_DAT_0202f4a8 & 4) == 0) {
      _DAT_0202f4a8 = _DAT_0202f4a8 | 4;
      sub_080040A8(0x91,0);
      sub_080040A8(0x92,0);
    }
    sub_080041E4(0x91);
    sub_080041E4(0x92);
  }
  else if ((_DAT_0202f4a8 & 4) != 0) {
    _DAT_0202f4a8 = _DAT_0202f4a8 ^ 4;
    sub_08004230(0x91);
    sub_08004230(0x92);
  }
  sub_080041E4(0x22);
  sub_080041E4(0x23);
  sub_080041E4(0x24);
  sub_080041E4(0x25);
  sub_080041E4(0x8f);
  sub_080041E4(0x90);
  return in_lr;
}

