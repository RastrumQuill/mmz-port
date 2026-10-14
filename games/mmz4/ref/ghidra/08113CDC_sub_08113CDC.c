// sub_08113CDC at 0x08113CDC (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08113CDC(int param_1)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 in_lr;
  
  uVar1 = DAT_0202ea78;
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    DAT_03002ac0 = 0;
    DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x100;
    _DAT_02000a0c = 0;
    sub_0810CE60();
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    sVar3 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar3;
    DAT_03002ec0 = (undefined)sVar3;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    sub_0810D214(&DAT_0886de04,9,7);
    if (0x1f < *(short *)(param_1 + 4)) {
      uVar4 = 0;
LAB_081140b6:
      *(undefined2 *)(param_1 + 8) = uVar4;
LAB_081140b8:
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    }
    break;
  case 2:
    if ((DAT_02000766 & 0xc0) != 0) {
      sub_08002B10(1);
      *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) ^ 1;
    }
    sub_0810D214(&DAT_0886de04,9,7);
    sub_0810D214(&DAT_0886a17c,9,*(short *)(param_1 + 8) * 2 + 9);
    if ((DAT_02000764 & 1) == 0) {
      return in_lr;
    }
    sub_08002B10(2);
    if (*(short *)(param_1 + 8) != 0) {
      *(undefined *)(param_1 + 2) = 7;
      return in_lr;
    }
    goto LAB_081140b8;
  case 3:
    *(uint *)(param_1 + 0xdd0) = DAT_0202ea78;
    if (uVar1 != 0xffffffff) {
      sub_08002A98(uVar1 & 0xffff);
      DAT_0202ea78 = 0xffffffff;
    }
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 4:
    sub_0810D214(&DAT_0886de04,9,7);
    sub_0810D214(&DAT_0886a17c,9,9);
    sVar3 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar3;
    DAT_03002ec0 = (undefined)sVar3;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar3 == 0) {
      sub_081123F8(param_1);
      *(undefined *)(param_1 + 0xdcd) = 0;
      *(undefined4 *)(param_1 + 0xdd4) = 0x50c00;
      sub_08112080(param_1,5);
    }
    break;
  case 5:
    sub_081124AC(param_1);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 6:
    if ((*(char *)(param_1 + 0xdd8) == '\0') && (DAT_02000aa8 != '\0')) {
      *(undefined *)(param_1 + 2) = 8;
    }
    else {
LAB_08113f74:
      sub_08001354();
      sub_08112080(param_1,0x300);
    }
    break;
  case 7:
    sub_0810D214(&DAT_0886de04,9,7);
    sub_0810D214(&DAT_0886a17c,9,0xb);
    sVar3 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar3;
    DAT_03002ec0 = (undefined)sVar3;
    if (sVar3 != 0) {
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
      return in_lr;
    }
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (DAT_02000aa8 != '\0') {
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      goto switchD_08113cf0_caseD_8;
    }
    goto LAB_08113f74;
  case 8:
switchD_08113cf0_caseD_8:
    sub_0810D214(&DAT_0886de60,5,7);
    sub_0810D214(&DAT_0886de1a,6,10);
    sVar3 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar3;
    DAT_03002ec0 = (undefined)sVar3;
    if (sVar3 < 0x20) {
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
      return in_lr;
    }
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    DAT_0202f61c = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 9:
    sub_080068CC();
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_08113cf0_caseD_a:
    sub_0810D214(&DAT_0886de60,5,7);
    sub_0810D214(&DAT_0886a17c +
                 (ushort)(&DAT_08869ac0)
                         [((int)((uint)*(ushort *)(param_1 + 4) << 0x10) >> 0x14 & 3U) + 0x33f],6,10
                );
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    cVar2 = (char)DAT_020007ac;
    if (DAT_02000790 == '\x02') {
      cVar2 = '\0';
    }
    if (cVar2 != '\x01') {
      if (cVar2 != -1) {
        return in_lr;
      }
      sVar3 = *(short *)(param_1 + 8) + 1;
      *(short *)(param_1 + 8) = sVar3;
      if (sVar3 < 4) {
        *(undefined *)(param_1 + 2) = 9;
        return in_lr;
      }
      *(undefined2 *)(param_1 + 6) = 0x20;
      uVar4 = 1;
      goto LAB_081140b6;
    }
    DAT_02000aa8 = '\0';
    *(undefined2 *)(param_1 + 6) = 0x20;
    *(undefined2 *)(param_1 + 8) = 0;
    goto LAB_081140b8;
  case 10:
    goto switchD_08113cf0_caseD_a;
  case 0xb:
    sub_0810D214(&DAT_0886de60,5,7);
    sub_0810D214(&DAT_0886a17c +
                 (ushort)(&DAT_08869ac0)
                         [((int)((uint)*(ushort *)(param_1 + 4) << 0x10) >> 0x14 & 3U) + 0x33f],6,10
                );
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    sVar3 = *(short *)(param_1 + 6) + -1;
    *(short *)(param_1 + 6) = sVar3;
    DAT_03002ec0 = (undefined)sVar3;
    if (sVar3 != 0) {
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
      return in_lr;
    }
    DAT_0202f61c = 1;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 0xc:
    if (*(short *)(param_1 + 8) == 0) {
      sub_0810D214(&DAT_0886de76,8,8);
    }
    else {
      sub_0810D214(&DAT_0886de81,8,8);
    }
    sVar3 = *(short *)(param_1 + 6) + 1;
    *(short *)(param_1 + 6) = sVar3;
    DAT_03002ec0 = (undefined)sVar3;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (0x1f < sVar3) {
      *(undefined2 *)(param_1 + 4) = 0x3c;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_08113cf0_caseD_d:
      if (*(short *)(param_1 + 8) == 0) {
        sub_0810D214(&DAT_0886de76,8,8);
      }
      else {
        sub_0810D214(&DAT_0886de81,8,8);
      }
      sVar3 = *(short *)(param_1 + 4) + -1;
      *(short *)(param_1 + 4) = sVar3;
      if (sVar3 == 0) {
        *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_08113cf0_caseD_e:
        if (*(short *)(param_1 + 8) == 0) {
          sub_0810D214(&DAT_0886de76,8,8);
        }
        else {
          sub_0810D214(&DAT_0886de81,8,8);
        }
        sVar3 = *(short *)(param_1 + 6) + -1;
        *(short *)(param_1 + 6) = sVar3;
        DAT_03002ec0 = (undefined)sVar3;
        DAT_03002ec1 = DAT_03002ec0;
        DAT_03002ec2 = DAT_03002ec0;
        if (sVar3 == 0) {
          sub_08001354();
          sub_08112080(param_1,0x300);
        }
      }
    }
    break;
  case 0xd:
    goto switchD_08113cf0_caseD_d;
  case 0xe:
    goto switchD_08113cf0_caseD_e;
  default:
    break;
  }
  return in_lr;
}

