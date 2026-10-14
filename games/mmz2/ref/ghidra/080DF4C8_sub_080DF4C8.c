// sub_080DF4C8 at 0x080DF4C8 (thumb)

undefined4 sub_080DF4C8(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)((int)param_1 + 0xd)) {
  case 0:
    sub_080DF174(param_1,*(undefined *)(param_1 + 2));
    DAT_02000f90 = DAT_02000f90 | 0x100;
    DAT_02000f9c = 0;
    DAT_03002ac0 = 0;
    DAT_02000fe0 = DAT_02000fe0 | 0x2000;
    DAT_02000fec._0_1_ = 1;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ & 0xfe;
    DAT_02000fec._1_1_ = DAT_02000fec._1_1_ & 0xfe;
    param_1[8] = 0;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 1:
    param_1[1] = 1;
    DAT_02000fe8._0_2_ =
         (*(byte *)((int)param_1 + 5) + 6) * 8 + 1 & 0xff |
         (ushort)*(byte *)((int)param_1 + 5) * 0x800 - 0x100;
    sub_080DF278(param_1,param_1[8]);
    uVar1 = param_1[8];
    param_1[8] = uVar1 + 4;
    if (0x3f < (short)(uVar1 + 4)) {
      if (*(char *)(param_1 + 3) == '\0') {
        DAT_02000fe4._0_2_ = 0x9e8;
      }
      else {
        DAT_02000fe4._0_2_ = 0x7e7;
      }
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080df4dc_caseD_2:
      uVar1 = sub_080DE4A0(*(undefined4 *)(param_1 + 0xe));
      param_1[8] = uVar1;
      param_1[9] = 1;
      param_1[10] = 4;
      *(undefined *)(param_1 + 7) = 0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080df4dc_caseD_3:
      sub_080DF278(param_1,0x40);
      if (((*(int *)(param_1 + 4) == 0) || ((*param_1 & 1) != 0)) && ((DAT_02000d14 & 3) != 0)) {
        *(undefined *)(param_1 + 7) = 1;
      }
      if ((*(char *)(param_1 + 7) != '\0') || ((DAT_0202f658 & 2) != 0)) {
        param_1[10] = 0;
      }
      iVar2 = 0;
      if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
        iVar2 = 1;
      }
      sub_080DE564(*(undefined4 *)(param_1 + 0xe),iVar2 * -6 + 8,*(undefined *)((int)param_1 + 5),
                   param_1[9]);
      sub_080DE69C(*(undefined4 *)(param_1 + 0xe),(short)param_1[9] + -1);
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
LAB_080df7b8:
          *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
        }
      }
    }
    break;
  case 2:
    goto switchD_080df4dc_caseD_2;
  case 3:
    goto switchD_080df4dc_caseD_3;
  case 4:
    sub_080DF278(param_1,0x40);
    if ((DAT_0202f658 & 4) == 0) {
      iVar2 = 0;
      if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
        iVar2 = 1;
      }
      sub_080DE510(*(undefined4 *)(param_1 + 0xe),iVar2 * -6 + 8,*(undefined *)((int)param_1 + 5));
    }
    uVar1 = param_1[10];
    param_1[10] = uVar1 + 1;
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x12) != 0) {
        if ((DAT_02000d14 & 0x40) == 0) {
          if ((DAT_02000d14 & 0x80) != 0) {
            *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) & 0xf | 0x20;
            sub_080032EC(1);
          }
        }
        else {
          *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) & 0xf | 0x10;
          sub_080032EC(1);
        }
        iVar2 = 0;
        if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
          iVar2 = 1;
        }
        iVar3 = *(byte *)((int)param_1 + 5) + 2;
        if ((*(byte *)((int)param_1 + 7) & 0xf0) == 0x20) {
          iVar3 = *(byte *)((int)param_1 + 5) + 4;
        }
        sub_080DE510(&DAT_0834c9e4,iVar2 * -6 + 8,iVar3);
        if ((DAT_02000d14 & 1) != 0) {
          *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
          sub_080032EC(2);
        }
        break;
      }
      if ((uVar1 + 1 & 0x10) == 0) {
        sub_080DE6C8(&DAT_080ff8ec,(uint)*(byte *)(param_1 + 3) * -6 + 0x1b,
                     *(byte *)((int)param_1 + 5) + 5);
      }
      uVar1 = DAT_0202f658;
      if ((DAT_02000d14 & 3) == 0) goto LAB_080df7ae;
    }
    else if ((int)(short)param_1[10] <= *(int *)(param_1 + 4)) {
      uVar1 = *param_1;
LAB_080df7ae:
      if ((uVar1 & 2) == 0) break;
    }
    goto LAB_080df7b8;
  case 5:
    if ((*param_1 & 2) == 0) {
      if (((*param_1 & 1) != 0) && (*(int *)(param_1 + 0x10) == 0)) {
        sub_080DF278(param_1,0x40);
        if ((DAT_0202f658 & 4) == 0) {
          iVar2 = 0;
          if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
            iVar2 = 1;
          }
          sub_080DE510(*(undefined4 *)(param_1 + 0xe),iVar2 * -6 + 8,
                       *(undefined *)((int)param_1 + 5));
        }
        param_1[1] = 3;
        break;
      }
      if ((*(int *)(param_1 + 0x12) != 0) && ((*(byte *)((int)param_1 + 7) & 0xf0) == 0x20)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x12);
      }
      if ((*(int *)(param_1 + 0x10) != 0) && (iVar2 = sub_080DF144(param_1), iVar2 == 0)) {
        sub_080DF278(param_1,0x40);
        *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_1 + 0x10);
        sub_080DF074(param_1);
        param_1[1] = 1;
        *(undefined *)((int)param_1 + 0xd) = 2;
        break;
      }
    }
    param_1[1] = 4;
    param_1[8] = 0x40;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 6:
    uVar1 = param_1[8];
    param_1[8] = uVar1 - 4;
    if ((ushort)(uVar1 - 4) == 0) {
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
    }
    if ((DAT_0202f658 & 4) == 0) {
      iVar2 = 0;
      if ((*(char *)(param_1 + 3) != '\0') || (*(char *)(param_1 + 2) == '\x01')) {
        iVar2 = 1;
      }
      sub_080DE510(*(undefined4 *)(param_1 + 0xe),iVar2 * -6 + 8,*(undefined *)((int)param_1 + 5));
    }
    sub_080DF278(param_1,param_1[8]);
    break;
  case 7:
    if ((*(int *)(param_1 + 0x10) == 0) || ((*param_1 & 2) != 0)) {
      DAT_02000fe0 = DAT_02000fe0 & 0xdfff;
      DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 1;
      DAT_02000fec._1_1_ = DAT_02000fec._1_1_ | 1;
      *(undefined4 *)(param_1 + 6) = 0;
    }
    else {
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0x10);
      sub_080DF074(param_1);
      sub_080DF174(param_1,*(undefined *)(param_1 + 2));
      *(undefined *)((int)param_1 + 0xd) = 1;
    }
  }
  sub_080DF1EC(param_1);
  return in_lr;
}

