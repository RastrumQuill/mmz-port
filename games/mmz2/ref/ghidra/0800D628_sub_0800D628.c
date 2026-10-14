// sub_0800D628 at 0x0800D628 (thumb)

undefined4 sub_0800D628(void)

{
  undefined4 in_lr;
  
  if ((DAT_020017d4 >> 8 == 6) && ((DAT_020017d4 & 0xff) == 1)) {
    sub_080027AC(&UNK_087fb154 + (uint)(byte)(&DAT_08319afc)[(byte)DAT_0202e02c >> 2] * 0x14,0x4000)
    ;
    sub_08002AEC(&UNK_087fb160 + (uint)(byte)(&DAT_08319afc)[(byte)DAT_0202e02c >> 2] * 0x14,0);
  }
  if ((DAT_020017d4 >> 8 == 6) && ((DAT_020017d4 & 0xff) == 1)) {
    if ((DAT_0202e02c._1_1_ & 1) == 0) {
      sub_08002D68(0x3e,0);
      DAT_0202e02c._1_1_ = DAT_0202e02c._1_1_ | 1;
    }
    sub_08002EA0(0x3e);
  }
  else if ((DAT_0202e02c._1_1_ & 1) != 0) {
    sub_08002EF0(0x3e);
    DAT_0202e02c._1_1_ = DAT_0202e02c._1_1_ ^ 1;
  }
  if ((DAT_020017d4 >> 8 == 6) && ((DAT_020017d4 & 0xff) == 2)) {
    if ((DAT_0202e02c._1_1_ & 2) == 0) {
      sub_08002D68(0x3f,0);
      sub_08002D68(0x40,0);
      DAT_0202e02c._1_1_ = DAT_0202e02c._1_1_ | 2;
    }
    sub_08002EA0(0x3f);
    sub_08002EA0(0x40);
  }
  else if ((DAT_0202e02c._1_1_ & 2) != 0) {
    sub_08002EF0(0x3f);
    sub_08002EF0(0x40);
    DAT_0202e02c._1_1_ = DAT_0202e02c._1_1_ ^ 2;
  }
  return in_lr;
}

