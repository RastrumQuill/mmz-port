// sub_0803D564 at 0x0803D564 (thumb)

undefined4 sub_0803D564(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    iVar6 = DAT_0202286c;
    iVar4 = *(int *)(param_1 + 0x4c);
    if ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) == iVar4 < *(int *)(DAT_0202286c + 0x4c)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x54) = 0xfffffc00;
        iVar5 = *(int *)(iVar6 + 0x4c) + -0x4000;
        *(int *)(param_1 + 0xd4) = iVar5;
        iVar4 = *(int *)(param_1 + 0xb8);
        iVar7 = 0x2000;
        goto LAB_0803d630;
      }
      *(undefined4 *)(param_1 + 0x54) = 0x400;
      *(int *)(param_1 + 0xd4) = iVar4 + 0xf000;
      iVar7 = 0x1c000;
      if (*(int *)(param_1 + 0xb8) + 0x1c000 < iVar4 + 0xf000) goto LAB_0803d636;
    }
    else {
      if (*(int *)(DAT_0202286c + 0x4c) < iVar4) {
        *(undefined4 *)(param_1 + 0x54) = 0xfffffc00;
        iVar5 = *(int *)(iVar6 + 0x4c) + -0x4000;
        *(int *)(param_1 + 0xd4) = iVar5;
        iVar4 = *(int *)(param_1 + 0xb8);
        iVar7 = 0x3000;
LAB_0803d630:
        if (iVar4 + iVar7 <= iVar5) goto LAB_0803d63c;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0x400;
        iVar4 = *(int *)(iVar6 + 0x4c) + 0x4000;
        *(int *)(param_1 + 0xd4) = iVar4;
        iVar7 = 0x1b000;
        if (iVar4 <= *(int *)(param_1 + 0xb8) + 0x1b000) goto LAB_0803d63c;
      }
LAB_0803d636:
      *(int *)(param_1 + 0xd4) = *(int *)(iVar6 + 0x4c) + iVar7;
    }
LAB_0803d63c:
    if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xbc) + 0x6000) {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      iVar6 = (uVar3 * 2 >> 0x11 & 0x7f) + 0x80;
    }
    else {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      iVar6 = -((uVar3 * 2 >> 0x11 & 0x7f) + 0x80);
    }
    DAT_02022890 = uVar3 & 0x7fffffff;
    *(int *)(param_1 + 0x58) = iVar6;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0x13) = 0x10;
  }
  sub_080297C0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_08080FF0(param_1,0,0);
  }
  iVar6 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar6;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar6 < *(int *)(param_1 + 0xd4)) goto LAB_0803d70c;
  }
  else if (*(int *)(param_1 + 0xd4) < iVar6) goto LAB_0803d70c;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
LAB_0803d70c:
  cVar1 = *(char *)(param_1 + 0xd0) + -1;
  *(char *)(param_1 + 0xd0) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar2 = 0x16;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar2 = 0x15;
  }
  *(undefined *)(param_1 + 0xf) = uVar2;
  return in_lr;
}

