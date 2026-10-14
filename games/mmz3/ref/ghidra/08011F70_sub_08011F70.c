// sub_08011F70 at 0x08011F70 (thumb)

undefined4 sub_08011F70(void)

{
  undefined4 in_lr;
  
  if ((DAT_02002c56 >> 8 == 0xb) && ((DAT_02002c56 & 0xff) == 3)) {
    if ((DAT_0202f4a8 & 1) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 1;
      sub_080040A8(0xc4,0);
    }
    sub_080041E4(0xc4);
  }
  else if ((DAT_0202f4a8 & 1) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 1;
    sub_08004230(0xc4);
  }
  if ((DAT_02002c56 >> 8 == 0xb) && ((DAT_02002c56 & 0xff) == 1)) {
    if ((DAT_0202f4a8 & 2) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 2;
      sub_080040A8(0xc5,0);
    }
    sub_080041E4(0xc5);
    DAT_0202f4b4._0_1_ = (char)DAT_0202f4b4 + '\x01';
    if ((char)DAT_0202f4b4 == '\x1b') {
      DAT_0202f4b4._0_1_ = '\0';
    }
  }
  else if ((DAT_0202f4a8 & 2) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 2;
    sub_08004230(0xc5);
  }
  if ((DAT_02002c56 >> 8 == 0xb) && ((DAT_02002c56 & 0xff) == 4)) {
    if ((DAT_0202f4a8 & 4) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 4;
    }
    if (((DAT_02030154 & 1) != 0) &&
       (DAT_0202f4b8._1_1_ = DAT_0202f4b8._1_1_ + '\x01', DAT_0202f4b8._1_1_ == '\x18')) {
      DAT_0202f4b8._1_1_ = '\0';
    }
    if (((DAT_02030154 & 2) != 0) &&
       (DAT_0202f4b8._0_1_ = (char)DAT_0202f4b8 + '\x01', (char)DAT_0202f4b8 == ' ')) {
      DAT_0202f4b8._0_1_ = '\0';
    }
    if ((DAT_02030154 & 4) != 0) {
      DAT_0202f4b4._2_2_ = DAT_0202f4b4._2_2_ + 1;
      if (DAT_0202f4b4._2_2_ == 0x240) {
        DAT_0202f4b4._2_2_ = 0;
      }
      if (DAT_0202f4b4._2_2_ == 0) {
        sub_08004230(0xc0);
      }
      else if (DAT_0202f4b4._2_2_ == 0xc6) {
        sub_080040A8(0xc0,0);
      }
      sub_080041E4(0xc0);
    }
    if ((DAT_02030154 & 8) != 0) {
      if (DAT_0202f4b8._2_1_ < 0x40) {
        DAT_0202f4b8._2_1_ = DAT_0202f4b8._2_1_ + 1;
      }
      DAT_0202f4bc._0_2_ = (ushort)DAT_0202f4bc + DAT_0202f4b8._2_1_;
      if (0x300 < (ushort)DAT_0202f4bc) {
        DAT_0202f4bc._0_2_ = (ushort)DAT_0202f4bc - 0x300;
      }
    }
    if ((DAT_02030154 & 0x10) != 0) {
      if (DAT_0202f4b8._3_1_ < 0x40) {
        DAT_0202f4b8._3_1_ = DAT_0202f4b8._3_1_ + 1;
      }
      DAT_0202f4bc._2_2_ = DAT_0202f4bc._2_2_ + DAT_0202f4b8._3_1_;
      if (0x200 < DAT_0202f4bc._2_2_) {
        DAT_0202f4bc._2_2_ = DAT_0202f4bc._2_2_ - 0x180;
      }
    }
    if ((DAT_02030154 & 0x20) != 0) {
      if (DAT_0202f4b4._1_1_ == 0) {
        sub_080040A8(0xc1,0);
      }
      if (DAT_0202f4b4._1_1_ < 0x5b) {
        if (DAT_0202f4b4._1_1_ == 0x5a) {
          sub_08004230(0xc1);
          sub_080040A8(0xc2,0);
        }
        DAT_0202f4b4._1_1_ = DAT_0202f4b4._1_1_ + 1;
      }
      sub_080041E4(0xc1);
      sub_080041E4(0xc2);
    }
  }
  else if ((DAT_0202f4a8 & 4) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 4;
    sub_08004230(0xc0);
    sub_08004230(0xc1);
    sub_08004230(0xc2);
    DAT_0202f4b4._2_2_ = 0;
    DAT_0202f4b4._1_1_ = 0;
  }
  if (DAT_0202f4a4 == '\0') {
    DAT_0202f4ac = DAT_0202f4ac + 1;
    if (DAT_0202f4ac == 0xce200) {
      DAT_0202f4ac = 0;
    }
    DAT_0202f4b0 = DAT_0202f4b0 + -1;
    if (DAT_0202f4b0 < 0) {
      DAT_0202f4b0 = 0xce1ff;
    }
  }
  else {
    DAT_0202f4ac = DAT_0202f4ac + -1;
    if (DAT_0202f4ac < 0) {
      DAT_0202f4ac = 0xce1ff;
    }
    DAT_0202f4b0 = DAT_0202f4b0 + 1;
    if (DAT_0202f4b0 == 0xce200) {
      DAT_0202f4b0 = 0;
    }
  }
  return in_lr;
}

