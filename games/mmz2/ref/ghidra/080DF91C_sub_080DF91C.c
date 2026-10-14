// sub_080DF91C at 0x080DF91C (thumb)

undefined4 sub_080DF91C(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)((int)param_1 + 0xd)) {
  case 0:
    sub_080DF174(param_1,*(undefined *)(param_1 + 2));
    DAT_02000f90 = DAT_02000f90 | 0x100;
    DAT_02000f9c = 0;
    DAT_03002ac0 = 0;
    DAT_02000fe0 = DAT_02000fe0 | 0x2000;
    DAT_02000fec._0_1_ = 1;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 1;
    DAT_02000fec._1_1_ = DAT_02000fec._1_1_ | 1;
    DAT_02000fe8._0_2_ = 0x859b;
    param_1[8] = 0;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 1:
    sub_080DF3E4(param_1,param_1[8]);
    uVar1 = param_1[8];
    param_1[8] = uVar1 + 4;
    if (0x3f < (short)(uVar1 + 4)) {
      DAT_02000fe4._0_2_ = 0x10e0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080df930_caseD_2:
      param_1[1] = 1;
      uVar1 = sub_080DE4A0(*(undefined4 *)(param_1 + 0xe));
      param_1[8] = uVar1;
      param_1[9] = 1;
      param_1[10] = 4;
      *(undefined *)(param_1 + 7) = 0;
      *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
switchD_080df930_caseD_3:
      sub_080DF3E4(param_1,0x40);
      if (((*(int *)(param_1 + 4) == 0) || ((*param_1 & 1) != 0)) && ((DAT_02000d14 & 3) != 0)) {
        *(undefined *)(param_1 + 7) = 1;
      }
      if ((*(char *)(param_1 + 7) != '\0') || ((DAT_0202f658 & 2) != 0)) {
        param_1[10] = 0;
      }
      sub_080DE564(*(undefined4 *)(param_1 + 0xe),1,0x11,param_1[9]);
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
LAB_080dfae2:
          *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
        }
      }
    }
    break;
  case 2:
    goto switchD_080df930_caseD_2;
  case 3:
    goto switchD_080df930_caseD_3;
  case 4:
    sub_080DF3E4(param_1,0x40);
    sub_080DE510(*(undefined4 *)(param_1 + 0xe),1,0x11);
    uVar1 = param_1[10];
    param_1[10] = uVar1 + 1;
    if (*(int *)(param_1 + 4) == 0) {
      if ((uVar1 + 1 & 0x10) == 0) {
        sub_080DE6C8(&DAT_080ff8ec,0x1c,0x12);
      }
      uVar1 = DAT_0202f658;
      if ((DAT_02000d14 & 3) == 0) goto LAB_080dfada;
    }
    else if ((int)(short)param_1[10] <= *(int *)(param_1 + 4)) {
      uVar1 = *param_1;
LAB_080dfada:
      if ((uVar1 & 2) == 0) {
        return in_lr;
      }
    }
    goto LAB_080dfae2;
  case 5:
    sub_080DF3E4(param_1,0x40);
    if ((*param_1 & 2) == 0) {
      if ((*param_1 & 1) != 0) {
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          sub_080DE510(*(undefined4 *)(param_1 + 0xe),1,0x11);
          param_1[1] = 3;
          return in_lr;
        }
LAB_080dfb2e:
        *(int *)(param_1 + 0xe) = iVar2;
        sub_080DF074(param_1);
        param_1[1] = 1;
        *(undefined *)((int)param_1 + 0xd) = 2;
        return in_lr;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 != 0) goto LAB_080dfb2e;
    }
    param_1[1] = 4;
    param_1[8] = 0x40;
    *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + '\x01';
  case 6:
    uVar1 = param_1[8];
    param_1[8] = (ushort)(uVar1 - 4);
    if ((int)((uVar1 - 4) * 0x10000) >> 0x10 == 0) {
      DAT_02000fe0 = DAT_02000fe0 & 0xdfff;
      DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 1;
      DAT_02000fec._1_1_ = DAT_02000fec._1_1_ | 1;
      *(undefined4 *)(param_1 + 6) = 0;
    }
    else {
      sub_080DF3E4(param_1,param_1[8]);
    }
    break;
  default:
    break;
  }
  return in_lr;
}

