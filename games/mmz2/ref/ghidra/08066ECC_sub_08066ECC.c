// sub_08066ECC at 0x08066ECC (thumb)

undefined4 sub_08066ECC(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x909);
    if (*(byte *)(param_1 + 0xbd) == 0) {
      uVar5 = 0xffffff80;
    }
    else {
      uVar5 = 0x80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    bVar1 = *(byte *)(param_1 + 0xbd);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  sVar4 = sub_08008CFC(iVar6,*(int *)(param_1 + 0x58) + 0x800);
  if (sVar4 == 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  iVar6 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar6;
  iVar7 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_0833dd04 + (uint)*(byte *)(param_1 + 0xbd) * 4);
  sVar4 = sub_08008CFC(iVar7,iVar6 + -0x800);
  if ((sVar4 == 0) && (sVar4 = sub_08008CFC(iVar7,iVar6 + 0xa00), sVar4 != 0)) {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      iVar6 = *(int *)(param_1 + 0x54);
      if (iVar6 < *(int *)(param_1 + 0xb4) + -0x2800) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(byte *)(param_1 + 0xe) = bVar1 & 0x10;
        return in_lr;
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x54);
      if (*(int *)(param_1 + 0xb4) + 0x2800 < iVar6) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    if (*(short *)(DAT_0202f07c + 10) < 7) {
      return in_lr;
    }
    if ((uint)(*(int *)(DAT_0202e130 + 0x54) <= iVar6) == (((uint)bVar1 << 0x18) >> 0x1c & 1)) {
      return in_lr;
    }
    if (0xdc00 < (*(int *)(DAT_0202e130 + 0x54) - iVar6) + 0x6e00U) {
      return in_lr;
    }
    if (0xa000 < (*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0x5000U) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xf) = *(undefined *)(param_1 + 0xd);
    uVar3 = 7;
  }
  else {
    uVar3 = 9;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

