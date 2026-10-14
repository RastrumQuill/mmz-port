// sub_080790C0 at 0x080790C0 (thumb)

undefined4 sub_080790C0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xb9) = 0;
    sub_08017700(param_1,0x3500);
    sub_08007390(param_1 + 0x74,&DAT_08363d64);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0x10 >> 8);
  iVar2 = *(int *)(param_1 + 0x60) + 0x10;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar7;
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar2 = iVar2 + -0xc00;
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar2 = sub_0800A04C(iVar7 + -0xc00,iVar2);
  }
  else {
    iVar2 = sub_08009ED0(iVar7 + 0xc00,iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x54) + iVar2;
  *(int *)(param_1 + 0x54) = iVar2;
  uVar9 = *(undefined4 *)(param_1 + 0x58);
  iVar7 = sub_08009BE4(iVar2,uVar9);
  iVar3 = sub_08009BE4(iVar2 + 0xc00,uVar9);
  iVar2 = sub_08009BE4(iVar2 + -0xc00,uVar9);
  if (((iVar7 != 0) || (iVar3 != 0)) || (iVar2 != 0)) {
    if (iVar7 < iVar3) {
      if (iVar7 < iVar2) {
        iVar2 = iVar7;
      }
    }
    else if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  }
  sub_0807A18C(param_1);
  sub_080177F4(param_1);
  pcVar8 = (char *)(param_1 + 0xc1);
  if ((*pcVar8 != '\0') && (cVar1 = *pcVar8 + -1, *pcVar8 = cVar1, cVar1 != '\0')) {
    return in_lr;
  }
  if (*(int *)(param_1 + 0x58) + -0xc00 <= DAT_0202e48c) {
    *pcVar8 = '<';
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 < *(int *)(DAT_0202f5c0 + 0x54)) {
    if ((*(byte *)(DAT_0202f5c0 + 10) & 0x10) == 0) goto LAB_08079234;
    bVar5 = 0;
  }
  else if ((iVar2 <= *(int *)(DAT_0202f5c0 + 0x54)) ||
          (bVar5 = *(byte *)(DAT_0202f5c0 + 10) & 0x10, (*(byte *)(DAT_0202f5c0 + 10) & 0x10) != 0))
  goto LAB_08079234;
  *(undefined *)(param_1 + 0xd) = 1;
  *(byte *)(param_1 + 0xe) = bVar5;
LAB_08079234:
  if (*(int *)(param_1 + 0x5c) != 0) {
    return in_lr;
  }
  iVar7 = *(int *)(DAT_0202f5c0 + 0x54) - iVar2;
  if (iVar7 < 1) {
    iVar7 = iVar2 - *(int *)(DAT_0202f5c0 + 0x54);
  }
  if (iVar7 < 0x5000) {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar2 = sub_080FE4D8(uVar4 * 2 >> 0x11,100);
    if (iVar2 != 0) {
      return in_lr;
    }
    uVar6 = 0x3c;
  }
  else {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar2 = sub_080FE4D8(uVar4 * 2 >> 0x11,200);
    if (iVar2 != 0) {
      return in_lr;
    }
    uVar6 = 0x32;
  }
  *(undefined *)(param_1 + 0xc0) = uVar6;
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

