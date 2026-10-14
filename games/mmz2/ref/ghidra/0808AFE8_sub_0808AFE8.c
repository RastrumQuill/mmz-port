// sub_0808AFE8 at 0x0808AFE8 (thumb)

undefined4 sub_0808AFE8(int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined uVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar9 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    uVar10 = (uint)(*(char *)(param_1 + 0x11) == '\x02');
    uVar15 = uVar9 >> 0x1f ^ uVar10;
    if (uVar10 == 0) {
      if (uVar15 == 0) {
        uVar8 = 0xfffffdc0;
      }
      else {
        uVar8 = 0x240;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      if (uVar15 == 0) {
LAB_0808b078:
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
LAB_0808b07e:
      *(byte *)(param_1 + 10) = bVar3;
      *(char *)(param_1 + 0x4c) = (char)uVar15;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar15 << 4);
    }
    else {
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      if (0x2000 < (int)uVar9) {
        if (uVar15 == 0) {
          uVar8 = 0xfffffe80;
        }
        else {
          uVar8 = 0x180;
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar8;
        if (uVar15 == 0) goto LAB_0808b078;
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
        goto LAB_0808b07e;
      }
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x11) == '\x02') {
    iVar14 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    bVar2 = 0 < iVar14;
    if (iVar14 < 0) {
      iVar14 = -iVar14;
    }
    if (0x2000 < iVar14) {
      if (bVar2) {
        uVar8 = 0x180;
      }
      else {
        uVar8 = 0xfffffe80;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      if (bVar2) {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(bool *)(param_1 + 0x4c) = bVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
    }
  }
  pbVar16 = (byte *)(param_1 + 0x4a);
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 | 0x20;
  *(undefined *)(param_1 + 0x4d) = 1;
  *pbVar16 = *pbVar16 & 0xdf | 0x20;
  iVar14 = *(int *)(param_1 + 0x54) + (bVar3 >> 4 & 1) * 0x800 + -0x400;
  uVar9 = sub_08008354(iVar14,*(int *)(param_1 + 0x58) + 0x400);
  uVar9 = uVar9 & 0xf;
  if ((uVar9 == 0) && (sVar6 = sub_08008CFC(iVar14,*(int *)(param_1 + 0x58) + 0x400), sVar6 != 0)) {
    uVar9 = 1;
  }
  if ((uVar9 == 1) || (0xd < uVar9)) {
    uVar9 = sub_08008354(iVar14,*(int *)(param_1 + 0x58) + -0x400);
    uVar9 = uVar9 & 0xffff;
    if (uVar9 == 0) {
      uVar9 = 1;
    }
  }
  iVar12 = (int)(((uint)(byte)(&DAT_08341a30)[uVar9] - (uint)*(byte *)(param_1 + 0x12)) * 0x1000000)
           >> 0x18;
  iVar14 = iVar12;
  if (iVar12 < 0) {
    iVar14 = -iVar12;
  }
  if (0x7f < iVar14) {
    iVar12 = iVar12 + -0x100;
  }
  cVar1 = (char)(iVar12 >> 1) + *(char *)(param_1 + 0x12);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(char *)(param_1 + 0x24) = -cVar1;
  }
  else {
    *(char *)(param_1 + 0x24) = cVar1;
  }
  *(char *)(param_1 + 0x12) = cVar1;
  bVar3 = *(byte *)(param_1 + 10) >> 4;
  iVar14 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar14;
  if (1 < uVar9) {
    iVar14 = sub_080093C4(iVar14,*(undefined4 *)(param_1 + 0x58));
    if (0xa3f < iVar14 - *(int *)(param_1 + 0x58)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0xd) = 1;
      return in_lr;
    }
    uVar8 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar8;
  }
  iVar14 = (bVar3 & 1) * 0x1400 + -0xa00;
  uVar7 = sub_08008354(*(int *)(param_1 + 0x54) + iVar14,*(int *)(param_1 + 0x58) + -0xa00);
  if ((((uVar7 & 0xf) == 1) || (0xd < (uVar7 & 0xf))) && (uVar7 != 0x800f)) {
    uVar7 = sub_08008354(*(int *)(param_1 + 0x54) + iVar14,*(int *)(param_1 + 0x58) + -0x2000);
    if ((((uVar7 & 0xf) == 1) || (0xd < (uVar7 & 0xf))) && (uVar7 != 0x800f)) {
      uVar4 = 2;
      if ((bVar3 & 1) != 0) {
        uVar4 = 3;
      }
      *(undefined *)(param_1 + 0xd) = uVar4;
      *(char *)(param_1 + 0x12) = (char)((bVar3 & 1) << 7);
      *(int *)(param_1 + 0x5c) =
           (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff] * 10;
      *(int *)(param_1 + 0x60) = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * -10;
      if ((bVar3 & 1) == 0) {
        iVar12 = *(int *)(param_1 + 0x54);
        iVar11 = *(int *)(param_1 + 0x58) + -0x100;
        goto LAB_0808b3ea;
      }
      iVar14 = sub_080090D4(*(int *)(param_1 + 0x54) + iVar14,*(int *)(param_1 + 0x58) + -0x100);
joined_r0x0808b352:
      if (-1 < iVar14) goto LAB_0808b3fa;
    }
    else {
      *(undefined *)(param_1 + 0x11) = 0;
      uVar10 = *(uint *)(param_1 + 0x5c);
      *(uint *)(param_1 + 0x5c) = -uVar10;
      bVar2 = 0x7fffffff < uVar10;
      if (bVar2) {
        bVar5 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar5;
      *(bool *)(param_1 + 0x4c) = bVar2;
      *pbVar16 = *pbVar16 & 0xef | bVar2 << 4;
      if ((bVar3 & 1) != 0) {
        iVar14 = sub_080090D4(*(int *)(param_1 + 0x54) + iVar14,*(int *)(param_1 + 0x58) + -0x100);
        goto joined_r0x0808b352;
      }
      iVar12 = *(int *)(param_1 + 0x54);
      iVar11 = *(int *)(param_1 + 0x58);
      iVar13 = -0x100;
LAB_0808b3e8:
      iVar11 = iVar11 + iVar13;
LAB_0808b3ea:
      iVar14 = sub_08009240(iVar12 + iVar14,iVar11);
      if (iVar14 < 1) goto LAB_0808b3fa;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar14;
  }
  else {
    sVar6 = sub_08008CFC(*(int *)(param_1 + 0x54) + iVar14,*(int *)(param_1 + 0x58) + -0xa00);
    if (sVar6 != 0) {
      *(undefined *)(param_1 + 0x11) = 0;
      uVar10 = *(uint *)(param_1 + 0x5c);
      *(uint *)(param_1 + 0x5c) = -uVar10;
      bVar2 = 0x7fffffff < uVar10;
      if (bVar2) {
        bVar5 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar5;
      *(bool *)(param_1 + 0x4c) = bVar2;
      *pbVar16 = *pbVar16 & 0xef | bVar2 << 4;
      if ((bVar3 & 1) == 0) {
        iVar12 = *(int *)(param_1 + 0x54);
        iVar11 = *(int *)(param_1 + 0x58);
        iVar13 = -0xa00;
        goto LAB_0808b3e8;
      }
      iVar14 = sub_080090D4(*(int *)(param_1 + 0x54) + iVar14,*(int *)(param_1 + 0x58) + -0xa00);
      goto joined_r0x0808b352;
    }
  }
LAB_0808b3fa:
  if (1 < uVar9) {
    return in_lr;
  }
  iVar14 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0xa00,*(undefined4 *)(param_1 + 0x58));
  iVar12 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58));
  if (iVar14 < 0) {
    if (iVar12 < 0) {
      if (iVar14 < iVar12) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar14;
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar12;
      return in_lr;
    }
  }
  else if (-1 < iVar12) goto LAB_0808b458;
  iVar14 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar14 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar14;
  }
LAB_0808b458:
  iVar14 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0xa00,*(int *)(param_1 + 0x58) + 0x100);
  iVar12 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0xa00,*(int *)(param_1 + 0x58) + 0x100);
  if ((-1 < iVar14) && (-1 < iVar12)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  return in_lr;
}

