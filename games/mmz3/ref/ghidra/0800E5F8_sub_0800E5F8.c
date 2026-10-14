// sub_0800E5F8 at 0x0800E5F8 (thumb)

undefined4 sub_0800E5F8(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  DAT_0202f4ac._0_2_ = (short)DAT_0202f4ac + 1;
  if ((DAT_02002c54 >> 8 == 6) && ((DAT_02002c54 & 0xff) == 0)) {
    if ((DAT_0202f4a8 & 1) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 1;
      sub_080040A8(0xd3,0);
      sub_080040A8(0xd4,0);
      DAT_0202f4a9 = '\0';
    }
    sub_080041E4(0xd3);
    sub_080041E4(0xd4);
    DAT_0202f4a9 = DAT_0202f4a9 + '\x01';
    if (DAT_0202f4a9 == '\x14') {
      DAT_0202f4a9 = '\0';
    }
  }
  else if ((DAT_0202f4a8 & 1) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 1;
    sub_08004230(0xd3);
    sub_08004230(0xd4);
  }
  if ((DAT_02002c56 >> 8 == 6) && ((DAT_02002c56 & 0xff) == 4)) {
    if ((DAT_0202f4a8 & 2) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 2;
      sub_080040A8(0xd1,0);
    }
    sub_080041E4(0xd1);
  }
  else if ((DAT_0202f4a8 & 2) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 2;
    sub_08004230(0xd1);
  }
  if ((DAT_02002c54 >> 8 == 6) && ((DAT_02002c54 & 0xff) == 5)) {
    if ((DAT_0202f4a8 & 4) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 4;
      sub_080040A8(0xd2,0);
    }
    sub_080041E4(0xd2);
  }
  else if ((DAT_0202f4a8 & 4) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 4;
    sub_08004230(0xd2);
  }
  if ((DAT_02002c56 >> 8 == 6) && ((DAT_02002c56 & 0xff) == 1)) {
    if (param_1[1] < 0x3c000) {
      uVar1 = (uint)(byte)DAT_0202f4aa;
      DAT_0202f4aa._0_1_ = (byte)(uVar1 - 1);
      if ((int)((uVar1 - 1) * 0x1000000) < 0) {
        DAT_0202f4aa._0_1_ = 0xf;
      }
    }
    else {
      DAT_0202f4aa._0_1_ = (byte)DAT_0202f4aa + 1;
      if ((byte)DAT_0202f4aa == 0x10) {
        DAT_0202f4aa._0_1_ = 0;
      }
    }
  }
  if (((DAT_02002c54 >> 8 == 6) && ((DAT_02002c54 & 0xff) == 3)) &&
     (DAT_0202f4aa._1_1_ = DAT_0202f4aa._1_1_ + '\x01', DAT_0202f4aa._1_1_ == ' ')) {
    DAT_0202f4aa._1_1_ = '\0';
  }
  if (((DAT_02002c56 >> 8 == 6) && ((DAT_02002c56 & 0xff) == 6)) &&
     (DAT_0202f4b0._0_1_ = (char)DAT_0202f4b0 + '\x01', (char)DAT_0202f4b0 == '<')) {
    DAT_0202f4b0._0_1_ = '\0';
  }
  if (((*param_1 - 0x4b000U < 0x1e001) && (0x27fff < param_1[1])) && (param_1[1] < 0x5a001)) {
    iVar2 = sub_080047C0(0x10b);
    if (iVar2 == 0) {
      sub_0800471C(0x10b);
    }
    sub_080047D8(0x10b);
  }
  else {
    iVar2 = sub_080047C0(0x10b);
    if (iVar2 != 0) {
      sub_08004768(0x10b);
    }
  }
  return in_lr;
}

