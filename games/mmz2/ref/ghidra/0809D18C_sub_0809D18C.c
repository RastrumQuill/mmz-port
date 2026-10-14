// sub_0809D18C at 0x0809D18C (thumb)

undefined4 sub_0809D18C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  if (((((*(uint *)(iVar9 + 0x8c) & 0x200) != 0) || (*(short *)(iVar9 + 0xa4) == 0)) &&
      ((DAT_0202ec38 & 0x10) == 0)) || (*(char *)(iVar9 + 0xd) == '\x1d')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809CE88(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar8 = *(int *)(iVar9 + 0x54) + -0x2800;
    }
    else {
      iVar8 = *(int *)(iVar9 + 0x54) + 0x2800;
    }
    *(int *)(param_1 + 0x54) = iVar8;
    *(int *)(param_1 + 0x58) = *(int *)(iVar9 + 0x58) + -0x1800;
    *(undefined *)(param_1 + 0x12) = 0xf;
    goto LAB_0809d2d6;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    puVar7 = (ushort *)(param_1 + 0xc0);
    if (*puVar7 < 0x100) {
      uVar2 = *puVar7 + 0x10;
      *puVar7 = uVar2;
      *(ushort *)(param_1 + 0x50) = uVar2;
      *(ushort *)(param_1 + 0x52) = *puVar7;
    }
    if (*(char *)(iVar9 + 0xd) != '\n') {
      return in_lr;
    }
    goto LAB_0809d2d6;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      return in_lr;
    }
    cVar3 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar3;
    *(char *)(param_1 + 0x24) = cVar3;
    iVar8 = *(int *)(param_1 + 0x60) + 0x60;
    *(int *)(param_1 + 0x60) = iVar8;
    iVar9 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar9;
    iVar8 = *(int *)(param_1 + 0x58) + iVar8;
    *(int *)(param_1 + 0x58) = iVar8;
    sVar4 = sub_08008CFC(iVar9,iVar8 + 0xe00);
    if (sVar4 == 0) {
      return in_lr;
    }
    iVar9 = param_1 + 0x54;
    sub_0809CE04(iVar9,1,0);
    sub_0809CE04(iVar9,1,1);
    sub_0809CE04(iVar9,1,2);
    sub_0809CE04(iVar9,1,3);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809CE88(param_1);
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 != -1) {
    return in_lr;
  }
  iVar9 = 0x18;
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar9 = 0x1e;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = *(int *)(DAT_0202e130 + 0x54);
    iVar8 = *(int *)(param_1 + 0x54);
    if (iVar6 < iVar8) goto LAB_0809d2b4;
    uVar5 = 0xffffff00;
LAB_0809d2ca:
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    iVar10 = iVar9 << 1;
  }
  else {
    iVar6 = *(int *)(DAT_0202e130 + 0x54);
    iVar8 = *(int *)(param_1 + 0x54);
    if (iVar6 <= iVar8) {
      uVar5 = 0x100;
      goto LAB_0809d2ca;
    }
LAB_0809d2b4:
    iVar10 = iVar9 * 2;
    uVar5 = sub_080EF150(iVar6 - iVar8,iVar10);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
  }
  *(int *)(param_1 + 0x60) = (iVar10 + iVar9) * -0x20;
LAB_0809d2d6:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

