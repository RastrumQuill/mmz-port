// sub_0804C650 at 0x0804C650 (thumb)

undefined4 sub_0804C650(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar7 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    uVar9 = (uint)(*(char *)(param_1 + 0x11) == '\x02');
    uVar13 = uVar7 >> 0x1f ^ uVar9;
    if (uVar9 == 0) {
      if (uVar13 == 0) {
        uVar6 = 0xfffffdc0;
      }
      else {
        uVar6 = 0x240;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar6;
      *(char *)(param_1 + 0x44) = (char)uVar13;
      if (uVar13 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
LAB_0804c6f6:
      *(byte *)(param_1 + 10) = bVar2;
    }
    else {
      if ((int)uVar7 < 0) {
        uVar7 = -uVar7;
      }
      if (0x2000 < (int)uVar7) {
        if (uVar13 == 0) {
          uVar6 = 0xfffffe80;
        }
        else {
          uVar6 = 0x180;
        }
        *(undefined4 *)(param_1 + 0x54) = uVar6;
        *(char *)(param_1 + 0x44) = (char)uVar13;
        if (uVar13 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        goto LAB_0804c6f6;
      }
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x11) == '\x02') {
    iVar12 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    bVar1 = 0 < iVar12;
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    if (0x2000 < iVar12) {
      if (bVar1) {
        uVar6 = 0x180;
      }
      else {
        uVar6 = 0xfffffe80;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar6;
      *(bool *)(param_1 + 0x44) = bVar1;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
  }
  bVar2 = *(byte *)(param_1 + 10);
  *(undefined *)(param_1 + 0x45) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  iVar12 = *(int *)(param_1 + 0x4c) + (bVar2 >> 4 & 1) * 0x800 + -0x400;
  uVar7 = sub_080065AC(iVar12,*(int *)(param_1 + 0x50) + 0x400);
  uVar7 = uVar7 & 0xf;
  if ((uVar7 == 0) && (cVar3 = sub_080079CC(iVar12,*(int *)(param_1 + 0x50) + 0x400), cVar3 != '\0')
     ) {
    uVar7 = 1;
  }
  if ((uVar7 == 1) || (uVar7 == 0xe)) {
    uVar7 = sub_080065AC(iVar12,*(int *)(param_1 + 0x50) + -0x400);
    uVar7 = uVar7 & 0xff;
    if (uVar7 == 0) {
      uVar7 = 1;
    }
  }
  iVar8 = (int)(((uint)(byte)(&DAT_082aef00)[uVar7] - (uint)*(byte *)(param_1 + 0x12)) * 0x1000000)
          >> 0x18;
  iVar12 = iVar8;
  if (iVar8 < 0) {
    iVar12 = -iVar8;
  }
  if (0x7f < iVar12) {
    iVar8 = iVar8 + -0x100;
  }
  cVar3 = *(char *)(param_1 + 0x12) + (char)(iVar8 >> 1);
  *(char *)(param_1 + 0x1f) = cVar3;
  *(char *)(param_1 + 0x12) = cVar3;
  bVar2 = *(byte *)(param_1 + 10) >> 4;
  iVar12 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar12;
  if (1 < uVar7) {
    iVar12 = sub_08008360(iVar12,*(undefined4 *)(param_1 + 0x50));
    if (0xa3f < iVar12 - *(int *)(param_1 + 0x50)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined *)(param_1 + 0xd) = 1;
      return in_lr;
    }
    uVar6 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar6;
  }
  iVar12 = (bVar2 & 1) * 0x1400 + -0xa00;
  uVar9 = sub_080065AC(*(int *)(param_1 + 0x4c) + iVar12,*(int *)(param_1 + 0x50) + -0xa00);
  if (((uVar9 & 0xf) == 1) || ((uVar9 & 0xf) == 0xe)) {
    uVar9 = sub_080065AC(*(int *)(param_1 + 0x4c) + iVar12,*(int *)(param_1 + 0x50) + -0x2000);
    if (((uVar9 & 0xf) == 1) || ((uVar9 & 0xf) == 0xe)) {
      uVar4 = 2;
      if ((bVar2 & 1) != 0) {
        uVar4 = 3;
      }
      *(undefined *)(param_1 + 0xd) = uVar4;
      iVar8 = (bVar2 & 1) * 0x80;
      *(char *)(param_1 + 0x12) = (char)iVar8;
      *(int *)(param_1 + 0x54) = (short)(&DAT_080c8e24)[iVar8 + 0x40] * 10;
      *(int *)(param_1 + 0x58) = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * -10;
      if ((bVar2 & 1) == 0) {
        iVar8 = *(int *)(param_1 + 0x4c);
        iVar10 = *(int *)(param_1 + 0x50);
        iVar11 = -0x100;
        goto LAB_0804c9ac;
      }
      iVar12 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar12,*(int *)(param_1 + 0x50) + -0x100);
    }
    else {
      *(undefined *)(param_1 + 0x11) = 0;
      uVar9 = *(uint *)(param_1 + 0x54);
      *(uint *)(param_1 + 0x54) = -uVar9;
      *(bool *)(param_1 + 0x44) = 0x7fffffff < uVar9;
      if (uVar9 < 0x80000000) {
        bVar5 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar5;
      if ((bVar2 & 1) == 0) {
        iVar8 = *(int *)(param_1 + 0x4c);
        iVar10 = *(int *)(param_1 + 0x50) + -0x100;
        goto LAB_0804c9ae;
      }
      iVar12 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar12,*(int *)(param_1 + 0x50) + -0x100);
    }
joined_r0x0804c8c6:
    if (iVar12 < 0) {
LAB_0804c9b8:
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar12;
    }
  }
  else {
    cVar3 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar12,*(int *)(param_1 + 0x50) + -0xa00);
    if (cVar3 != '\0') {
      *(undefined *)(param_1 + 0x11) = 0;
      uVar9 = *(uint *)(param_1 + 0x54);
      *(uint *)(param_1 + 0x54) = -uVar9;
      *(bool *)(param_1 + 0x44) = 0x7fffffff < uVar9;
      if (uVar9 < 0x80000000) {
        bVar5 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar5;
      if ((bVar2 & 1) != 0) {
        iVar12 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar12,*(int *)(param_1 + 0x50) + -0xa00);
        goto joined_r0x0804c8c6;
      }
      iVar8 = *(int *)(param_1 + 0x4c);
      iVar10 = *(int *)(param_1 + 0x50);
      iVar11 = -0xa00;
LAB_0804c9ac:
      iVar10 = iVar10 + iVar11;
LAB_0804c9ae:
      iVar12 = sub_08008120(iVar8 + iVar12,iVar10);
      if (0 < iVar12) goto LAB_0804c9b8;
    }
  }
  if (1 < uVar7) {
    return in_lr;
  }
  iVar12 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0xa00,*(undefined4 *)(param_1 + 0x50));
  iVar8 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0xa00,*(undefined4 *)(param_1 + 0x50));
  if (iVar12 < 0) {
    if (iVar8 < 0) {
      if (iVar12 < iVar8) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar12;
        return in_lr;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar8;
      return in_lr;
    }
  }
  else if (-1 < iVar8) goto LAB_0804ca1c;
  iVar12 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar12 < 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar12;
  }
LAB_0804ca1c:
  iVar12 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0xa00,*(int *)(param_1 + 0x50) + 0x100);
  iVar8 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0xa00,*(int *)(param_1 + 0x50) + 0x100);
  if ((-1 < iVar12) && (-1 < iVar8)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  return in_lr;
}

