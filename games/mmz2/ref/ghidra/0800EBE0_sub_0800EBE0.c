// sub_0800EBE0 at 0x0800EBE0 (thumb)

undefined4 sub_0800EBE0(int *param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  DAT_0202e030._0_1_ = '\x01';
  uVar4 = 0;
  do {
    sVar1 = *(short *)(&DAT_0202e020 + (uVar4 & 1) * 2 + ((int)uVar4 >> 1) * 4);
    if (sVar1 != 0) {
      *(short *)(&DAT_0202e020 + (uVar4 & 1) * 2 + ((int)uVar4 >> 1) * 4) = sVar1 + -1;
      DAT_0202e030._0_1_ = '\0';
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 7);
  if ((DAT_020017d6 >> 8 == 9) && ((DAT_020017d6 & 0xff) == 9)) {
    if ((DAT_0202e030._2_1_ & 1) == 0) {
      sub_08002D68(0x85,0);
      DAT_0202e030._2_1_ = DAT_0202e030._2_1_ | 1;
    }
    sub_08002EA0(0x85);
  }
  else if ((DAT_0202e030._2_1_ & 1) != 0) {
    sub_08002EF0(0x85);
    DAT_0202e030._2_1_ = DAT_0202e030._2_1_ ^ 1;
  }
  if ((DAT_020017d6 >> 8 == 9) && ((DAT_020017d6 & 0xff) == 10)) {
    if ((DAT_0202e030._2_1_ & 2) == 0) {
      sub_08002D68(0x86,0);
      DAT_0202e030._2_1_ = DAT_0202e030._2_1_ | 2;
    }
    sub_08002EA0(0x86);
  }
  else if ((DAT_0202e030._2_1_ & 2) != 0) {
    sub_08002EF0(0x86);
    DAT_0202e030._2_1_ = DAT_0202e030._2_1_ ^ 2;
  }
  if ((DAT_020017d6 >> 8 == 9) && ((DAT_020017d6 & 0xff) == 4)) {
    if ((DAT_0202e030._2_1_ & 4) == 0) {
      sub_08002D68(0x87,0);
      DAT_0202e030._2_1_ = DAT_0202e030._2_1_ | 4;
    }
    sub_08002EA0(0x87);
  }
  else if ((DAT_0202e030._2_1_ & 4) != 0) {
    sub_08002EF0(0x87);
    DAT_0202e030._2_1_ = DAT_0202e030._2_1_ ^ 4;
  }
  if ((DAT_020017d4 >> 8 == 9) && ((DAT_020017d4 & 0xff) == 5)) {
    if ((DAT_0202e030._2_1_ & 8) == 0) {
      sub_08002D68(0x88,0);
      DAT_0202e030._2_1_ = DAT_0202e030._2_1_ | 8;
    }
    sub_08002EA0(0x88);
  }
  else if ((DAT_0202e030._2_1_ & 8) != 0) {
    sub_08002EF0(0x88);
    DAT_0202e030._2_1_ = DAT_0202e030._2_1_ ^ 8;
  }
  if ((DAT_020017d4 >> 8 == 9) && ((DAT_020017d4 & 0xff) == 0xb)) {
    if ((DAT_0202e030._2_1_ & 0x10) == 0) {
      sub_08002D68(0x8a,0);
      DAT_0202e030._2_1_ = DAT_0202e030._2_1_ | 0x10;
    }
    sub_08002EA0(0x8a);
  }
  else if ((DAT_0202e030._2_1_ & 0x10) != 0) {
    sub_08002EF0(0x8a);
    DAT_0202e030._2_1_ = DAT_0202e030._2_1_ ^ 0x10;
  }
  if ((DAT_020017d4 >> 8 == 9) && ((DAT_020017d4 & 0xff) == 5)) {
    if ((char)DAT_0202e030 == '\0') {
      DAT_0202e030._3_1_ = (char)DAT_0202e030;
      cVar2 = DAT_0202e030._3_1_;
    }
    else {
      cVar2 = DAT_0202e030._3_1_ + '\x01';
      if (0x18 < (byte)(DAT_0202e030._3_1_ + 1U)) {
        cVar2 = DAT_0202e030._3_1_ + -8;
      }
    }
  }
  else {
    cVar2 = '\x0f';
  }
  DAT_0202e030._3_1_ = cVar2;
  if ((((char)DAT_0202e030 == '\0') || (0x77fff < *param_1 - 0xff000U)) ||
     (0x2fffe < param_1[1] - 0x51001U)) {
    iVar3 = sub_08003390(0xf5);
    if (iVar3 != 0) {
      sub_08003338(0xf5);
    }
  }
  else {
    iVar3 = sub_08003390(0xf5);
    if (iVar3 == 0) {
      sub_080032EC(0xf5);
    }
  }
  return in_lr;
}

