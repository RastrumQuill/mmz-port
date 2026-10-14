// sub_08011050 at 0x08011050 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08011050(void)

{
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 9) && ((DAT_02002c54 & 0xff) == 0)) {
    if ((_DAT_0202f4a8 & 1) == 0) {
      _DAT_0202f4a8 = _DAT_0202f4a8 | 1;
      sub_080040A8(0x85,0);
    }
    sub_080041E4(0x85);
  }
  else if ((_DAT_0202f4a8 & 1) != 0) {
    _DAT_0202f4a8 = _DAT_0202f4a8 ^ 1;
    sub_08004230(0x85);
  }
  if ((DAT_02002c54 >> 8 == 9) && ((DAT_02002c54 & 0xff) == 4)) {
    if ((_DAT_0202f4a8 & 2) == 0) {
      _DAT_0202f4a8 = _DAT_0202f4a8 | 2;
      sub_080040A8(0x8b,0);
      sub_080040A8(0x8c,0);
      sub_080040A8(0x8d,0);
    }
    sub_080041E4(0x8b);
    sub_080041E4(0x8c);
    sub_080041E4(0x8d);
  }
  else if ((_DAT_0202f4a8 & 2) != 0) {
    _DAT_0202f4a8 = _DAT_0202f4a8 ^ 2;
    sub_08004230(0x8b);
    sub_08004230(0x8c);
    sub_08004230(0x8d);
  }
  if ((DAT_02002c56 >> 8 == 9) && ((DAT_02002c56 & 0xff) == 2)) {
    if ((_DAT_0202f4a8 & 4) == 0) {
      _DAT_0202f4a8 = _DAT_0202f4a8 | 4;
      sub_080040A8(0x88,0);
    }
    sub_080041E4(0x88);
  }
  else if ((_DAT_0202f4a8 & 4) != 0) {
    _DAT_0202f4a8 = _DAT_0202f4a8 ^ 4;
    sub_08004230(0x88);
  }
  if ((DAT_02002c56 >> 8 == 9) && ((DAT_02002c56 & 0xff) == 1)) {
    if ((_DAT_0202f4a8 & 8) == 0) {
      _DAT_0202f4a8 = _DAT_0202f4a8 | 8;
      sub_080040A8(0x86,0);
      sub_080040A8(0x87,0);
    }
    sub_080041E4(0x86);
    sub_080041E4(0x87);
  }
  else if ((_DAT_0202f4a8 & 8) != 0) {
    _DAT_0202f4a8 = _DAT_0202f4a8 ^ 8;
    sub_08004230(0x86);
    sub_08004230(0x87);
  }
  if ((DAT_02002c56 >> 8 == 9) && ((DAT_02002c56 & 0xff) == 3)) {
    if ((_DAT_0202f4a8 & 0x10) == 0) {
      _DAT_0202f4a8 = _DAT_0202f4a8 | 0x10;
      sub_080040A8(0x89,0);
      sub_080040A8(0x8a,0);
    }
    sub_080041E4(0x89);
    sub_080041E4(0x8a);
  }
  else if ((_DAT_0202f4a8 & 0x10) != 0) {
    _DAT_0202f4a8 = _DAT_0202f4a8 ^ 0x10;
    sub_08004230(0x89);
    sub_08004230(0x8a);
  }
  return in_lr;
}

