// sub_0806B784 at 0x0806B784 (thumb)

undefined4 sub_0806B784(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
    *(undefined *)(param_1 + 0x4c) = 0;
    pbVar4 = (byte *)(param_1 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar4 = *pbVar4 & 0xdf;
    *(undefined *)(param_1 + 0x24) = 0;
    sub_08017700(param_1,0x900);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    DAT_0202f608 = DAT_0202f608 * 0x343fd + 0x269ec3 & 0x7fffffff;
    *(undefined *)(param_1 + 0x12) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x02';
    break;
  case 1:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(*(int *)(param_1 + 0x28) + 0x54) - (*(int *)(param_1 + 0x54) + 0x1300)) * 0x18
         >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(*(int *)(param_1 + 0x28) + 0x58) - (*(int *)(param_1 + 0x58) + 0x3a00)) * 0x18
         >> 8);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_0806b798_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    iVar3 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x380 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x380;
    }
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x1800);
    if (iVar3 != 0) {
      sub_0801ACF8(4,param_1 + 0x54);
      sub_0800471C(0x91);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(undefined *)(param_1 + 0x12) = 1;
        *(undefined4 *)(param_1 + 0x60) = 0xffffff18;
      }
      else {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    sub_080177F4(param_1);
    goto switchD_0806b798_caseD_8;
  case 3:
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_0806b798_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 5:
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    cVar1 = sub_080FE4D8(uVar2 * 2 >> 0x11,5);
    *(char *)(param_1 + 0x12) = cVar1 + '\x05';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_0806b798_caseD_8;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    cVar1 = sub_080FE4D8(uVar2 * 2 >> 0x11,10);
    *(char *)(param_1 + 0x12) = cVar1 + '(';
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 7:
    sub_080177F4(param_1);
    piVar5 = (int *)(param_1 + 0xb4);
    iVar6 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x54);
    if (*piVar5 + *(int *)(iVar6 + 0x54) < iVar3) {
      *(int *)(param_1 + 0x54) = iVar3 + -0x300;
      iVar6 = *piVar5 + *(int *)(iVar6 + 0x54);
      if (iVar3 + -0x300 < iVar6) {
LAB_0806b9d6:
        *(int *)(param_1 + 0x54) = iVar6;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      *(int *)(param_1 + 0x54) = iVar3 + 0x300;
      iVar6 = *piVar5 + *(int *)(iVar6 + 0x54);
      if (iVar6 < iVar3 + 0x300) goto LAB_0806b9d6;
    }
    sub_080177F4(param_1);
    if (((*(char *)(param_1 + 0xe) == '\b') || (*(char *)(param_1 + 0x12) == '\0')) ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_0806b798_caseD_8;
    cVar1 = '\x04';
    break;
  default:
    goto switchD_0806b798_caseD_8;
  }
  *(char *)(param_1 + 0xe) = cVar1;
switchD_0806b798_caseD_8:
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xd4) & 8) != 0) {
    iVar3 = *(int *)(param_1 + 0xb4) + *(int *)(*(int *)(param_1 + 0x28) + 0x54);
    *(int *)(param_1 + 0x54) = iVar3;
    iVar3 = sub_0800A104(iVar3,*(int *)(param_1 + 0x58) + -0x800);
    *(int *)(param_1 + 0x58) = iVar3 + -0x1800;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

