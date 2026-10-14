// sub_08082900 at 0x08082900 (thumb)

undefined4 sub_08082900(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6e00);
    sub_08006E08(param_1 + 0x74,&DAT_083410e8);
    *(undefined *)(param_1 + 0x12) = 0;
    uVar5 = 0xffffff00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (((bVar1 & 7) == 0) &&
     (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
     (uVar3 * 2 >> 0x11 & 7) == 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + -0xc00;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) + 0xc00;
    }
    sub_080AC8A4(iVar4,*(undefined4 *)(param_1 + 0x58),0);
  }
  pbVar6 = (byte *)(param_1 + 0xbc);
  *pbVar6 = *pbVar6 + 2;
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  sVar2 = sub_08008CFC(iVar4,*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar5 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      uVar5 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xbf) = 2;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar6] * 0x18;
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
  if (sVar2 == 0) goto LAB_08082a6e;
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
  if (sVar2 == 0) {
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar2 != 0) {
      uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      goto LAB_08082a54;
    }
  }
  else {
    uVar5 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_08082a54:
    *(undefined4 *)(param_1 + 0x58) = uVar5;
  }
  *pbVar6 = 0x80 - *pbVar6;
  *(undefined *)(param_1 + 0xd) = 5;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xbf) = 2;
LAB_08082a6e:
  if (0x14000 < (*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54)) + 0xa000U) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xbf) = 2;
  }
  return in_lr;
}

