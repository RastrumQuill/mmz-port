// sub_08047BFC at 0x08047BFC (thumb)

undefined4 sub_08047BFC(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined auStack_28 [8];
  
  sub_080C8D70(auStack_28,&DAT_080c92ac,8);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar3 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = -iVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
    *(undefined *)(param_1 + 0x12) = 8;
    iVar2 = 1;
    if (0 < iVar3) {
      iVar2 = 3;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar2 = iVar2 + 4;
    }
    *(undefined *)(param_1 + 0x1f) = auStack_28[iVar2];
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar2;
    iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x50) = iVar3;
    cVar1 = sub_080079CC(iVar2 + *(int *)(param_1 + 0x54) * 2,iVar3 + *(int *)(param_1 + 0x58) * 2);
    if (cVar1 == '\0') goto LAB_08047fc8;
    uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 2,
                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 2,4,
                 (uVar6 * 2 >> 0x11 & 1) << 4 | uVar4 * 2 >> 0x11 & 1);
    uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 2,
                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 2,4,
                 (uVar6 * 2 >> 0x11 & 1) << 4 | uVar4 * 2 >> 0x11 & 1);
    uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 2,
                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 2,4,
                 (uVar6 * 2 >> 0x11 & 1) << 4 | uVar4 * 2 >> 0x11 & 1);
    uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 2,
                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 2,4,
                 (uVar6 * 2 >> 0x11 & 1) << 4 | uVar4 * 2 >> 0x11 & 1);
    uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 2,
                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 2,4,
                 (uVar6 * 2 >> 0x11 & 1) << 4 | uVar4 * 2 >> 0x11 & 1);
    uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 2,
                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 2,4,
                 (uVar6 * 2 >> 0x11 & 1) << 4 | uVar4 * 2 >> 0x11 & 1);
    uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 2,
                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 2,4,
                 (uVar6 * 2 >> 0x11 & 1) << 4 | uVar4 * 2 >> 0x11 & 1);
    uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 2,
                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 2,4,
                 (uVar6 * 2 >> 0x11 & 1) << 4 | uVar4 * 2 >> 0x11 & 1);
    sub_08001EAC(0x83);
    sub_0801412C(4,param_1 + 0x4c);
    *(undefined *)(param_1 + 0x13) = 2;
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != -1) goto LAB_08047fc8;
    iVar2 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    iVar3 = *(int *)(param_1 + 0x4c);
    if (iVar3 - iVar2 < 0) {
      iVar2 = sub_080089EC(iVar3,*(undefined4 *)(param_1 + 0x50));
      iVar2 = iVar2 - *(int *)(param_1 + 0x4c);
    }
    else {
      iVar2 = sub_080089EC(iVar3,*(undefined4 *)(param_1 + 0x50));
      iVar2 = *(int *)(param_1 + 0x4c) - iVar2;
    }
    iVar3 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    iVar5 = *(int *)(param_1 + 0x4c);
    if (iVar5 - iVar3 < 0) {
      iVar3 = sub_08008BC0(iVar5,*(undefined4 *)(param_1 + 0x50));
      iVar3 = iVar3 - *(int *)(param_1 + 0x4c);
    }
    else {
      iVar3 = sub_08008BC0(iVar5,*(undefined4 *)(param_1 + 0x50));
      iVar3 = *(int *)(param_1 + 0x4c) - iVar3;
    }
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (*(int *)(param_1 + 0x50) - iVar2 < 0) {
      iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
      iVar2 = iVar2 - *(int *)(param_1 + 0x50);
    }
    else {
      iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
      iVar2 = *(int *)(param_1 + 0x50) - iVar2;
    }
    iVar5 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (*(int *)(param_1 + 0x50) - iVar5 < 0) {
      iVar5 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c));
      iVar5 = iVar5 - *(int *)(param_1 + 0x50);
    }
    else {
      iVar5 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c));
      iVar5 = *(int *)(param_1 + 0x50) - iVar5;
    }
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
    if ((iVar5 < iVar3) || (*(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54), iVar5 <= iVar3)) {
      *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar2 = -(*(int *)(param_1 + 0x58) >> 0x1f);
    if (*(int *)(param_1 + 0x54) < 0) {
      iVar2 = iVar2 + 2;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar2 = iVar2 + 4;
    }
    *(undefined *)(param_1 + 0x1f) = auStack_28[iVar2];
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xf) = cVar1;
LAB_08047fc8:
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

