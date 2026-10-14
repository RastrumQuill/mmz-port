// sub_08064068 at 0x08064068 (thumb)

undefined4 sub_08064068(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xad16);
    iVar8 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar8 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar6 = 0x100;
    }
    else {
      uVar6 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar5 = sub_08008CFC();
    if (sVar5 == 0) goto switchD_0806413a_caseD_10;
    uVar6 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    break;
  case 1:
    sub_080127E4(param_1,0xad18);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_0806413a_caseD_10;
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 3:
    sub_080128D4(param_1);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_0806413a_caseD_10;
    break;
  case 4:
    sub_080127E4(param_1,0xad19);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080128D4(param_1);
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 2;
joined_r0x08064246:
    if (bVar2 == 0) goto switchD_0806413a_caseD_10;
    break;
  case 6:
    sub_080127E4(param_1,0xad1a);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 7:
    sub_080128D4(param_1);
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80;
    goto joined_r0x08064246;
  case 8:
    sub_080127E4(param_1,0xad1b);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 9:
    sub_080128D4(param_1);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_0806413a_caseD_10;
    uVar6 = sub_080B1DCC(param_1 + 0x54,5,0);
    *(undefined4 *)(param_1 + 0x28) = uVar6;
    sub_080032EC(0xf0);
    sub_08002638(&DAT_0843391c,(DAT_0202e6c6 - 0x300) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433928,(DAT_0202e4c6 - 5) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 10:
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x1000;
    uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar7 & 0x7fffffff;
    sub_080BDAE4(&local_18,3,
                 (uint)(*(byte *)(param_1 + 0x12) >> 1) * 0x40 + (uVar7 * 2 >> 0x11 & 0x3f) & 0xff);
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xf) == '\0') goto switchD_0806413a_caseD_10;
    *(undefined *)(param_1 + 0x12) = 0x40;
    break;
  case 0xb:
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 & 1) == 0) {
      bVar4 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar4;
    *(byte *)(param_1 + 0x12) = bVar2 - 1;
    if (bVar2 != 0) goto switchD_0806413a_caseD_10;
    sub_080032EC(0xef);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    iVar8 = -*(int *)(param_1 + 0x54) + 0x2d000;
    if (iVar8 < 0) {
      iVar8 = -*(int *)(param_1 + 0x54) + 0x2d03f;
    }
    *(int *)(param_1 + 0x5c) = iVar8 >> 6;
    iVar8 = -*(int *)(param_1 + 0x58) + 0x18000;
    if (iVar8 < 0) {
      iVar8 = -*(int *)(param_1 + 0x58) + 0x1803f;
    }
    *(int *)(param_1 + 0x60) = iVar8 >> 6;
    *(undefined *)(param_1 + 0x12) = 0x40;
    break;
  case 0xc:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_0806413a_caseD_10;
    *(undefined4 *)(param_1 + 0x54) = 0x2d000;
    *(undefined4 *)(param_1 + 0x58) = 0x18000;
    break;
  case 0xd:
    *(char *)(*(int *)(param_1 + 0x28) + 0xf) = *(char *)(*(int *)(param_1 + 0x28) + 0xf) + '\x01';
    break;
  case 0xe:
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xf)) {
      *(undefined *)(param_1 + 0x12) = 0x30;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  case 0xf:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      DAT_0202ec42 = DAT_0202ec42 | 2;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  default:
    goto switchD_0806413a_caseD_10;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0806413a_caseD_10:
  iVar8 = *(int *)(param_1 + 0xc4);
  if ((*(int *)(param_1 + 0x54) < iVar8) ||
     (iVar8 = *(int *)(param_1 + 200), iVar8 < *(int *)(param_1 + 0x54))) {
    *(int *)(param_1 + 0x54) = iVar8;
  }
  return in_lr;
}

