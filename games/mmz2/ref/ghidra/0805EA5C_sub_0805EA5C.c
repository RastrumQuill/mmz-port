// sub_0805EA5C at 0x0805EA5C (thumb)

undefined4 sub_0805EA5C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    iVar6 = DAT_0202e130;
    iVar5 = *(int *)(param_1 + 0x54);
    if ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) == iVar5 < *(int *)(DAT_0202e130 + 0x54)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
        iVar5 = *(int *)(iVar6 + 0x54);
        iVar6 = -0x4000;
        goto LAB_0805eb12;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      *(int *)(param_1 + 0xd4) = iVar5 + 0xf000;
      iVar3 = *(int *)(param_1 + 0xc0) + 0x3000;
      if (iVar5 + 0xf000 < iVar3) goto LAB_0805eb24;
    }
    else {
      if (*(int *)(DAT_0202e130 + 0x54) < iVar5) {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
        iVar6 = *(int *)(iVar6 + 0x54) + -0x4000;
        *(int *)(param_1 + 0xd4) = iVar6;
        iVar3 = *(int *)(param_1 + 0xc0) + 0x3000;
        if (iVar3 <= iVar6) goto LAB_0805eb26;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0x400;
        iVar5 = *(int *)(iVar6 + 0x54);
        iVar6 = 0x4000;
LAB_0805eb12:
        *(int *)(param_1 + 0xd4) = iVar5 + iVar6;
        iVar3 = *(int *)(param_1 + 0xc4) + -0x3000;
        if (iVar5 + iVar6 <= iVar3) goto LAB_0805eb26;
      }
LAB_0805eb24:
      *(int *)(param_1 + 0xd4) = iVar3;
    }
LAB_0805eb26:
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 200) + 0x3000) {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      iVar6 = (uVar4 * 2 >> 0x11 & 0x7f) + 0x80;
    }
    else {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      iVar6 = -((uVar4 * 2 >> 0x11 & 0x7f) + 0x80);
    }
    DAT_0202e188 = uVar4 & 0x7fffffff;
    *(int *)(param_1 + 0x60) = iVar6;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0x13) = 0x10;
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_080A54F0(param_1,0,0);
  }
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar6 < *(int *)(param_1 + 0xd4)) goto LAB_0805ebf8;
  }
  else if (*(int *)(param_1 + 0xd4) < iVar6) goto LAB_0805ebf8;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
LAB_0805ebf8:
  cVar1 = *(char *)(param_1 + 0xd0) + -1;
  *(char *)(param_1 + 0xd0) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar2 = 0x13;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar2 = 0x12;
  }
  *(undefined *)(param_1 + 0xf) = uVar2;
  return in_lr;
}

