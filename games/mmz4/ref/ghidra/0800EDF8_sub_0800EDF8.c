// sub_0800EDF8 at 0x0800EDF8 (thumb)

undefined4 sub_0800EDF8(void)

{
  short sVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (DAT_0202dadc._2_1_ == 0) goto LAB_0800ef6a;
  if (DAT_0202dadc._2_1_ == 2) {
LAB_0800ee74:
    DAT_0202dadc._3_1_ = DAT_0202dadc._3_1_ + 1;
    if ((DAT_0202dadc._3_1_ & 1) == 0) {
      sVar1 = (ushort)DAT_0202dadc._3_1_ * -8 + 0xa0;
    }
    else {
      sVar1 = (ushort)DAT_0202dadc._3_1_ * -8 + 0xa8;
    }
    DAT_02000a5a = sVar1 * 0x100 | 0xa0;
    if (DAT_0202dadc._3_1_ == 10) {
      *(undefined2 *)(DAT_020359b8 + 0xa4) = 0;
    }
    if (DAT_0202dadc._3_1_ != 0x14) goto LAB_0800ef6a;
    sub_080275F0(&DAT_0202e920,&DAT_0884cfa4);
    DAT_0202e918 = DAT_0202e918 & 0xfffe | 8;
    DAT_0202dadc._3_1_ = 0x78;
    DAT_030032e1 = DAT_030032e1 | 2;
  }
  else {
    if (DAT_0202dadc._2_1_ < 3) {
      if (DAT_0202dadc._2_1_ != 1) goto LAB_0800ef6a;
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 8;
      DAT_02000a50 = DAT_02000a50 | 0x4000;
      DAT_02000a5d = DAT_0202dadc._2_1_;
      DAT_02000a56 = 0xf0;
      DAT_03002ac0 = 0xffff;
      DAT_0202dadc._3_1_ = 0;
      DAT_0202dadc._2_1_ = 2;
      goto LAB_0800ee74;
    }
    if ((DAT_0202dadc._2_1_ != 3) ||
       (DAT_0202dadc._3_1_ = DAT_0202dadc._3_1_ - 1, DAT_0202dadc._3_1_ != 0)) goto LAB_0800ef6a;
    DAT_02000a50 = DAT_02000a50 & 0xbfff;
    DAT_030032e1 = 0;
  }
  DAT_0202dadc._2_1_ = DAT_0202dadc._2_1_ + 1;
LAB_0800ef6a:
  if ((DAT_02001286 >> 8 == 4) && ((DAT_02001286 & 0xff) == 1)) {
    uVar2 = sub_08128A24(DAT_0202dad9,6);
    sub_08001EA4(&UNK_08fa4888 + (uVar2 & 0xff) * 0x14,0x4000);
    uVar2 = sub_08128A24(DAT_0202dad9,6);
    sub_08002208(&UNK_08fa4894 + (uVar2 & 0xff) * 0x14,0);
  }
  return in_lr;
}

