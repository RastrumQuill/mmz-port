// sub_0804E148 at 0x0804E148 (thumb)

undefined4 sub_0804E148(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0804e1ce:
    iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x68) + 0x40;
    *(int *)(param_1 + 0x68) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x68) = 0x700;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x58) = iVar4;
    if (iVar3 < iVar4) {
      sub_08017700(param_1,0xab09);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe1) = *(undefined *)(param_1 + 0xd);
    iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (*(int *)(param_1 + 0x58) == iVar3) {
      sub_08017700(param_1,0xab09);
    }
    else {
      sub_08017700(param_1,0xab0d);
    }
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    if (*(char *)(param_1 + 0xf) == -1) {
      *(undefined *)(param_1 + 0x13) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0x14;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804e1ce;
  }
  if (bVar1 != 2) {
    return in_lr;
  }
  iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  sub_080177F4(param_1);
  sub_08050014(param_1);
  if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x80200) {
    sub_0800471C(0xd4);
  }
  iVar4 = *(int *)(param_1 + 0x68) + 0x40;
  *(int *)(param_1 + 0x68) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x68) = 0x700;
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x58) = iVar4;
  if (iVar3 < iVar4) {
    *(int *)(param_1 + 0x58) = iVar3;
  }
  iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x58) != iVar3) {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0x13);
  if (cVar2 == '\0') {
    return in_lr;
  }
  *(char *)(param_1 + 0x13) = cVar2 + -1;
  if (cVar2 != '\x01') {
    return in_lr;
  }
  pcVar5 = (char *)(param_1 + 0xb5);
  if (*pcVar5 == *(char *)(param_1 + 0xb6)) {
    if (*(byte *)(DAT_02030160 + 1) < 5) {
      iVar3 = sub_0804FFDC(param_1);
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      iVar4 = sub_080FE4D8(uVar6 * 2 >> 0x11,(&DAT_080feac0)[iVar3 * 0x11]);
      uVar6 = (uint)(byte)(&UNK_080feac1)[iVar4 + iVar3 * 0x11];
      if (uVar6 == (int)*pcVar5) {
        uVar6 = sub_0804FF84(param_1,uVar6,0);
        uVar6 = uVar6 & 0xffff;
      }
    }
    else {
      iVar3 = sub_0804FFDC(param_1);
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      iVar4 = sub_080FE4D8(uVar6 * 2 >> 0x11,(&DAT_080feae2)[iVar3 * 0x11]);
      uVar6 = (uint)(byte)(&UNK_080feae3)[iVar4 + iVar3 * 0x11];
      if (uVar6 == (int)*pcVar5) {
        uVar6 = sub_0804FF84(param_1,uVar6,1);
        uVar6 = uVar6 & 0xffff;
      }
    }
  }
  else {
    if (*(byte *)(DAT_02030160 + 1) < 5) {
      iVar3 = sub_0804FFDC(param_1);
      puVar7 = &DAT_080feac0;
    }
    else {
      iVar3 = sub_0804FFDC(param_1);
      puVar7 = &DAT_080feae2;
    }
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar6 & 0x7fffffff;
    iVar4 = sub_080FE4D8(uVar6 * 2 >> 0x11,puVar7[iVar3 * 0x11]);
    uVar6 = (uint)(byte)puVar7[iVar4 + iVar3 * 0x11 + 1];
  }
  *(char *)(param_1 + 0xd) = (char)uVar6;
  *(char *)(param_1 + 0xe) = cVar2 + -1;
  if (1 < (uVar6 - 7 & 0xffff)) goto LAB_0804e468;
  iVar3 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = iVar3 - *(int *)(param_1 + 0x54);
  if (iVar4 < 1) {
    if (*(int *)(param_1 + 0x54) - iVar3 < 0x7800) goto LAB_0804e418;
LAB_0804e430:
    iVar4 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar3 = iVar4 - *(int *)(param_1 + 0x54);
    if (iVar3 < 1) {
      iVar3 = *(int *)(param_1 + 0x54) - iVar4;
    }
    if ((0x77ff < iVar3) || (*(int *)(DAT_0202f5c0 + 0x54) <= *(int *)(param_1 + 0x54)))
    goto LAB_0804e468;
  }
  else {
    if (0x77ff < iVar4) goto LAB_0804e430;
LAB_0804e418:
    if (*(int *)(param_1 + 0x54) <= *(int *)(DAT_0202f5c0 + 0x54)) goto LAB_0804e468;
  }
  uVar6 = 5;
  *(undefined *)(param_1 + 0xd) = 5;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_0804e468:
  if (uVar6 == 5) {
    iVar3 = sub_0804FFDC(param_1);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  *(undefined *)(param_1 + 0xe2) = 0;
  *(char *)(param_1 + 0xb6) = *pcVar5;
  *pcVar5 = (char)uVar6;
  return in_lr;
}

