// sub_0801366C at 0x0801366C (thumb)

undefined4 sub_0801366C(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 0xd) && ((DAT_02002c54 & 0xff) == 4)) {
    if ((DAT_0202f4a8 & 1) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 1;
      sub_080040A8(0x94,0);
      sub_080040A8(0x95,0);
    }
    sub_080041E4(0x94);
    sub_080041E4(0x95);
  }
  else if ((DAT_0202f4a8 & 1) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 1;
    sub_08004230(0x94);
    sub_08004230(0x95);
  }
  if ((DAT_02002c56 >> 8 == 0xd) && ((DAT_02002c56 & 0xff) == 5)) {
    if ((DAT_0202f4a8 & 2) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 2;
      sub_080040A8(0x99,0);
    }
    sub_080041E4(0x99);
  }
  else if ((DAT_0202f4a8 & 2) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 2;
    sub_08004230(0x99);
  }
  sub_080041E4(0x96);
  if (DAT_0202f4a9 == '\0') {
    if ((char)DAT_0202f4aa == '\0') {
      uVar2 = DAT_0202f4ac * 0x343fd + 0x269ec3;
      DAT_0202f4ac = uVar2 & 0x7fffffff;
      DAT_0202f4aa._0_1_ = ((byte)(uVar2 * 2 >> 0x11) & 1) + 1;
      DAT_0202f4a9 = '\b';
    }
    else {
      DAT_0202f4aa._0_1_ = DAT_0202f4a9;
      uVar2 = DAT_0202f4ac * 0x343fd + 0x269ec3;
      DAT_0202f4ac = uVar2 & 0x7fffffff;
      bVar1 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x3a);
      DAT_0202f4a9 = (bVar1 & 0xf8) + 7;
    }
  }
  DAT_0202f4a9 = DAT_0202f4a9 + -1;
  uVar2 = (uint)DAT_0202f4b0._2_2_;
  DAT_0202f4b0._2_2_ = (short)(uVar2 + 1);
  DAT_0202e48c = *(short *)((int)&DAT_080fe64c + ((((uVar2 + 1) * 0x10000 >> 0x11) << 0x18) >> 0x17)
                           ) * 0x18 + 0x23800;
  DAT_02002402 = 0xc04;
  return in_lr;
}

