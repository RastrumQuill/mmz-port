// sub_080136F8 at 0x080136F8 (thumb)

undefined4 sub_080136F8(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(DAT_020359b8 + 0x54);
  iVar3 = *(int *)(DAT_020359b8 + 0x58);
  if (DAT_0202daf8 == 0) {
    if (((iVar4 - 0x64001U < 0x17fff) && (0x1e000 < iVar3)) && (iVar3 < 0x50000)) {
      DAT_0202e124 = 0x266;
      DAT_0202df24 = 5;
      DAT_0202daf8 = sub_080F790C(2,0);
    }
  }
  else if (((0x18000 < iVar4 - 0x64000U) || (iVar3 < 0x1e000)) || (0x50000 < iVar3)) {
    iVar1 = sub_08002BB4(0x75);
    if (iVar1 != 0) {
      sub_08002B5C(0x75);
    }
    sub_080E8F60(DAT_0202daf8);
    DAT_0202daf8 = 0;
  }
  if (DAT_0202dafc == 0) {
    if (((iVar4 - 0xff001U < 0xefff) && (0x3c000 < iVar3)) && (iVar3 < 0x78000)) {
      DAT_0202dafc = sub_080F790C(2,1);
    }
  }
  else if (((0xf000 < iVar4 - 0xff000U) || (iVar3 < 0x3c000)) || (0x78000 < iVar3)) {
    iVar3 = sub_08002BB4(0x75);
    if (iVar3 != 0) {
      sub_08002B5C(0x75);
    }
    sub_080E8F60(DAT_0202dafc);
    DAT_0202dafc = 0;
  }
  if (DAT_0202daf4 == 0) {
    DAT_0202daf4 = sub_080FD98C();
  }
  if (((DAT_02001284 >> 8 == 8) && ((DAT_02001284 & 0xff) == 2)) &&
     (DAT_0202dadc._0_1_ = (char)DAT_0202dadc + '\x01', (char)DAT_0202dadc == '\b')) {
    DAT_0202dadc._0_1_ = '\0';
  }
  if ((DAT_0202cac0 & 0xf) == 3) {
    if ((DAT_02001284 >> 8 == 8) && ((DAT_02001284 & 0xff) == 6)) {
      DAT_0202dae5 = DAT_0202dae5 + 1;
      if ((byte)(&DAT_08831046)[DAT_0202dadc._1_1_] < DAT_0202dae5) {
        uVar2 = DAT_0202dadc._1_1_ + 1;
        DAT_0202dadc._1_1_ = (byte)uVar2;
        if (9 < (uVar2 & 0xff)) {
          DAT_0202dadc._1_1_ = 0;
        }
        DAT_0202dae5 = 0;
      }
      DAT_0202dae6._0_1_ = (byte)DAT_0202dae6 + 1;
      if ((byte)(&DAT_08831050)[DAT_0202dadc._2_1_] < (byte)DAT_0202dae6) {
        uVar2 = DAT_0202dadc._2_1_ + 1;
        DAT_0202dadc._2_1_ = (byte)uVar2;
        if (9 < (uVar2 & 0xff)) {
          DAT_0202dadc._2_1_ = 0;
        }
        DAT_0202dae6._0_1_ = 0;
      }
    }
    if ((DAT_02001286 >> 8 == 8) && ((DAT_02001286 & 0xff) == 7)) {
      DAT_0202dae6._1_1_ = DAT_0202dae6._1_1_ + 1;
      if ((byte)(&DAT_0883105a)[DAT_0202dadc._3_1_] < DAT_0202dae6._1_1_) {
        uVar2 = DAT_0202dadc._3_1_ + 1;
        DAT_0202dadc._3_1_ = (byte)uVar2;
        if (9 < (uVar2 & 0xff)) {
          DAT_0202dadc._3_1_ = 0;
        }
        DAT_0202dae6._1_1_ = 0;
      }
      DAT_0202dae8._0_1_ = (byte)DAT_0202dae8 + 1;
      if ((byte)(&DAT_08831064)[(byte)DAT_0202dae0] < (byte)DAT_0202dae8) {
        uVar2 = (byte)DAT_0202dae0 + 1;
        DAT_0202dae0._0_1_ = (byte)uVar2;
        if (9 < (uVar2 & 0xff)) {
          DAT_0202dae0._0_1_ = 0;
        }
        DAT_0202dae8._0_1_ = 0;
      }
      DAT_0202dae8._1_1_ = DAT_0202dae8._1_1_ + 1;
      if ((byte)(&DAT_0883106e)[DAT_0202dae0._1_1_] < DAT_0202dae8._1_1_) {
        uVar2 = DAT_0202dae0._1_1_ + 1;
        DAT_0202dae0._1_1_ = (byte)uVar2;
        if (9 < (uVar2 & 0xff)) {
          DAT_0202dae0._1_1_ = 0;
        }
        DAT_0202dae8._1_1_ = 0;
      }
    }
    if ((DAT_02001284 >> 8 == 8) && ((DAT_02001284 & 0xff) == 8)) {
      DAT_0202dae8._2_1_ = DAT_0202dae8._2_1_ + 1;
      if ((byte)(&DAT_08831078)[DAT_0202dae0._2_1_] < DAT_0202dae8._2_1_) {
        uVar2 = DAT_0202dae0._2_1_ + 1;
        DAT_0202dae0._2_1_ = (byte)uVar2;
        if (9 < (uVar2 & 0xff)) {
          DAT_0202dae0._2_1_ = 0;
        }
        DAT_0202dae8._2_1_ = 0;
      }
    }
    if ((DAT_02001286 >> 8 == 8) && ((DAT_02001286 & 0xff) == 0xb)) {
      DAT_0202dae8._3_1_ = DAT_0202dae8._3_1_ + 1;
      if ((byte)(&DAT_08831082)[DAT_0202dae0._3_1_] < DAT_0202dae8._3_1_) {
        uVar2 = DAT_0202dae0._3_1_ + 1;
        DAT_0202dae0._3_1_ = (byte)uVar2;
        if (9 < (uVar2 & 0xff)) {
          DAT_0202dae0._3_1_ = 0;
        }
        DAT_0202dae8._3_1_ = 0;
      }
      DAT_0202daec._0_1_ = (byte)DAT_0202daec + 1;
      if ((byte)(&DAT_0883108c)[DAT_0202dae4] < (byte)DAT_0202daec) {
        uVar2 = DAT_0202dae4 + 1;
        DAT_0202dae4 = (byte)uVar2;
        if (9 < (uVar2 & 0xff)) {
          DAT_0202dae4 = 0;
        }
        DAT_0202daec._0_1_ = 0;
      }
    }
    if ((((DAT_0202cac0 & 0xf) == 3) && (DAT_02001284 >> 8 == 8)) && ((DAT_02001284 & 0xff) == 0)) {
      if ((DAT_0202dad8 & 1) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 1;
        sub_0800249C(0x54,0);
        sub_0800249C(0x55,0);
      }
      sub_080025D8(0x54);
      sub_080025D8(0x55);
      goto LAB_08013b3e;
    }
  }
  if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0x54);
    sub_08002624(0x55);
  }
LAB_08013b3e:
  if ((DAT_0202e891 == '\0') || (DAT_0202e891 == '\x04')) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      if (DAT_0202e891 == '\0') {
        sub_0800249C(0x87,0x2a0);
      }
      else {
        sub_0800249C(0x87,0x2c0);
      }
    }
    sub_080025D8(0x87);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x87);
    DAT_0202e891 = -1;
  }
  return in_lr;
}

