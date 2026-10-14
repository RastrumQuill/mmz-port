// sub_0800BFD4 at 0x0800BFD4 (thumb)

undefined4 sub_0800BFD4(int *param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 2) && (bVar1 = (byte)DAT_02002c54, (DAT_02002c54 & 0xff) == 0)) {
    if ((DAT_0202f4a8 & 1) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 1;
      sub_080040A8(0x31,0);
      sub_080040A8(0x32,0);
      DAT_0202f4a9 = bVar1;
    }
    sub_080041E4(0x31);
    sub_080041E4(0x32);
    DAT_0202f4a9 = DAT_0202f4a9 + 1;
    if (DAT_0202f4a9 == 0x2d) {
      DAT_0202f4a9 = bVar1;
    }
  }
  else if ((DAT_0202f4a8 & 1) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 1;
    sub_08004230(0x31);
    sub_08004230(0x32);
  }
  if ((DAT_02002c56 >> 8 == 2) && ((DAT_02002c56 & 0xff) == 1)) {
    if ((DAT_0202f4a8 & 2) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 2;
      sub_080040A8(0x3c,0);
    }
    sub_080041E4(0x3c);
  }
  else if ((DAT_0202f4a8 & 2) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 2;
    sub_08004230(0x3c);
  }
  if ((DAT_02002c56 >> 8 == 2) && ((DAT_02002c56 & 0xff) == 2)) {
    bVar1 = DAT_0202f4a8 & 4;
    if ((DAT_0202f4a8 & 4) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 4;
      sub_080040A8(0x33,0);
      sub_080040A8(0x34,0);
      DAT_0202f4aa._0_1_ = bVar1;
    }
    sub_080041E4(0x33);
    sub_080041E4(0x34);
    DAT_0202f4aa._0_1_ = (byte)DAT_0202f4aa + 1;
    if ((byte)DAT_0202f4aa == 0x10) {
      DAT_0202f4aa._0_1_ = 0;
    }
  }
  else if ((DAT_0202f4a8 & 4) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 4;
    sub_08004230(0x33);
    sub_08004230(0x34);
  }
  if ((DAT_02002c54 >> 8 == 2) && ((DAT_02002c54 & 0xff) == 3)) {
    bVar1 = DAT_0202f4a8 & 8;
    if ((DAT_0202f4a8 & 8) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 8;
      sub_080040A8(0x32,0);
      sub_080040A8(0x35,0);
      sub_080040A8(0x36,0);
      sub_080040A8(0x37,0);
      sub_080040A8(0x38,0);
      sub_080040A8(0x39,0);
      DAT_0202f4a9 = bVar1;
    }
    sub_080041E4(0x32);
    sub_080041E4(0x35);
    sub_080041E4(0x36);
    sub_080041E4(0x37);
    sub_080041E4(0x38);
    sub_080041E4(0x39);
    DAT_0202f4a9 = DAT_0202f4a9 + 1;
    if (DAT_0202f4a9 == 0x2d) {
      DAT_0202f4a9 = 0;
    }
  }
  else if ((DAT_0202f4a8 & 8) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 8;
    sub_08004230(0x32);
    sub_08004230(0x35);
    sub_08004230(0x36);
    sub_08004230(0x37);
    sub_08004230(0x38);
    sub_08004230(0x39);
  }
  if ((DAT_02002c56 >> 8 == 2) && ((DAT_02002c56 & 0xff) == 4)) {
    bVar1 = DAT_0202f4a8 & 0x10;
    if ((DAT_0202f4a8 & 0x10) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 0x10;
      sub_080040A8(0x3a,0);
      DAT_0202f4aa._0_1_ = bVar1;
      DAT_0202f4aa._1_1_ = bVar1;
    }
    sub_080041E4(0x3a);
    DAT_0202f4aa._0_1_ = (byte)DAT_0202f4aa + 1;
    if ((byte)DAT_0202f4aa == 0x2d) {
      DAT_0202f4aa._0_1_ = 0;
    }
    DAT_0202f4aa._1_1_ = DAT_0202f4aa._1_1_ + 1;
    if (DAT_0202f4aa._1_1_ == 0x10) {
      DAT_0202f4aa._1_1_ = 0;
    }
  }
  else if ((DAT_0202f4a8 & 0x10) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 0x10;
    sub_08004230(0x3a);
  }
  if ((DAT_02002c54 >> 8 == 2) && ((DAT_02002c54 & 0xff) == 5)) {
    bVar1 = DAT_0202f4a8 & 0x20;
    if ((DAT_0202f4a8 & 0x20) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 0x20;
      sub_080040A8(0x35,0);
      sub_080040A8(0x36,0);
      sub_080040A8(0x38,0);
      sub_080040A8(0x39,0);
      DAT_0202f4a9 = bVar1;
    }
    sub_080041E4(0x35);
    sub_080041E4(0x36);
    sub_080041E4(0x38);
    sub_080041E4(0x39);
    DAT_0202f4a9 = DAT_0202f4a9 + 1;
    if (DAT_0202f4a9 == 0x20) {
      DAT_0202f4a9 = 0;
    }
  }
  else if ((DAT_0202f4a8 & 0x20) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 0x20;
    sub_08004230(0x35);
    sub_08004230(0x36);
    sub_08004230(0x38);
    sub_08004230(0x39);
  }
  if ((DAT_02002c54 >> 8 == 2) && ((DAT_02002c54 & 0xff) == 6)) {
    if ((DAT_0202f4a8 & 0x40) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 0x40;
      sub_080040A8(0x3b,0);
    }
    sub_080041E4(0x3b);
  }
  else if ((DAT_0202f4a8 & 0x40) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 0x40;
    sub_08004230(0x3b);
  }
  if (*param_1 - 0x1e0000U < 0xe1000) {
    if (DAT_0202f4b0 == 0) {
      DAT_0202f4b0 = sub_080DD4E4(0,0x1f3800,0x1c000);
    }
    if (DAT_0202f4b4 == 0) {
      DAT_0202f4b4 = sub_080DD4E4(1,0x20b800,0x25000);
    }
  }
  else {
    if (DAT_0202f4b0 != 0) {
      *(byte *)(DAT_0202f4b0 + 10) = *(byte *)(DAT_0202f4b0 + 10) & 0xfc;
      *(undefined4 *)(DAT_0202f4b0 + 0x8c) = 0;
      *(undefined4 *)(DAT_0202f4b0 + 0x90) = 0;
      *(undefined *)(DAT_0202f4b0 + 0x94) = 0;
      *(byte *)(DAT_0202f4b0 + 10) = *(byte *)(DAT_0202f4b0 + 10) & 0xfb;
      *(undefined4 *)(DAT_0202f4b0 + 0xc) = 3;
      *(undefined4 *)(DAT_0202f4b0 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(DAT_0202f4b0 + 9) * 4) + 0xc);
      DAT_0202f4b0 = 0;
    }
    if (DAT_0202f4b4 != 0) {
      *(byte *)(DAT_0202f4b4 + 10) = *(byte *)(DAT_0202f4b4 + 10) & 0xfc;
      *(undefined4 *)(DAT_0202f4b4 + 0x8c) = 0;
      *(undefined4 *)(DAT_0202f4b4 + 0x90) = 0;
      *(undefined *)(DAT_0202f4b4 + 0x94) = 0;
      *(byte *)(DAT_0202f4b4 + 10) = *(byte *)(DAT_0202f4b4 + 10) & 0xfb;
      *(undefined4 *)(DAT_0202f4b4 + 0xc) = 3;
      *(undefined4 *)(DAT_0202f4b4 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(DAT_0202f4b4 + 9) * 4) + 0xc);
      DAT_0202f4b4 = 0;
    }
  }
  DAT_0202f4ac._0_2_ = (short)DAT_0202f4ac + 1;
  return in_lr;
}

