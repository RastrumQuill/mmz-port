// sub_0806E8AC at 0x0806E8AC (thumb)

undefined4 sub_0806E8AC(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar11 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 == 1) {
LAB_0806e908:
    puVar4 = &DAT_0836304c;
    if (1 < *(byte *)(param_1 + 0x10)) {
      puVar4 = &DAT_0836307c;
    }
    sub_08007390(param_1 + 0x74,puVar4);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffdc0;
    uVar6 = 0xfffffdc0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar6 = 0x240;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    sub_08017700(param_1,*(undefined2 *)(&DAT_083630e8 + (uint)*(byte *)(param_1 + 0x10) * 2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) goto LAB_0806ea8c;
      *(undefined *)(param_1 + 0xbd) = 8;
      if (*(byte *)(param_1 + 0x12) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      uVar5 = *(byte *)(param_1 + 0x12) & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0806e908;
    }
    if (bVar2 != 2) goto LAB_0806ea8c;
  }
  iVar10 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar10;
  iVar10 = sub_0800A104(iVar10,*(undefined4 *)(param_1 + 0x58));
  iVar7 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  if (iVar7 + 0xf000U < 0x1e001) {
LAB_0806e998:
    iVar7 = *(int *)(param_1 + 0x54) + -0xa00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar7 = *(int *)(param_1 + 0x54) + 0xa00;
    }
    sVar3 = sub_08009A3C(iVar7,*(int *)(param_1 + 0x58) + -0x800);
    if (sVar3 != 0) goto LAB_0806e9c6;
  }
  else {
    if (*(int *)(param_1 + 0x5c) < 0) {
      if (0 < iVar7) goto LAB_0806e998;
    }
    else if (iVar7 < 1) goto LAB_0806e998;
LAB_0806e9c6:
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(param_1 + 10);
    uVar5 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar5 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  }
  iVar8 = *(int *)(DAT_0202f5c0 + 0x54);
  iVar7 = *(int *)(param_1 + 0x54);
  if ((iVar8 - iVar7) + 0x3000U < 0x6000) {
    if (*(int *)(param_1 + 0x5c) < 0) {
      if (iVar7 < iVar8) goto LAB_0806ea52;
    }
    else if (iVar7 >= iVar8) goto LAB_0806ea52;
    if (*(char *)(param_1 + 0xbc) != '\0') {
      *(char *)(param_1 + 0xbc) = '\0';
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
LAB_0806ea52:
    *(undefined *)(param_1 + 0xbc) = 1;
  }
  if (iVar10 - *(int *)(param_1 + 0x58) < 0xa00) {
    cVar1 = *(char *)(param_1 + 0xbd);
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x58) = iVar10;
    }
    else {
      *(char *)(param_1 + 0xbd) = cVar1 + -1;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
LAB_0806ea8c:
  if (iVar11 != 0) {
    iVar10 = *(int *)(iVar11 + 0x54) - *(int *)(param_1 + 0x54);
    if ((*(byte *)(iVar11 + 10) & 0x10) == 0) {
      if (iVar10 < 1) {
        return in_lr;
      }
    }
    else if (0 < iVar10) {
      return in_lr;
    }
    if ((*(byte *)(iVar11 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x5c) < 1) {
        return in_lr;
      }
    }
    else if (0 < *(int *)(param_1 + 0x5c)) {
      return in_lr;
    }
    if (((*(int *)(param_1 + 0x58) <= *(int *)(iVar11 + 0x58)) &&
        (*(int *)(iVar11 + 0x58) + -0x1800 < *(int *)(param_1 + 0x58))) && (iVar10 + 0x2c0U < 0x580)
       ) {
      puVar9 = (uint *)(iVar11 + 0xb4);
      uVar5 = *puVar9 | 1 << (*(byte *)(param_1 + 0x11) + 4 & 0xff);
      *puVar9 = uVar5;
      *puVar9 = uVar5 | 1 << (*(byte *)(param_1 + 0x11) + 8 & 0xff);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

