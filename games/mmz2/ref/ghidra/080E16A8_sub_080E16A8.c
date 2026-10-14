// sub_080E16A8 at 0x080E16A8 (thumb)

undefined4 sub_080E16A8(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar4 = sub_080E3D88(param_1);
  if (iVar4 * 0x10000 < 0) {
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    sub_08003264(0xb9);
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    sVar2 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar2;
    DAT_03002ec0 = (undefined)sVar2;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (0x1f < sVar2) {
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e16ce_caseD_2:
      if ((DAT_02000d16 & 0x80) != 0) {
        sub_080032EC(1);
        *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
      }
      if ((DAT_02000d16 & 0x40) != 0) {
        sub_080032EC(1);
        *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 2;
      }
      uVar3 = sub_080EF330(*(undefined2 *)(param_1 + 0xc),3);
      *(undefined2 *)(param_1 + 0xc) = uVar3;
      if ((DAT_02000d14 & 9) != 0) {
        sub_080032EC(2);
        *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      }
    }
    break;
  case 2:
    goto switchD_080e16ce_caseD_2;
  case 3:
    sub_0800170C((undefined2 *)(param_1 + 0x2050),param_1 + 0x2054,4);
    *(undefined2 *)(param_1 + 0x2050) = 0x5431;
    *(undefined2 *)(param_1 + 0x2052) = *(undefined2 *)(param_1 + 0xc);
    sub_08001810();
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 4:
    if (DAT_02000ce0 == '\0') {
      *(undefined2 *)(param_1 + 4) = 0x20;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e16ce_caseD_5:
      sVar2 = *(short *)(param_1 + 4) + -1;
      *(short *)(param_1 + 4) = sVar2;
      uVar1 = DAT_02000ca2;
      DAT_03002ec0 = (undefined)sVar2;
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
      if (sVar2 == 0) {
        DAT_02000ca2 = DAT_02000ca2 & 0xfffd;
        sub_080E0E64(param_1,0x604,uVar1);
      }
    }
    break;
  case 5:
    goto switchD_080e16ce_caseD_5;
  default:
    break;
  }
  sub_080DE510(&DAT_0834e9fa,1,4);
  uVar5 = 0;
  do {
    uVar6 = (int)(uVar5 * 0x10000) >> 0x10;
    if (*(ushort *)(param_1 + 0xc) == uVar6) {
      sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[(ushort)(&DAT_0835e3fc)[uVar6]],3,
                   uVar6 * 2 + 9);
    }
    else {
      sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[(ushort)(&DAT_0835e402)[uVar6]],3,
                   uVar6 * 2 + 9);
    }
    uVar6 = uVar5 * 0x10000 + 0x10000;
    uVar5 = uVar6 >> 0x10;
  } while ((int)uVar6 >> 0x10 < 3);
  if ((DAT_03002a60 & 1) != 0) {
    DAT_02000fa4._0_2_ = (short)DAT_02000fa4 + 1;
    DAT_02000fa4._2_2_ = DAT_02000fa4._2_2_ + -1;
  }
  return in_lr;
}

