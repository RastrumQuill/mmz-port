// sub_0806BA40 at 0x0806BA40 (thumb)

undefined4 sub_0806BA40(int param_1)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
    *(undefined *)(param_1 + 0x4c) = 0;
    pbVar3 = (byte *)(param_1 + 0x4a);
    *pbVar3 = *pbVar3 & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar3 = *pbVar3 & 0xdf;
    *(undefined *)(param_1 + 0x24) = 0;
    sub_08017700(param_1,0x901);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    DAT_0202f608 = DAT_0202f608 * 0x343fd + 0x269ec3 & 0x7fffffff;
    *(undefined *)(param_1 + 0x12) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x02';
    break;
  case 1:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(*(int *)(param_1 + 0x28) + 0x58) - (*(int *)(param_1 + 0x58) + 0x3800)) * 0x18
         >> 8);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_0806ba54_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x380 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x380;
    }
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar2 + 0x1800);
    if (iVar2 != 0) {
      sub_0801ACF8(4,param_1 + 0x54);
      sub_0800471C(0x91);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(undefined *)(param_1 + 0x12) = 1;
        *(undefined4 *)(param_1 + 0x60) = 0xffffff18;
      }
      else {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    sub_080177F4(param_1);
    goto switchD_0806ba54_caseD_8;
  case 3:
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_0806ba54_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 5:
    DAT_0202f608 = DAT_0202f608 * 0x343fd + 0x269ec3 & 0x7fffffff;
    *(undefined *)(param_1 + 0x12) = 5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_0806ba54_caseD_8;
    DAT_0202f608 = DAT_0202f608 * 0x343fd + 0x269ec3 & 0x7fffffff;
    *(undefined *)(param_1 + 0x12) = 0x28;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 7:
    sub_080177F4(param_1);
    piVar4 = (int *)(param_1 + 0xb4);
    iVar5 = *(int *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x54);
    if (*piVar4 + *(int *)(iVar5 + 0x54) < iVar2) {
      *(int *)(param_1 + 0x54) = iVar2 + -0x380;
      iVar5 = *piVar4 + *(int *)(iVar5 + 0x54);
      if (iVar2 + -0x380 < iVar5) {
LAB_0806bc56:
        *(int *)(param_1 + 0x54) = iVar5;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      *(int *)(param_1 + 0x54) = iVar2 + 0x380;
      iVar5 = *piVar4 + *(int *)(iVar5 + 0x54);
      if (iVar5 < iVar2 + 0x380) goto LAB_0806bc56;
    }
    sub_080177F4(param_1);
    if (((*(char *)(param_1 + 0xe) == '\b') || (*(char *)(param_1 + 0x12) == '\0')) ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_0806ba54_caseD_8;
    cVar1 = '\x04';
    break;
  default:
    goto switchD_0806ba54_caseD_8;
  }
  *(char *)(param_1 + 0xe) = cVar1;
switchD_0806ba54_caseD_8:
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xd4) & 8) != 0) {
    iVar2 = *(int *)(param_1 + 0xb4) + *(int *)(*(int *)(param_1 + 0x28) + 0x54);
    *(int *)(param_1 + 0x54) = iVar2;
    iVar2 = sub_0800A104(iVar2,*(int *)(param_1 + 0x58) + -0x800);
    *(int *)(param_1 + 0x58) = iVar2 + -0x1800;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

