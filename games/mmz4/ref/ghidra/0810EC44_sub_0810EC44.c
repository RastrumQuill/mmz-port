// sub_0810EC44 at 0x0810EC44 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0810EC44(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)((int)param_1 + 0xd)) {
  case 0:
    sub_0810E148(param_1,*(undefined *)(param_1 + 2));
    DAT_02000a00 = DAT_02000a00 | 0x100;
    _DAT_02000a0c = 0;
    DAT_03002ac0 = 0;
    DAT_02000a50 = DAT_02000a50 | 0x2000;
    DAT_02000a5c = 1;
    DAT_02000a5e = DAT_02000a5e | 1;
    DAT_02000a5d = DAT_02000a5d | 1;
    DAT_02000a58 = 0x869a;
    param_1[8] = 0;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 1:
    sub_0810E6CC(param_1,param_1[8]);
    uVar1 = param_1[8];
    param_1[8] = uVar1 + 4;
    if (0x3f < (short)(uVar1 + 4)) {
      DAT_02000a54 = 0x10e0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_0810ec58_caseD_2:
      param_1[1] = 1;
      uVar1 = sub_0810D1A4(*(undefined4 *)(param_1 + 0xe));
      param_1[8] = uVar1;
      param_1[9] = 1;
      param_1[10] = 3;
      *(undefined *)(param_1 + 7) = 0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_0810ec58_caseD_3:
      sub_0810E6CC(param_1,0x40);
      if (((*(int *)(param_1 + 4) == 0) || ((*param_1 & 1) != 0)) && ((DAT_02000764 & 3) != 0)) {
        *(undefined *)(param_1 + 7) = 1;
      }
      if ((*(char *)(param_1 + 7) != '\0') || ((DAT_0202f388 & 2) != 0)) {
        param_1[10] = 0;
      }
      sub_0810D270(*(undefined4 *)(param_1 + 0xe),1,0x11,param_1[9]);
      sub_0810D3B8(*(undefined4 *)(param_1 + 0xe),(short)param_1[9] + -1);
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
LAB_0810ee0a:
          *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
        }
      }
    }
    break;
  case 2:
    goto switchD_0810ec58_caseD_2;
  case 3:
    goto switchD_0810ec58_caseD_3;
  case 4:
    sub_0810E6CC(param_1,0x40);
    sub_0810D214(*(undefined4 *)(param_1 + 0xe),1,0x11);
    uVar1 = param_1[10];
    param_1[10] = uVar1 + 1;
    if (*(int *)(param_1 + 4) == 0) {
      if ((uVar1 + 1 & 0x10) == 0) {
        sub_0810D3E4(&DAT_08136330,0x1c,0x12);
      }
      uVar1 = DAT_0202f388;
      if ((DAT_02000764 & 3) == 0) goto LAB_0810ee02;
    }
    else if ((int)(short)param_1[10] <= *(int *)(param_1 + 4)) {
      uVar1 = *param_1;
LAB_0810ee02:
      if ((uVar1 & 2) == 0) {
        return in_lr;
      }
    }
    goto LAB_0810ee0a;
  case 5:
    sub_0810E6CC(param_1,0x40);
    if ((*param_1 & 2) == 0) {
      if ((*param_1 & 1) != 0) {
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          sub_0810D214(*(undefined4 *)(param_1 + 0xe),1,0x11);
          param_1[1] = 4;
          return in_lr;
        }
LAB_0810ee56:
        *(int *)(param_1 + 0xe) = iVar2;
        sub_0810E048(param_1);
        param_1[1] = 1;
        *(undefined *)((int)param_1 + 0xd) = 2;
        return in_lr;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 != 0) goto LAB_0810ee56;
    }
    param_1[1] = 5;
    param_1[8] = 0x40;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 6:
    uVar1 = param_1[8];
    param_1[8] = (ushort)(uVar1 - 4);
    if ((int)((uVar1 - 4) * 0x10000) >> 0x10 == 0) {
      DAT_02000a50 = DAT_02000a50 & 0xdfff;
      DAT_02000a5e = DAT_02000a5e | 1;
      DAT_02000a5d = DAT_02000a5d | 1;
      *(undefined4 *)(param_1 + 6) = 0;
    }
    else {
      sub_0810E6CC(param_1,param_1[8]);
    }
    break;
  default:
    break;
  }
  return in_lr;
}

