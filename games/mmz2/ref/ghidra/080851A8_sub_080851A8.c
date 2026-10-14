// sub_080851A8 at 0x080851A8 (thumb)

undefined4 sub_080851A8(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 in_lr;
  
  uVar10 = *(byte *)(param_1 + 10) >> 5 & 1;
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar5 = param_1 + 0x54;
    sub_08086220(iVar5,0x1800,6,8);
    sub_08006E08(param_1 + 0x74,&DAT_08341360);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar7 = uVar10 << 1;
      }
      else {
        uVar7 = uVar10 * 2 | 1;
      }
      sub_080BABAC(iVar5,0,0,uVar7);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar7 = uVar10 << 1;
      }
      else {
        uVar7 = uVar10 * 2 | 1;
      }
      sub_080BABAC(iVar5,0,1,uVar7);
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar7 = uVar10 << 1;
      }
      else {
        uVar7 = uVar10 * 2 | 1;
      }
      sub_080BABAC(iVar5,1,0,uVar7);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar7 = uVar10 << 1;
      }
      else {
        uVar7 = uVar10 * 2 | 1;
      }
      sub_080BABAC(iVar5,1,1,uVar7);
    }
    sub_080127E4(param_1,0x720d);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    pbVar9 = (byte *)(param_1 + 0x4a);
    *pbVar9 = *pbVar9 & 0xef | bVar1 << 4;
    *(uint *)(param_1 + 0x5c) = ((uint)*(byte *)(param_1 + 0x13) * -2 + 1) * 0x180;
    uVar7 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x200);
    uVar7 = uVar7 & 0xffff;
    if (uVar7 != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *pbVar9 = *pbVar9 & 0xdf;
      uVar6 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar6;
      uVar7 = 0xfffffd80;
    }
    *(uint *)(param_1 + 0x60) = uVar7;
    *(undefined *)(param_1 + 0xba) = 0x20;
    *(undefined *)(param_1 + 0xb9) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    iVar5 = sub_08065A24(param_1);
    if (iVar5 != 0) {
      sub_080128D4(param_1);
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  pcVar4 = (char *)(param_1 + 0xba);
  if (*pcVar4 != '\0') {
    *pcVar4 = *pcVar4 + -1;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    sVar3 = sub_08008CFC(iVar5,*(int *)(param_1 + 0x58) + (uVar10 ^ 1) * -0x800);
    if (sVar3 != 0) {
      if (*(int *)(param_1 + 0x5c) < 0) {
        uVar6 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      }
      else {
        uVar6 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      }
      *(undefined4 *)(param_1 + 0x54) = uVar6;
    }
    iVar5 = *(int *)(param_1 + 0x60);
    iVar8 = *(int *)(param_1 + 0x58) + iVar5;
    *(int *)(param_1 + 0x58) = iVar8;
    if (0 < iVar5) {
      sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar8 + uVar10 * 0x800);
      if (sVar3 != 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
        *(undefined *)(param_1 + 0x4d) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
        uVar6 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar6;
        *(undefined *)(param_1 + 0xb9) = 0;
        uVar6 = 0x20;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar6 = 0xffffffe0;
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar6;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 0x60);
    }
    *(int *)(param_1 + 0x60) = iVar5 + 0x40;
    if (0x700 < iVar5 + 0x40) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    if (*(int *)(param_1 + 0x5c) != 0) {
      iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar5;
      sVar3 = sub_08008CFC(iVar5,*(int *)(param_1 + 0x58) + -0x800);
      if (sVar3 != 0) {
        if (*(int *)(param_1 + 0x5c) < 0) {
          uVar6 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
        }
        else {
          uVar6 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
        }
        *(undefined4 *)(param_1 + 0x54) = uVar6;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    if (*pcVar4 == '\0') {
      sub_08006E08(param_1 + 0x74,&DAT_08341330);
      *(undefined *)(param_1 + 0xd) = 0x14;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xb5) = 3;
      *(bool *)(param_1 + 0xb7) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    }
  }
  return in_lr;
}

