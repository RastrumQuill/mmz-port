// sub_080FCCE8 at 0x080FCCE8 (thumb)

undefined4 sub_080FCCE8(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    cVar2 = *(char *)(param_1 + 0xb8);
    if (cVar2 == '\0') {
      uVar1 = 1;
    }
    else if (cVar2 == '\x01') {
      uVar1 = 0x11;
    }
    else if (cVar2 == '\x02') {
      uVar1 = 0x21;
    }
    else {
      if (cVar2 != '\x03') goto LAB_080fce36;
      uVar1 = 0x31;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
LAB_080fce36:
    sub_08005784(param_1 + 0x74,&DAT_08867a7c);
    return in_lr;
  case 1:
    break;
  case 2:
    goto switchD_080fccfe_caseD_2;
  case 3:
    goto switchD_080fccfe_caseD_3;
  case 4:
    goto switchD_080fccfe_caseD_4;
  case 5:
  case 0x14:
  case 0x24:
  case 0x35:
    goto switchD_080fccfe_caseD_5;
  default:
    goto switchD_080fccfe_caseD_6;
  case 0x11:
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x1200;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x12:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x2400;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080fccfe_caseD_13:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x3600;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    uVar1 = 0x30;
    goto LAB_080fd16a;
  case 0x13:
    goto switchD_080fccfe_caseD_13;
  case 0x21:
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x2400;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x22:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x1200;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x3600;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080fccfe_caseD_23:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58);
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    uVar1 = 0x30;
    goto LAB_080fd16a;
  case 0x23:
    goto switchD_080fccfe_caseD_23;
  case 0x31:
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x3600;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x32:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x2400;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080fccfe_caseD_33:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x1200;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080fccfe_caseD_34:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58);
    goto LAB_080fd156;
  case 0x33:
    goto switchD_080fccfe_caseD_33;
  case 0x34:
    goto switchD_080fccfe_caseD_34;
  case 0x40:
    sub_080127C8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    cVar2 = *(char *)(param_1 + 0xb4);
    if (cVar2 < '\x01') {
      if ((cVar2 == '\0') &&
         (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x6100)) {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        puVar3 = &LAB_08867aa4;
        goto LAB_080fd212;
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar3 = &LAB_08867aa4 + *(char *)(param_1 + 0xb4) * 8;
LAB_080fd212:
      *(undefined **)(param_1 + 0x30) = puVar3;
      *(undefined2 *)(param_1 + 0x26) = 0x201;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) =
         *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) &
         ~(1 << (*(byte *)(param_1 + 0x11) & 0x1f));
    if ((DAT_0202cac0 & 0xf) != 0) {
      *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4) =
           *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4) |
           1 << (*(byte *)(param_1 + 0x11) & 0x1f);
      *(undefined *)(param_1 + 0x10) = 4;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x41:
    if (*(char *)(param_1 + 0x12) != '\0') {
      iVar5 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
      if (iVar5 < 0) {
        iVar5 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
      }
      if (iVar5 < 0x2001) {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(short *)(param_1 + 0xb6) = -0x60f9;
      sub_0801CF00(param_1,0x9f07);
      pcVar4 = (char *)(param_1 + 0xb4);
      *pcVar4 = '\0';
      if (*(short *)(param_1 + 0xb6) == -0x60f9) {
        sub_08005784(param_1 + 0x74,&DAT_08867a7c);
      }
      else {
        sub_08005784(param_1 + 0x74,&DAT_08867a04 + *pcVar4 * 0x18);
      }
      if (*pcVar4 < '\x01') {
        if ((*pcVar4 == '\0') &&
           (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x6100)) {
          *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
          puVar3 = &LAB_08867aa4;
          goto LAB_080fd376;
        }
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      }
      else {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        puVar3 = &LAB_08867aa4 + *pcVar4 * 8;
LAB_080fd376:
        *(undefined **)(param_1 + 0x30) = puVar3;
        *(undefined2 *)(param_1 + 0x26) = 0x201;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x10) = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_0801281C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    goto switchD_080fccfe_caseD_6;
  }
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
  sub_08002B10(0x3d);
  *(undefined *)(param_1 + 0x12) = 8;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080fccfe_caseD_2:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x1200;
    sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
    sub_08002B10(0x3d);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080fccfe_caseD_3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      local_1c = *(undefined4 *)(param_1 + 0x54);
      local_18 = *(int *)(param_1 + 0x58) + -0x2400;
      sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
      sub_08002B10(0x3d);
      *(undefined *)(param_1 + 0x12) = 8;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080fccfe_caseD_4:
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        local_1c = *(undefined4 *)(param_1 + 0x54);
        local_18 = *(int *)(param_1 + 0x58) + -0x3600;
LAB_080fd156:
        sub_080E38B8(&local_1c,&DAT_08867b58,0,0);
        sub_08002B10(0x3d);
        uVar1 = 0x28;
LAB_080fd16a:
        *(undefined *)(param_1 + 0x12) = uVar1;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080fccfe_caseD_5:
        if (*(char *)(param_1 + 0x12) == ' ') {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
          *(undefined2 *)(param_1 + 0xb6) = 0x9f01;
          sub_0801CF00(param_1);
          *(undefined *)(param_1 + 0xb4) = 0xff;
        }
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 == '\0') {
          *(undefined *)(param_1 + 0xd) = 0x40;
        }
      }
    }
  }
switchD_080fccfe_caseD_6:
  return in_lr;
}

