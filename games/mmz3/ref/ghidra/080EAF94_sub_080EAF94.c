// sub_080EAF94 at 0x080EAF94 (thumb)

undefined4 sub_080EAF94(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)((int)param_1 + 0xd)) {
  case 0:
    sub_080EA450(param_1,*(undefined *)(param_1 + 2));
    DAT_020023c0 = DAT_020023c0 | 0x100;
    DAT_020023cc = 0;
    DAT_03002ac0 = 0;
    DAT_02002410 = DAT_02002410 | 0x2000;
    DAT_0200241c = 1;
    DAT_0200241e = DAT_0200241e | 1;
    DAT_0200241d = DAT_0200241d | 1;
    DAT_02002418 = 0x869a;
    param_1[8] = 0;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 1:
    sub_080EAA1C(param_1,param_1[8]);
    uVar1 = param_1[8];
    param_1[8] = uVar1 + 4;
    if (0x3f < (short)(uVar1 + 4)) {
      DAT_02002414 = 0x10e0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080eafa8_caseD_2:
      param_1[1] = 1;
      uVar1 = sub_080E9594(*(undefined4 *)(param_1 + 0xe));
      param_1[8] = uVar1;
      param_1[9] = 1;
      param_1[10] = 3;
      *(undefined *)(param_1 + 7) = 0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080eafa8_caseD_3:
      sub_080EAA1C(param_1,0x40);
      if (((*(int *)(param_1 + 4) == 0) || ((*param_1 & 1) != 0)) && ((DAT_02002134 & 3) != 0)) {
        *(undefined *)(param_1 + 7) = 1;
      }
      if ((*(char *)(param_1 + 7) != '\0') || ((DAT_02030c18 & 2) != 0)) {
        param_1[10] = 0;
      }
      sub_080E9660(*(undefined4 *)(param_1 + 0xe),1,0x11,param_1[9]);
      sub_080E97A8(*(undefined4 *)(param_1 + 0xe),(short)param_1[9] + -1);
      uVar1 = param_1[10];
      param_1[10] = (ushort)(uVar1 - 1);
      if ((int)((uVar1 - 1) * 0x10000) >> 0x10 == -1) {
        uVar1 = param_1[9];
        param_1[9] = uVar1 + 1;
        if (*(char *)(param_1 + 7) != '\0') {
          param_1[9] = uVar1 + 4;
        }
        if ((short)param_1[9] < (short)param_1[8]) {
          param_1[10] = 2;
        }
        else {
          param_1[10] = 0;
          param_1[1] = 2;
LAB_080eb15a:
          *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
        }
      }
    }
    break;
  case 2:
    goto switchD_080eafa8_caseD_2;
  case 3:
    goto switchD_080eafa8_caseD_3;
  case 4:
    sub_080EAA1C(param_1,0x40);
    sub_080E9604(*(undefined4 *)(param_1 + 0xe),1,0x11);
    uVar1 = param_1[10];
    param_1[10] = uVar1 + 1;
    if (*(int *)(param_1 + 4) == 0) {
      if ((uVar1 + 1 & 0x10) == 0) {
        sub_080E97D4(&DAT_0810aa14,0x1c,0x12);
      }
      uVar1 = DAT_02030c18;
      if ((DAT_02002134 & 3) == 0) goto LAB_080eb152;
    }
    else if ((int)(short)param_1[10] <= *(int *)(param_1 + 4)) {
      uVar1 = *param_1;
LAB_080eb152:
      if ((uVar1 & 2) == 0) {
        return in_lr;
      }
    }
    goto LAB_080eb15a;
  case 5:
    sub_080EAA1C(param_1,0x40);
    if ((*param_1 & 2) == 0) {
      if ((*param_1 & 1) != 0) {
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          sub_080E9604(*(undefined4 *)(param_1 + 0xe),1,0x11);
          param_1[1] = 4;
          return in_lr;
        }
LAB_080eb1a6:
        *(int *)(param_1 + 0xe) = iVar2;
        sub_080EA350(param_1);
        param_1[1] = 1;
        *(undefined *)((int)param_1 + 0xd) = 2;
        return in_lr;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 != 0) goto LAB_080eb1a6;
    }
    param_1[1] = 5;
    param_1[8] = 0x40;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 6:
    uVar1 = param_1[8];
    param_1[8] = (ushort)(uVar1 - 4);
    if ((int)((uVar1 - 4) * 0x10000) >> 0x10 == 0) {
      DAT_02002410 = DAT_02002410 & 0xdfff;
      DAT_0200241e = DAT_0200241e | 1;
      DAT_0200241d = DAT_0200241d | 1;
      *(undefined4 *)(param_1 + 6) = 0;
    }
    else {
      sub_080EAA1C(param_1,param_1[8]);
    }
    break;
  default:
    break;
  }
  return in_lr;
}

