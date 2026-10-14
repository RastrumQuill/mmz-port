// sub_0802C79C at 0x0802C79C (thumb)

undefined4 sub_0802C79C(int param_1)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082aced8);
    iVar8 = *(int *)(DAT_0202286c + 0x4c);
    iVar7 = *(int *)(param_1 + 0x4c);
    bVar2 = iVar7 < iVar8;
    *(bool *)(param_1 + 0x44) = bVar2;
    if (iVar7 < iVar8) {
      bVar4 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar4;
    if (iVar8 <= iVar7) {
      if ((*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x4c) < 0x3000) ||
         (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xc0) < 0x3000)) {
        *(bool *)(param_1 + 0xd) = bVar2;
        *(bool *)(param_1 + 0xe) = bVar2;
        return in_lr;
      }
LAB_0802c868:
      sub_08029778(param_1,8);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto switchD_0802c7b0_caseD_1;
    }
    if ((0x2fff < *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xc0)) &&
       (0x2fff < *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x4c))) goto LAB_0802c868;
    goto LAB_0802ca20;
  case 1:
switchD_0802c7b0_caseD_1:
    sub_0802B670(param_1);
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar5 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0802ca24;
  case 2:
    break;
  case 3:
    goto switchD_0802c7b0_caseD_3;
  case 4:
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xfffffffb;
    sub_08029778(param_1,0xf);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_0802B670(param_1);
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar5 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0802ca24:
    *(char *)(param_1 + 0xe) = cVar5;
    return in_lr;
  case 6:
    sub_08001EE8((int)*(short *)(param_1 + 0xd8));
    *(short *)(param_1 + 0xd8) = -1;
    sub_08029778(param_1,9);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_0802B670(param_1);
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
LAB_0802ca20:
    cVar5 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_0802ca24;
  default:
    goto switchD_0802c7b0_caseD_8;
  }
  sub_08029778(param_1,0xe);
  *(undefined2 *)(param_1 + 0xd0) = 0xf0;
  uVar6 = sub_08001EAC(0x23);
  *(undefined2 *)(param_1 + 0xd8) = uVar6;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0802c7b0_caseD_3:
  sub_0802B670(param_1);
  psVar9 = (short *)(param_1 + 0xd0);
  if (*psVar9 == 0xde) {
    sub_080596B8(param_1,3,4);
    sub_080596B8(param_1,7,4);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 4;
    sub_0802D4C4(param_1);
  }
  bVar4 = *(byte *)(param_1 + 10) >> 4;
  sub_080297C0(param_1);
  sVar1 = *psVar9;
  *psVar9 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar3 = *(byte *)(param_1 + 10) >> 4;
  iVar7 = *(int *)(param_1 + 0x4c);
  if (*(int *)(DAT_0202286c + 0x4c) - iVar7 < 1) {
    if ((bVar3 & 1) == 0) goto LAB_0802c934;
  }
  else if ((bVar3 & 1) == 1) {
LAB_0802c934:
    iVar8 = *(int *)(DAT_0202286c + 0x4c) - iVar7;
    if (iVar8 < 0) {
      iVar8 = iVar7 - *(int *)(DAT_0202286c + 0x4c);
    }
    if (0xfff < iVar8) {
      return in_lr;
    }
    if (((bVar4 & 1) != 0) || (-1 < *(int *)(DAT_0202286c + 0x4c) - iVar7)) {
      if ((bVar4 & 1) != 1) {
        return in_lr;
      }
      if (*(int *)(DAT_0202286c + 0x4c) - iVar7 < 1) {
        return in_lr;
      }
    }
    if (*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50) < -0x47ff) {
      return in_lr;
    }
  }
  sub_08001EE8((int)*(short *)(param_1 + 0xd8));
  *(short *)(param_1 + 0xd8) = -1;
  *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xfffffffb;
  *(undefined *)(param_1 + 0xd) = 0xb;
  *(undefined *)(param_1 + 0xe) = 0;
switchD_0802c7b0_caseD_8:
  return in_lr;
}

