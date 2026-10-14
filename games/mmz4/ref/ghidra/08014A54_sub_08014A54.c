// sub_08014A54 at 0x08014A54 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08014A54(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 1) {
    if (((0x1c2000 < *param_1) && (*param_1 < 0x2a3000)) &&
       (DAT_0202dae0._2_2_ = DAT_0202dae0._2_2_ + 1, 0xff < DAT_0202dae0._2_2_)) {
      DAT_0202dae0._2_2_ = 0;
      uVar4 = 0;
      do {
        iVar2 = *param_1;
        iVar3 = iVar2 - ((&DAT_088323e8)[uVar4 * 2] + -0x7800);
        if (iVar3 < 0) {
          if (((&DAT_088323e8)[uVar4 * 2] + -0x7800) - iVar2 < 0xf000) goto LAB_08014af0;
LAB_08014b34:
          if (iVar2 + 0xf000 < (int)(&DAT_088323e8)[uVar4 * 2]) break;
        }
        else {
          if (0xefff < iVar3) goto LAB_08014b34;
LAB_08014af0:
          iVar3 = param_1[1] - ((&DAT_088323ec)[uVar4 * 2] + -0x5000);
          if (iVar3 < 0) {
            iVar3 = ((&DAT_088323ec)[uVar4 * 2] + -0x5000) - param_1[1];
          }
          if (0x4fff < iVar3) goto LAB_08014b34;
          sub_080D03B0(&DAT_088323e8 + uVar4 * 2,1,0);
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while ((&DAT_088323e8)[uVar4 * 2] != 0);
      uVar4 = 0;
      do {
        iVar2 = *param_1;
        iVar3 = iVar2 - ((&DAT_08832480)[uVar4 * 2] + -0x7800);
        if (iVar3 < 0) {
          if (((&DAT_08832480)[uVar4 * 2] + -0x7800) - iVar2 < 0xf000) goto LAB_08014ba0;
LAB_08014be4:
          if (iVar2 + 0xf000 < (int)(&DAT_08832480)[uVar4 * 2]) break;
        }
        else {
          if (0xefff < iVar3) goto LAB_08014be4;
LAB_08014ba0:
          iVar3 = param_1[1] - ((&DAT_08832484)[uVar4 * 2] + -0x5000);
          if (iVar3 < 0) {
            iVar3 = ((&DAT_08832484)[uVar4 * 2] + -0x5000) - param_1[1];
          }
          if (0x4fff < iVar3) goto LAB_08014be4;
          sub_080D03B0(&DAT_08832480 + uVar4 * 2,0,0);
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while ((&DAT_08832480)[uVar4 * 2] != 0);
    }
    if ((DAT_0202cac0 & 0xf) == 1) {
      if (((0x185fff < *param_1) && (*param_1 < 0x195000)) && (DAT_0202dadc._3_1_ == '`')) {
        sub_08002B10(0x180);
      }
      if ((DAT_0202cac0 & 0xf) == 1) {
        if (*param_1 - 0x195001U < 0x1dfff) {
          if (_DAT_0202dae4 == 0) {
            sub_08002B10(0x163);
            _DAT_0202dae4 = 0x163;
          }
        }
        else if (_DAT_0202dae4 != 0) {
          _DAT_0202dae4 = 0;
          sub_08002B5C(0x163);
        }
        if ((DAT_0202cac0 & 0xf) == 1) {
          if ((DAT_02001286 >> 8 == 9) && ((DAT_02001286 & 0xff) == 2)) {
            if ((DAT_0202dad8 & 1) == 0) {
              DAT_0202dad8 = DAT_0202dad8 | 1;
              sub_0800249C(0x4b,0);
            }
            sub_080025D8(0x4b);
          }
          else if ((DAT_0202dad8 & 1) != 0) {
            DAT_0202dad8 = DAT_0202dad8 ^ 1;
            sub_08002624(0x4b);
          }
          if ((DAT_02001286 >> 8 == 9) && ((DAT_02001286 & 0xff) == 1)) {
            if ((DAT_0202dad8 & 2) == 0) {
              DAT_0202dad8 = DAT_0202dad8 | 2;
              sub_0800249C(0x4c,0);
            }
            sub_080025D8(0x4c);
          }
          else if ((DAT_0202dad8 & 2) != 0) {
            DAT_0202dad8 = DAT_0202dad8 ^ 2;
            sub_08002624(0x4c);
          }
          if ((DAT_02001284 >> 8 == 9) && ((DAT_02001284 & 0xff) == 0)) {
            if ((DAT_0202dad8 & 0x20) == 0) {
              DAT_0202dad8 = DAT_0202dad8 | 0x20;
              sub_0800249C(0x4d,0);
            }
            sub_080025D8(0x4d);
          }
          else if ((DAT_0202dad8 & 0x20) != 0) {
            DAT_0202dad8 = DAT_0202dad8 ^ 0x20;
            sub_08002624(0x4d);
          }
          goto LAB_08014e60;
        }
      }
    }
  }
  if ((DAT_02001284 >> 8 == 9) && ((DAT_02001284 & 0xff) == 0)) {
    if ((DAT_0202dad8 & 0x20) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x20;
      sub_0800249C(0xb6,0);
    }
    sub_080025D8(0xb6);
  }
  else if ((DAT_0202dad8 & 0x20) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x20;
    sub_08002624(0xb6);
  }
LAB_08014e60:
  if ((DAT_02001284 >> 8 == 9) && ((DAT_02001284 & 0xff) == 0)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0x4e,0);
    }
    sub_080025D8(0x4e);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0x4e);
  }
  if ((DAT_02001286 >> 8 == 9) && (((DAT_02001286 & 0xff) == 3 || ((DAT_02001286 & 0xff) == 4)))) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0x4f,0);
    }
    sub_080025D8(0x4f);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0x4f);
  }
  if ((DAT_02001286 >> 8 == 9) && ((DAT_02001286 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 0x10) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 0x10;
      sub_0800249C(0x50,0);
    }
    sub_080025D8(0x50);
  }
  else if ((DAT_0202dad8 & 0x10) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 0x10;
    sub_08002624(0x50);
  }
  if ((DAT_0202cac0 & 0xf) == 1) {
    if ((DAT_02001284 >> 8 == 9) && ((DAT_02001284 & 0xff) == 0)) {
      if ((char)DAT_0202dadc == '\0') {
        DAT_0202dada = DAT_0202dada + 1;
        if (((DAT_0202dada & 0xf) == 0) &&
           (DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039, (DAT_0203587c >> 0x10 & 7) == 0)) {
          DAT_0202dadc._0_1_ = '\x01';
        }
      }
      else {
        bVar1 = (char)DAT_0202dadc + 1;
        DAT_0202dadc._0_1_ = (char)DAT_0202dadc + '\x01';
        if (7 < bVar1) {
          DAT_0202dadc._0_1_ = (char)DAT_02001284;
        }
      }
    }
    if (DAT_02001286 >> 8 == 9) {
      if (((DAT_02001286 & 0xff) == 2) &&
         (DAT_0202dadc._1_1_ = DAT_0202dadc._1_1_ + 1, 0xfc < DAT_0202dadc._1_1_)) {
        DAT_0202dadc._1_1_ = 0;
      }
      if (DAT_02001286 >> 8 == 9) {
        if (((DAT_02001286 & 0xff) == 1) &&
           (DAT_0202dadc._2_1_ = DAT_0202dadc._2_1_ + 1, 0xfc < DAT_0202dadc._2_1_)) {
          DAT_0202dadc._2_1_ = 0;
        }
        if ((DAT_02001286 >> 8 == 9) && ((DAT_02001286 & 0xff) == 4)) {
          DAT_0202dadc._3_1_ = DAT_0202dadc._3_1_ + '\x01';
          if (DAT_0202dadc._3_1_ == '~') {
            DAT_0202dadc._3_1_ = '\0';
          }
          DAT_0202dae0._0_1_ = (char)DAT_0202dae0 + '\x01';
          if ((char)DAT_0202dae0 == '\t') {
            DAT_0202dae0._0_1_ = '\0';
          }
        }
      }
    }
  }
  return in_lr;
}

