// sub_080EB208 at 0x080EB208 (thumb)

undefined4 sub_080EB208(ushort *param_1)

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
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 1:
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 2:
    goto switchD_080eb21c_caseD_2;
  case 3:
    goto switchD_080eb21c_caseD_3;
  case 4:
    sub_080E9604(*(undefined4 *)(param_1 + 0xe),1,0x12);
    uVar1 = param_1[10];
    param_1[10] = uVar1 + 1;
    if (*(int *)(param_1 + 4) == 0) {
      if ((uVar1 + 1 & 0x10) == 0) {
        sub_080E97D4(&DAT_0810aa14,0x1c,0x13);
      }
      uVar1 = DAT_02030c18;
      if ((DAT_02002134 & 3) == 0) goto LAB_080eb366;
    }
    else if ((int)(short)param_1[10] <= *(int *)(param_1 + 4)) {
      uVar1 = *param_1;
LAB_080eb366:
      if ((uVar1 & 2) == 0) {
        return in_lr;
      }
    }
    break;
  case 5:
    if ((*param_1 & 2) == 0) {
      if ((*param_1 & 1) != 0) {
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          sub_080E9604(*(undefined4 *)(param_1 + 0xe),1,0x12);
          param_1[1] = 4;
          return in_lr;
        }
LAB_080eb3b2:
        *(int *)(param_1 + 0xe) = iVar2;
        sub_080EA350(param_1);
        param_1[1] = 1;
        *(undefined *)((int)param_1 + 0xd) = 2;
        return in_lr;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 != 0) goto LAB_080eb3b2;
    }
    param_1[1] = 5;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 6:
    *(undefined4 *)(param_1 + 6) = 0;
    return in_lr;
  default:
    return in_lr;
  }
  goto LAB_080eb36e;
switchD_080eb21c_caseD_2:
  param_1[1] = 1;
  uVar1 = sub_080E9594(*(undefined4 *)(param_1 + 0xe));
  param_1[8] = uVar1;
  param_1[9] = 1;
  param_1[10] = 3;
  *(undefined *)(param_1 + 7) = 0;
  *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080eb21c_caseD_3:
  if (((*(int *)(param_1 + 4) == 0) || ((*param_1 & 1) != 0)) && ((DAT_02002134 & 3) != 0)) {
    *(undefined *)(param_1 + 7) = 1;
  }
  if ((*(char *)(param_1 + 7) != '\0') || ((DAT_02030c18 & 2) != 0)) {
    param_1[10] = 0;
  }
  sub_080E9660(*(undefined4 *)(param_1 + 0xe),1,0x12,param_1[9]);
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
LAB_080eb36e:
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
    }
  }
  return in_lr;
}

