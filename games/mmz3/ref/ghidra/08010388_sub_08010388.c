// sub_08010388 at 0x08010388 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08010388(void)

{
  undefined4 in_lr;
  
  if (_DAT_0202f4a8 == 0) {
    _DAT_0202f4a8 = sub_080CAE18(1);
  }
  if ((DAT_02002c54 >> 8 == 8) && ((DAT_02002c54 & 0xff) == 0)) {
    if (((byte)DAT_0202f4b4 & 1) == 0) {
      DAT_0202f4b4._0_1_ = (byte)DAT_0202f4b4 | 1;
      sub_080040A8(0xda,0);
      sub_080040A8(0xdb,0);
      sub_080040A8(0xdc,0);
    }
    sub_080041E4(0xda);
    sub_080041E4(0xdb);
    sub_080041E4(0xdc);
  }
  else if (((byte)DAT_0202f4b4 & 1) != 0) {
    DAT_0202f4b4._0_1_ = (byte)DAT_0202f4b4 ^ 1;
    sub_08004230(0xda);
    sub_08004230(0xdb);
    sub_08004230(0xdc);
  }
  if ((DAT_02002c56 >> 8 == 8) && ((DAT_02002c56 & 0xff) == 1)) {
    if (((byte)DAT_0202f4b4 & 2) == 0) {
      DAT_0202f4b4._0_1_ = (byte)DAT_0202f4b4 | 2;
      sub_080040A8(0xdd,0);
    }
    sub_080041E4(0xdd);
  }
  else if (((byte)DAT_0202f4b4 & 2) != 0) {
    DAT_0202f4b4._0_1_ = (byte)DAT_0202f4b4 ^ 2;
    sub_08004230(0xdd);
  }
  if ((DAT_02002c54 >> 8 == 8) && ((DAT_02002c54 & 0xff) == 2)) {
    if (((byte)DAT_0202f4b4 & 4) == 0) {
      DAT_0202f4b4._0_1_ = (byte)DAT_0202f4b4 | 4;
      sub_080040A8(0xde,0);
      sub_080040A8(0xdf,0);
      sub_080040A8(0xe0,0);
      sub_080040A8(0xe1,0);
      sub_080040A8(0xe2,0);
    }
    sub_080041E4(0xde);
    sub_080041E4(0xdf);
    sub_080041E4(0xe0);
    sub_080041E4(0xe1);
    sub_080041E4(0xe2);
    DAT_0202f4b4._1_1_ = DAT_0202f4b4._1_1_ + '\x01';
    if (DAT_0202f4b4._1_1_ == -0x42) {
      DAT_0202f4b4._1_1_ = '\0';
    }
  }
  else if (((byte)DAT_0202f4b4 & 4) != 0) {
    DAT_0202f4b4._0_1_ = (byte)DAT_0202f4b4 ^ 4;
    sub_08004230(0xde);
    sub_08004230(0xdf);
    sub_08004230(0xe0);
    sub_08004230(0xe1);
    sub_08004230(0xe2);
  }
  if ((DAT_02002c56 >> 8 == 8) && ((DAT_02002c56 & 0xff) == 3)) {
    if (((byte)DAT_0202f4b4 & 8) == 0) {
      DAT_0202f4b4._0_1_ = (byte)DAT_0202f4b4 | 8;
      sub_080040A8(0xe3,0);
      sub_080040A8(0xe4,0);
    }
    sub_080041E4(0xe3);
    sub_080041E4(0xe4);
  }
  else if (((byte)DAT_0202f4b4 & 8) != 0) {
    DAT_0202f4b4._0_1_ = (byte)DAT_0202f4b4 ^ 8;
    sub_08004230(0xe3);
    sub_08004230(0xe4);
  }
  return in_lr;
}

