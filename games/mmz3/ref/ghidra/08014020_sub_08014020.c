// sub_08014020 at 0x08014020 (thumb)

undefined4 sub_08014020(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 0xe) && ((DAT_02002c54 & 0xff) == 0)) {
    if ((DAT_0202f4a8 & 1) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 1;
      sub_080040A8(0xd8,0);
    }
    sub_080041E4(0xd8);
  }
  else if ((DAT_0202f4a8 & 1) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 1;
    sub_08004230(0xd8);
  }
  if ((DAT_02002c56 >> 8 == 0xe) && ((DAT_02002c56 & 0xff) == 1)) {
    if ((DAT_0202f4a8 & 2) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 2;
      sub_080040A8(0xd7,0);
    }
    sub_080041E4(0xd7);
  }
  else if ((DAT_0202f4a8 & 2) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 2;
    sub_08004230(0xd7);
  }
  if ((DAT_02002c56 >> 8 == 0xe) && ((DAT_02002c56 & 0xff) == 2)) {
    uVar1 = (ushort)DAT_0202f4a8;
    if ((DAT_0202f4a8 & 4) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 4;
      sub_080040A8(0xd9,0);
      DAT_0202f4ac._2_2_ = uVar1 & 4;
    }
    sub_080041E4(0xd9);
    if (DAT_0202f4a4 < 0xb) {
      if (1 < DAT_0202f4a4) {
        if ((ushort)DAT_0202f4ac < 0x100) {
          DAT_0202f4ac._0_2_ = (ushort)DAT_0202f4ac + 2;
        }
        else if (DAT_0202f4a4 == 2) {
          DAT_0202f4a4 = 3;
        }
      }
    }
    else if ((ushort)DAT_0202f4ac != 0) {
      DAT_0202f4ac._0_2_ = (ushort)DAT_0202f4ac - 2;
    }
    DAT_0202f4ac._2_2_ = (ushort)DAT_0202f4ac + DAT_0202f4ac._2_2_;
    if (0x9ff < DAT_0202f4ac._2_2_) {
      DAT_0202f4ac._2_2_ = 0;
    }
  }
  else if ((DAT_0202f4a8 & 4) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 4;
    sub_08004230(0xd9);
  }
  return in_lr;
}

