// sub_080BD0E4 at 0x080BD0E4 (thumb)

undefined4 sub_080BD0E4(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)((int)param_1 + 0xd)) {
  case 0:
    sub_080BCA50(param_1,*(undefined *)(param_1 + 2));
    DAT_02004f30 = DAT_02004f30 | 0x100;
    DAT_02004f3c = 0;
    DAT_030017a0 = 0;
    DAT_02004f80 = DAT_02004f80 | 0x2000;
    DAT_02004f8c = 1;
    DAT_02004f8e = DAT_02004f8e | 1;
    DAT_02004f8d = DAT_02004f8d & 0xfe;
    DAT_02004f88 = 0x859b;
    param_1[8] = 0;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 1:
    sub_080BCB48(param_1,param_1[8]);
    uVar1 = param_1[8];
    param_1[8] = uVar1 + 4;
    if (0x3f < (short)(uVar1 + 4)) {
      DAT_02004f84 = 0x10e0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080bd0f8_caseD_2:
      param_1[1] = 1;
      uVar1 = sub_080BC064(*(undefined4 *)(param_1 + 0xe));
      param_1[8] = uVar1;
      param_1[9] = 1;
      param_1[10] = 4;
      *(undefined *)(param_1 + 7) = 0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080bd0f8_caseD_3:
      sub_080BCB48(param_1,0x40);
      if (((*(int *)(param_1 + 4) == 0) || ((*param_1 & 1) != 0)) && ((DAT_02004ca8 & 3) != 0)) {
        *(undefined *)(param_1 + 7) = 1;
      }
      if ((*(char *)(param_1 + 7) != '\0') || ((DAT_02023658 & 2) != 0)) {
        param_1[10] = 0;
      }
      sub_080BC0FC(*(undefined4 *)(param_1 + 0xe),1,0x11,param_1[9]);
      sub_080BC14C(*(undefined4 *)(param_1 + 0xe),(short)param_1[9] + -1);
      uVar1 = param_1[10];
      param_1[10] = (ushort)(uVar1 - 1);
      if ((int)((uVar1 - 1) * 0x10000) >> 0x10 == -1) {
        uVar1 = param_1[9];
        param_1[9] = uVar1 + 1;
        if (*(char *)(param_1 + 7) != '\0') {
          param_1[9] = uVar1 + 4;
        }
        if ((short)param_1[9] < (short)param_1[8]) {
          param_1[10] = 3;
        }
        else {
          param_1[10] = 0;
          param_1[1] = 2;
LAB_080bd2b2:
          *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
        }
      }
    }
    break;
  case 2:
    goto switchD_080bd0f8_caseD_2;
  case 3:
    goto switchD_080bd0f8_caseD_3;
  case 4:
    sub_080BCB48(param_1,0x40);
    sub_080BC0AC(*(undefined4 *)(param_1 + 0xe),1,0x11);
    uVar1 = param_1[10];
    param_1[10] = uVar1 + 1;
    if (*(int *)(param_1 + 4) == 0) {
      if ((uVar1 + 1 & 0x10) == 0) {
        sub_080BC174(&DAT_080d1d90,0x1c,0x12);
      }
      uVar1 = DAT_02023658;
      if ((DAT_02004ca8 & 3) == 0) goto LAB_080bd2ae;
    }
    else if ((int)(short)param_1[10] <= *(int *)(param_1 + 4)) {
      uVar1 = *param_1;
LAB_080bd2ae:
      if ((uVar1 & 2) == 0) {
        return in_lr;
      }
    }
    goto LAB_080bd2b2;
  case 5:
    sub_080BCB48(param_1,0x40);
    if ((*param_1 & 2) == 0) {
      if ((*param_1 & 1) != 0) {
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          sub_080BC0AC(*(undefined4 *)(param_1 + 0xe),1,0x11);
          param_1[1] = 3;
          return in_lr;
        }
LAB_080bd2fe:
        *(int *)(param_1 + 0xe) = iVar2;
        sub_080BC934(param_1);
        param_1[1] = 1;
        *(undefined *)((int)param_1 + 0xd) = 2;
        return in_lr;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 != 0) goto LAB_080bd2fe;
    }
    param_1[1] = 4;
    param_1[8] = 0x40;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 6:
    uVar1 = param_1[8];
    param_1[8] = (ushort)(uVar1 - 4);
    if ((int)((uVar1 - 4) * 0x10000) >> 0x10 == 0) {
      DAT_02004f80 = DAT_02004f80 & 0xdfff;
      DAT_02004f8e = DAT_02004f8e | 1;
      DAT_02004f8d = DAT_02004f8d | 1;
      *(undefined4 *)(param_1 + 6) = 0;
    }
    else {
      sub_080BCB48(param_1,param_1[8]);
    }
    break;
  default:
    break;
  }
  return in_lr;
}

