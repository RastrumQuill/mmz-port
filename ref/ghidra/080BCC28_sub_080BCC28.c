// sub_080BCC28 at 0x080BCC28 (thumb)

undefined4 sub_080BCC28(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined **ppuVar3;
  int iVar4;
  ushort uVar5;
  undefined4 in_lr;
  
  if (7 < *(byte *)((int)param_1 + 0xd)) goto LAB_080bd0ce;
  ppuVar3 = &switchD_080bcc3c::switchdataD_080bcc44;
  switch(*(byte *)((int)param_1 + 0xd)) {
  case 0:
    sub_080BCA50(param_1,*(undefined *)(param_1 + 2));
    DAT_02004f30 = DAT_02004f30 | 0x100;
    DAT_02004f3c = 0;
    DAT_030017a0 = 0;
    DAT_02004f80 = DAT_02004f80 | 0x2000;
    DAT_02004f8c = 1;
    DAT_02004f8e = DAT_02004f8e & 0xfe;
    DAT_02004f8d = DAT_02004f8d & 0xfe;
    param_1[8] = 0;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 1:
    param_1[1] = 1;
    DAT_02004f88 = (*(byte *)((int)param_1 + 5) + 8) * 8 & 0xff |
                   (ushort)*(byte *)((int)param_1 + 5) << 0xb;
    if (*(char *)(param_1 + 3) == '\0') {
      uVar2 = (short)((short)(&DAT_080c8e24)[(short)param_1[8]] * 5 >> 3) + 0x48U & 0xff;
      uVar5 = 0x900;
    }
    else {
      uVar2 = (0xa7 - (short)((short)(&DAT_080c8e24)[(short)param_1[8]] * 5 >> 3)) * 0x100;
      uVar5 = 0xe7;
    }
    DAT_02004f84 = uVar2 | uVar5;
    uVar2 = param_1[8];
    ppuVar3 = (undefined **)0x0;
    param_1[8] = uVar2 + 4;
    if (0x3f < (short)(uVar2 + 4)) {
      if (*(char *)(param_1 + 3) == '\0') {
        DAT_02004f84 = 0x9e8;
      }
      else {
        DAT_02004f84 = 0x7e7;
      }
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080bcc3c_caseD_2:
      uVar2 = sub_080BC064(*(undefined4 *)(param_1 + 0xe),ppuVar3);
      param_1[8] = uVar2;
      param_1[9] = 1;
      param_1[10] = 4;
      *(undefined *)(param_1 + 7) = 0;
      cVar1 = *(char *)((int)param_1 + 0xd);
      *(char *)((int)param_1 + 0xd) = cVar1 + '\x01';
      if (*(char *)(param_1 + 2) == '\x01') {
        param_1[10] = 0;
        param_1[1] = 2;
        *(char *)((int)param_1 + 0xd) = cVar1 + '\x02';
      }
      else {
switchD_080bcc3c_caseD_3:
        if (((*(int *)(param_1 + 4) == 0) || ((*param_1 & 1) != 0)) && ((DAT_02004ca8 & 3) != 0)) {
          *(undefined *)(param_1 + 7) = 1;
        }
        if ((*(char *)(param_1 + 7) != '\0') || ((DAT_02023658 & 2) != 0)) {
          param_1[10] = 0;
        }
        iVar4 = 0;
        if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
          iVar4 = 1;
        }
        sub_080BC0FC(*(undefined4 *)(param_1 + 0xe),iVar4 * -8 + 9,*(undefined *)((int)param_1 + 5),
                     param_1[9]);
        sub_080BC14C(*(undefined4 *)(param_1 + 0xe),(short)param_1[9] + -1);
        uVar2 = param_1[10];
        param_1[10] = (ushort)(uVar2 - 1);
        if ((int)((uVar2 - 1) * 0x10000) >> 0x10 == -1) {
          uVar2 = param_1[9];
          param_1[9] = uVar2 + 1;
          if (*(char *)(param_1 + 7) != '\0') {
            param_1[9] = uVar2 + 4;
          }
          if ((short)param_1[9] < (short)param_1[8]) {
            param_1[10] = 3;
          }
          else {
            param_1[10] = 0;
            param_1[1] = 2;
LAB_080bcf44:
            *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
          }
        }
      }
    }
    break;
  case 2:
    goto switchD_080bcc3c_caseD_2;
  case 3:
    goto switchD_080bcc3c_caseD_3;
  case 4:
    if ((DAT_02023658 & 4) == 0) {
      iVar4 = 0;
      if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
        iVar4 = 1;
      }
      sub_080BC0AC(*(undefined4 *)(param_1 + 0xe),iVar4 * -8 + 9,*(undefined *)((int)param_1 + 5));
    }
    uVar2 = param_1[10];
    param_1[10] = uVar2 + 1;
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x12) != 0) {
        if ((DAT_02004ca8 & 0x40) == 0) {
          if ((DAT_02004ca8 & 0x80) != 0) {
            *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) & 0xf | 0x20;
            sub_08001EAC(0x29);
          }
        }
        else {
          *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) & 0xf | 0x10;
          sub_08001EAC(0x29);
        }
        iVar4 = *(byte *)((int)param_1 + 5) + 4;
        if ((*(byte *)((int)param_1 + 7) & 0xf0) == 0x20) {
          iVar4 = *(byte *)((int)param_1 + 5) + 6;
        }
        sub_080BC0AC(&UNK_082b932a,(uint)*(byte *)(param_1 + 3) * -8 + 9,iVar4);
        if ((DAT_02004ca8 & 1) != 0) {
          *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
          sub_08001EAC(0x2a);
        }
        break;
      }
      if ((uVar2 + 1 & 0x10) == 0) {
        sub_080BC174(&DAT_080d1d90,(uint)*(byte *)(param_1 + 3) * -8 + 0x1c,
                     *(byte *)((int)param_1 + 5) + 7);
      }
      uVar2 = DAT_02023658;
      if ((DAT_02004ca8 & 3) == 0) goto LAB_080bcf3e;
    }
    else if ((int)(short)param_1[10] <= *(int *)(param_1 + 4)) {
      uVar2 = *param_1;
LAB_080bcf3e:
      if ((uVar2 & 2) == 0) break;
    }
    goto LAB_080bcf44;
  case 5:
    if ((*param_1 & 2) == 0) {
      if (((*param_1 & 1) != 0) && (*(int *)(param_1 + 0x10) == 0)) {
        if ((DAT_02023658 & 4) == 0) {
          iVar4 = 0;
          if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
            iVar4 = 1;
          }
          sub_080BC0AC(*(undefined4 *)(param_1 + 0xe),iVar4 * -8 + 9,
                       *(undefined *)((int)param_1 + 5));
        }
        param_1[1] = 3;
        break;
      }
      if ((*(int *)(param_1 + 0x12) != 0) && ((*(byte *)((int)param_1 + 7) & 0xf0) == 0x20)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x12);
      }
      if ((*(int *)(param_1 + 0x10) != 0) && (iVar4 = sub_080BCA20(param_1), iVar4 == 0)) {
        *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_1 + 0x10);
        sub_080BC934(param_1);
        param_1[1] = 1;
        *(undefined *)((int)param_1 + 0xd) = 2;
        break;
      }
    }
    param_1[1] = 4;
    param_1[8] = 0x40;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 6:
    uVar2 = param_1[8];
    param_1[8] = uVar2 - 4;
    if ((ushort)(uVar2 - 4) == 0) {
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
    }
    if ((DAT_02023658 & 4) == 0) {
      iVar4 = 0;
      if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
        iVar4 = 1;
      }
      sub_080BC0AC(*(undefined4 *)(param_1 + 0xe),iVar4 * -8 + 9,*(undefined *)((int)param_1 + 5));
    }
    if (*(char *)(param_1 + 3) == '\0') {
      uVar2 = (short)((short)(&DAT_080c8e24)[(short)param_1[8]] * 5 >> 3) + 0x48U & 0xff;
      uVar5 = 0x900;
    }
    else {
      uVar2 = (0xa7 - (short)((short)(&DAT_080c8e24)[(short)param_1[8]] * 5 >> 3)) * 0x100;
      uVar5 = 0xe7;
    }
    DAT_02004f84 = uVar2 | uVar5;
    break;
  case 7:
    if ((*(int *)(param_1 + 0x10) == 0) || ((*param_1 & 2) != 0)) {
      DAT_02004f80 = DAT_02004f80 & 0xdfff;
      DAT_02004f8e = DAT_02004f8e | 1;
      DAT_02004f8d = DAT_02004f8d | 1;
      *(undefined4 *)(param_1 + 6) = 0;
    }
    else {
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0x10);
      sub_080BC934(param_1);
      sub_080BCA50(param_1,*(undefined *)(param_1 + 2));
      *(undefined *)((int)param_1 + 0xd) = 1;
    }
  }
LAB_080bd0ce:
  sub_080BCAC4(param_1);
  return in_lr;
}

