// sub_080E1A24 at 0x080E1A24 (thumb)

undefined4 sub_080E1A24(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar3 = sub_080E3D88();
  if (iVar3 * 0x10000 < 0) {
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    break;
  case 1:
    goto switchD_080e1a4e_caseD_1;
  case 2:
    goto switchD_080e1a4e_caseD_2;
  case 3:
  case 4:
    goto switchD_080e1a4e_caseD_3;
  default:
    goto switchD_080e1a4e_caseD_5;
  case 0x10:
    DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x2500;
    DAT_02000f98 = 0x406;
    DAT_02000fa4 = 0;
    sub_08002638(&DAT_08391454,0x4000);
    sub_08002AEC(&DAT_08391460,0);
    sub_080EEF68(&DAT_08385798,(DAT_02000f98 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080DE274();
    *(undefined *)(param_1 + 2) = 0;
    goto switchD_080e1a4e_caseD_5;
  }
  *(undefined2 *)(param_1 + 4) = 0;
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e1a4e_caseD_1:
  uVar6 = 0;
  do {
    iVar3 = sub_080020F0(uVar6 & 0xff,0x1b4);
    sVar1 = (short)uVar6;
    if (iVar3 == 0) {
      (&DAT_02000208)[sVar1] = 0;
    }
    else {
      (&DAT_02000208)[sVar1] = 1;
      sub_080021F0(uVar6 & 0xff,param_1 + 0x2050,0x1b4);
      do {
        do {
          sub_080020D0();
        } while (DAT_02000d40 == '\x01');
      } while (DAT_02000d5e == 0);
      (&DAT_02000210)[sVar1] = *(undefined4 *)(param_1 + 0x20e0);
      (&DAT_02000228)[sVar1] = (uint)*(byte *)(param_1 + 0x20d5);
      (&DAT_02000240)[sVar1] = *(undefined *)(param_1 + 0x2050);
      (&DAT_02000248)[sVar1] = *(undefined *)(param_1 + 0x2051);
    }
    uVar4 = uVar6 * 0x10000 + 0x10000;
    uVar6 = uVar4 >> 0x10;
  } while ((int)uVar4 >> 0x10 < 6);
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e1a4e_caseD_2:
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e1a4e_caseD_3:
  sub_080DE510(&DAT_0834ea75,1,1);
  uVar6 = 0;
  do {
    iVar3 = (int)(uVar6 * 0x10000) >> 0x10;
    if ((&DAT_02000208)[iVar3] == '\0') {
      iVar5 = iVar3 * 2 + 7;
      sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar3 + 0x1f],7,iVar5);
      sub_080DE510(&DAT_0834c9e6,9,iVar5);
    }
    else {
      sub_080E0F0C(uVar6 & 0xff,*(undefined *)(&DAT_02000228 + iVar3),(&DAT_02000210)[iVar3],
                   (&DAT_02000240)[iVar3],(&DAT_02000248)[iVar3],
                   iVar3 * 0x2000000 + 0x7000000U >> 0x18);
    }
    uVar4 = uVar6 * 0x10000 + 0x10000;
    uVar6 = uVar4 >> 0x10;
  } while ((int)uVar4 >> 0x10 < 6);
  sub_080DE510(&DAT_0834c9e4,5,*(short *)(param_1 + 4) * 2 + 7);
  if (*(char *)(param_1 + 2) == '\x03') {
    if (0x1f < *(short *)(param_1 + 6)) {
      if ((DAT_02000d16 & 0x80) != 0) {
        sub_080032EC(1);
        *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
      }
      if ((DAT_02000d16 & 0x40) != 0) {
        sub_080032EC(1);
        *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 5;
      }
      uVar2 = sub_080EF1E8((int)*(short *)(param_1 + 4),6);
      *(undefined2 *)(param_1 + 4) = uVar2;
      if ((DAT_02000d14 & 2) == 0) {
        if ((DAT_02000d14 & 9) != 0) {
          if ((&DAT_02000208)[*(short *)(param_1 + 4)] == '\0') {
            sub_080032EC(4);
          }
          else {
            sub_080032EC(2);
            sub_080021F0(*(undefined *)(param_1 + 4),&DAT_02036b30,0x1b4);
            *(undefined2 *)(param_1 + 6) = 0x20;
            *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
          }
        }
      }
      else {
        sub_080032EC(3);
      }
      goto switchD_080e1a4e_caseD_5;
    }
    sVar1 = *(short *)(param_1 + 6) + 1;
  }
  else {
    if (*(short *)(param_1 + 6) == 0) {
      if ((DAT_02000d40 != '\x01') && (DAT_02000d5e != 0)) {
        *(char *)(param_1 + 0xf) = (char)*(undefined2 *)(param_1 + 4);
        sub_080E0E64(param_1,0x704);
      }
      goto switchD_080e1a4e_caseD_5;
    }
    sVar1 = *(short *)(param_1 + 6) + -1;
  }
  *(short *)(param_1 + 6) = sVar1;
  DAT_03002ec0 = (undefined)sVar1;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
switchD_080e1a4e_caseD_5:
  if ((DAT_03002a60 & 1) != 0) {
    DAT_02000fa4 = CONCAT22(DAT_02000fa4._2_2_ + -1,(short)DAT_02000fa4 + 1);
  }
  return in_lr;
}

