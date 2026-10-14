// sub_0807C388 at 0x0807C388 (thumb)

undefined4 sub_0807C388(int param_1)

{
  undefined uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  char cVar13;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08006E08(param_1 + 0x74,&DAT_083404a8);
    *(undefined *)(param_1 + 0xbd) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar6 = DAT_0202e130;
  iVar4 = iRam00000054;
  iVar5 = iRam00000058;
  if (DAT_0202e130 != 0) {
    iVar4 = sub_0801EFE8(DAT_0202e130,0);
    iVar5 = sub_0801F004(iVar6,0);
  }
  piVar9 = (int *)(param_1 + 0xb4);
  if (0x10000 < (iVar4 - *piVar9) + 0x8000U) {
    return in_lr;
  }
  piVar10 = (int *)(param_1 + 0xb8);
  if (0x6000 < (iVar5 - *piVar10) + 0x3000U) {
    return in_lr;
  }
  iVar6 = sub_08009684(iVar4,iVar5);
  if (((((iVar6 - *piVar9) + 0x8000U < 0x10001) && ((iVar5 - *piVar10) + 0x3000U < 0x6001)) &&
      ((iVar6 - iVar4) + 0x4000U < 0x8001)) &&
     ((0x4000 < (iVar6 - iVar4) + 0x2000U && (iVar4 < iVar6)))) {
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) = iVar5;
    sVar3 = sub_08008CFC(iVar6 + 0x800,iVar5 + -0x1000);
    cVar13 = sVar3 == 0;
    if ((bool)cVar13) {
      iVar6 = sub_080093C4(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + -0x1000);
      *(int *)(param_1 + 0x58) = iVar6 + 0x1000;
    }
    sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + 0x1000);
    if (sVar3 == 0) {
      iVar6 = sub_0800958C(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + 0x1000);
      *(int *)(param_1 + 0x58) = iVar6 + -0x1000;
      cVar13 = cVar13 + '\x01';
    }
    if (cVar13 != '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  iVar6 = sub_08009774(iVar4,iVar5);
  if ((((iVar6 - *piVar9) + 0x8000U < 0x10001) && ((iVar5 - *piVar10) + 0x3000U < 0x6001)) &&
     (((iVar6 - iVar4) + 0x4000U < 0x8001 &&
      ((0x4000 < (iVar6 - iVar4) + 0x2000U && (iVar6 < iVar4)))))) {
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) = iVar5;
    sVar3 = sub_08008CFC(iVar6 + -0x800,iVar5 + -0x1000);
    cVar13 = sVar3 == 0;
    if ((bool)cVar13) {
      iVar6 = sub_080093C4(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + -0x1000);
      *(int *)(param_1 + 0x58) = iVar6 + 0x1000;
    }
    sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + 0x1000);
    if (sVar3 == 0) {
      iVar6 = sub_0800958C(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + 0x1000);
      *(int *)(param_1 + 0x58) = iVar6 + -0x1000;
      cVar13 = cVar13 + '\x01';
    }
    if (cVar13 != '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      uVar1 = 7;
      goto LAB_0807c8e8;
    }
  }
  uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar7 & 0x7fffffff;
  iVar6 = (uVar7 * 2 >> 0x11 & 7) * 0x800 + 0x2000;
  iVar11 = iVar6 + iVar4;
  iVar8 = sub_080093C4(iVar11,iVar5);
  if ((((iVar11 - *piVar9) + 0x8000U < 0x10001) && ((iVar8 - *piVar10) + 0x3000U < 0x6001)) &&
     ((iVar8 - (iVar5 + 0xa00)) + 0x1000U < 0x2001)) {
    iVar12 = 0;
    *(int *)(param_1 + 0x54) = iVar11;
    *(int *)(param_1 + 0x58) = iVar8;
    sVar3 = sub_08008CFC(iVar11 + -0x1000,iVar8 + 0x800);
    if (sVar3 == 0) {
      iVar8 = sub_08009684(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + 0x800);
LAB_0807c6d2:
      *(int *)(param_1 + 0x54) = iVar8 + 0x1000;
      iVar12 = 1;
    }
    else {
      sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + -0x800);
      if (sVar3 != 0) {
        iVar8 = sub_08009774(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + -0x800);
        goto LAB_0807c6d2;
      }
    }
    sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + 0x800);
    if (sVar3 == 0) {
      iVar8 = sub_08009774(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + 0x800);
LAB_0807c73e:
      *(int *)(param_1 + 0x54) = iVar8 + -0x1000;
      iVar12 = iVar12 + 1;
    }
    else {
      sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + -0x800);
      if (sVar3 != 0) {
        iVar8 = sub_08009684(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + -0x800);
        goto LAB_0807c73e;
      }
    }
    if (iVar12 == 2) goto LAB_0807c77c;
    uVar7 = (uint)(*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54));
    if (uVar7 == 0) goto LAB_0807c8c4;
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
LAB_0807c77c:
    iVar4 = iVar4 - iVar6;
    iVar6 = sub_080093C4(iVar4,iVar5);
    if (0x10000 < (iVar4 - *piVar9) + 0x8000U) {
      return in_lr;
    }
    if (0x6000 < (iVar6 - *piVar10) + 0x3000U) {
      return in_lr;
    }
    if (0x2000 < (iVar6 - (iVar5 + 0xa00)) + 0x1000U) {
      return in_lr;
    }
    iVar5 = 0;
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = iVar6;
    sVar3 = sub_08008CFC(iVar4 + -0x1000,iVar6 + 0x800);
    if (sVar3 == 0) {
      iVar6 = sub_08009684(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + 0x800);
LAB_0807c826:
      *(int *)(param_1 + 0x54) = iVar6 + 0x1000;
      iVar5 = 1;
    }
    else {
      sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + -0x800);
      if (sVar3 != 0) {
        iVar6 = sub_08009774(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + -0x800);
        goto LAB_0807c826;
      }
    }
    sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + 0x800);
    if (sVar3 == 0) {
      iVar6 = sub_08009774(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + 0x800);
LAB_0807c88e:
      *(int *)(param_1 + 0x54) = iVar6 + -0x1000;
      iVar5 = iVar5 + 1;
    }
    else {
      sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + -0x800);
      if (sVar3 != 0) {
        iVar6 = sub_08009684(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + -0x800);
        goto LAB_0807c88e;
      }
    }
    if (iVar5 == 2) {
      return in_lr;
    }
    uVar7 = (uint)(*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54));
    if (uVar7 == 0) {
LAB_0807c8c4:
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
  uVar1 = 2;
LAB_0807c8e8:
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

