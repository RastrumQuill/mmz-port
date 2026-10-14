// sub_08010094 at 0x08010094 (thumb)

undefined4 sub_08010094(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  DAT_0202e030._0_2_ = 1;
  uVar3 = 0;
  do {
    cVar1 = (&DAT_0202e020)[(uVar3 & 1) + ((int)uVar3 >> 1) * 4];
    if (cVar1 != '\0') {
      (&DAT_0202e020)[(uVar3 & 1) + ((int)uVar3 >> 1) * 4] = cVar1 + -1;
      DAT_0202e030._0_2_ = 0;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 8);
  if ((DAT_020017d4 >> 8 == 0xf) && ((DAT_020017d4 & 0xff) == 2)) {
    if ((char)DAT_0202e034 == '\0') {
      sub_08002D68(0x7e,0);
      sub_08002D68(0x7f,0);
      sub_08002D68(0x80,0);
      DAT_0202e034._0_1_ = '\x01';
    }
    sub_08002EA0(0x7e);
    sub_08002EA0(0x7f);
    sub_08002EA0(0x80);
  }
  else if ((char)DAT_0202e034 != '\0') {
    sub_08002EF0(0x7e);
    sub_08002EF0(0x7f);
    sub_08002EF0(0x80);
    DAT_0202e034._0_1_ = '\0';
  }
  sub_08002EA0(0x92);
  if (((short)DAT_0202e030 == 0) ||
     (((0x36fff < *param_1 - 0x5f000U || (0x18ffe < param_1[1] - 0x5f001U)) &&
      ((0x3bfff < *param_1 - 0x4b000U || (0x1dffe < param_1[1] - 0x3c001U)))))) {
    iVar2 = sub_08003390(0xf5);
    if (iVar2 != 0) {
      sub_08003338(0xf5);
    }
  }
  else {
    iVar2 = sub_08003390(0xf5);
    if (iVar2 == 0) {
      sub_080032EC(0xf5);
    }
  }
  return in_lr;
}

