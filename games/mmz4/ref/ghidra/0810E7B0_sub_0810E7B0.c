// sub_0810E7B0 at 0x0810E7B0 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0810E7B0(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
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
    param_1[8] = 0;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_0810e7c4_caseD_1:
    param_1[1] = 1;
    DAT_02000a58 = (*(byte *)((int)param_1 + 5) + 6) * 8 + 2 & 0xff |
                   (ushort)*(byte *)((int)param_1 + 5) * 0x800 - 0x200;
    sub_0810E24C(param_1,param_1[8]);
    uVar1 = param_1[8];
    param_1[8] = uVar1 + 4;
    if (0x3f < (short)(uVar1 + 4)) {
      if (*(char *)(param_1 + 3) == '\0') {
        DAT_02000a54 = 0x9e8;
      }
      else {
        DAT_02000a54 = 0x7e7;
      }
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_0810e7c4_caseD_2:
      uVar1 = sub_0810D1A4(*(undefined4 *)(param_1 + 0xe));
      param_1[8] = uVar1;
      param_1[9] = 1;
      param_1[10] = 3;
      *(undefined *)(param_1 + 7) = 0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_0810e7c4_caseD_3:
      sub_0810E24C(param_1,0x40);
      if (((*(int *)(param_1 + 4) == 0) || ((*param_1 & 1) != 0)) && ((DAT_02000764 & 3) != 0)) {
        *(undefined *)(param_1 + 7) = 1;
      }
      if ((*(char *)(param_1 + 7) != '\0') || ((DAT_0202f388 & 2) != 0)) {
        param_1[10] = 0;
      }
      iVar3 = 0;
      if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
        iVar3 = 1;
      }
      sub_0810D270(*(undefined4 *)(param_1 + 0xe),iVar3 * -7 + 8,*(undefined *)((int)param_1 + 5),
                   param_1[9]);
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
LAB_0810ebe4:
          *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
        }
      }
    }
switchD_0810e7c4_caseD_9:
    return in_lr;
  case 1:
    goto switchD_0810e7c4_caseD_1;
  case 2:
    goto switchD_0810e7c4_caseD_2;
  case 3:
    goto switchD_0810e7c4_caseD_3;
  case 4:
    sub_0810E24C(param_1,0x40);
    if ((DAT_0202f388 & 8) == 0) {
      iVar3 = 0;
      if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
        iVar3 = 1;
      }
      sub_0810D214(*(undefined4 *)(param_1 + 0xe),iVar3 * -7 + 8,*(undefined *)((int)param_1 + 5));
    }
    uVar1 = param_1[10];
    param_1[10] = uVar1 + 1;
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x12) == 0) {
        if ((uVar1 + 1 & 0x10) == 0) {
          sub_0810D3E4(&DAT_08136330,(uint)*(byte *)(param_1 + 3) * -7 + 0x1c,
                       *(byte *)((int)param_1 + 5) + 5);
        }
        uVar1 = DAT_0202f388;
        if ((DAT_02000764 & 3) == 0) goto LAB_0810ea9e;
      }
      else {
        param_1[1] = 3;
        if ((DAT_02000766 & 0xc0) != 0) {
          sub_08002B10(1);
          if ((*(byte *)((int)param_1 + 7) & 0xf0) == 0x20) {
            bVar2 = 0x10;
          }
          else {
            bVar2 = 0x20;
          }
          *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) & 0xf | bVar2;
        }
        iVar3 = 0;
        if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
          iVar3 = 1;
        }
        iVar4 = *(byte *)((int)param_1 + 5) + 2;
        if ((*(byte *)((int)param_1 + 7) & 0xf0) == 0x20) {
          iVar4 = *(byte *)((int)param_1 + 5) + 4;
        }
        sub_0810D214(&DAT_0886a17c,iVar3 * -7 + 8,iVar4);
        if ((*param_1 & 4) == 0) {
          if ((DAT_02000764 & 1) == 0) {
            return in_lr;
          }
          *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
          sub_08002B10(2);
          return in_lr;
        }
        sub_08002B10(3);
      }
    }
    else if ((int)(short)param_1[10] <= *(int *)(param_1 + 4)) {
      uVar1 = *param_1;
LAB_0810ea9e:
      if ((uVar1 & 2) == 0) {
        return in_lr;
      }
    }
    goto LAB_0810ebe4;
  case 5:
    uVar1 = *param_1;
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 1) != 0) {
        if ((*(int *)(param_1 + 0x12) != 0) && ((uVar1 & 4) != 0)) {
          *(uint *)(param_1 + 0x10) = uVar1 & 2;
          *(uint *)(param_1 + 0x12) = uVar1 & 2;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          sub_0810E24C(param_1,0x40);
          if ((DAT_0202f388 & 8) == 0) {
            iVar3 = 0;
            if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
              iVar3 = 1;
            }
            sub_0810D214(*(undefined4 *)(param_1 + 0xe),iVar3 * -7 + 8,
                         *(undefined *)((int)param_1 + 5));
          }
          param_1[1] = 4;
          return in_lr;
        }
      }
      if ((*(int *)(param_1 + 0x12) != 0) && ((*(byte *)((int)param_1 + 7) & 0xf0) == 0x20)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x12);
      }
      if ((*(int *)(param_1 + 0x10) != 0) && (iVar3 = sub_0810E118(param_1), iVar3 == 0)) {
        sub_0810E24C(param_1,0x40);
        *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_1 + 0x10);
        sub_0810E048(param_1);
        param_1[1] = 1;
        *(undefined *)((int)param_1 + 0xd) = 2;
        return in_lr;
      }
    }
    param_1[1] = 5;
    param_1[8] = 0x40;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 6:
    param_1[8] = param_1[8] - 4;
    if ((DAT_0202f388 & 8) == 0) {
      iVar3 = 0;
      if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
        iVar3 = 1;
      }
      sub_0810D214(*(undefined4 *)(param_1 + 0xe),iVar3 * -7 + 8,*(undefined *)((int)param_1 + 5));
    }
    sub_0810E24C(param_1,param_1[8]);
    if (param_1[8] != 0) {
      return in_lr;
    }
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_0810e7c4_caseD_7:
    if ((*(int *)(param_1 + 0x10) != 0) && (uVar1 = *param_1, (uVar1 & 2) == 0)) {
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0x10);
      sub_0810E048(param_1);
      *(byte *)((int)param_1 + 0xd) = (byte)uVar1 & 2;
      return in_lr;
    }
    goto LAB_0810ebe4;
  case 7:
    goto switchD_0810e7c4_caseD_7;
  case 8:
    DAT_02000a50 = DAT_02000a50 & 0xdfff;
    DAT_02000a5e = DAT_02000a5e | 1;
    DAT_02000a5d = DAT_02000a5d | 1;
    *(undefined4 *)(param_1 + 6) = 0;
    DAT_0202f358 = 0;
    DAT_0202f359 = 0;
    DAT_0202f35a = 0x1e;
    DAT_0202f35b = 0x16;
    return in_lr;
  default:
    goto switchD_0810e7c4_caseD_9;
  }
}

