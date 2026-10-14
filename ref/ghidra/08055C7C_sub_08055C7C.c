// sub_08055C7C at 0x08055C7C (thumb)

undefined4 sub_08055C7C(int param_1)

{
  byte bVar1;
  char extraout_var;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 in_lr;
  bool bVar15;
  
  iVar14 = *(int *)(param_1 + 0x20);
  uVar10 = *(byte *)(iVar14 + 0x13) + 0x40 & 0xff;
  iVar9 = ((int)-(*(uint *)(iVar14 + 0xbc) & 8) >> 0x1f & 0x800U) + 0x1c00;
  iVar2 = iVar9 * (short)(&DAT_080c8e24)[uVar10 + 0x40];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar9 = iVar9 * (short)(&DAT_080c8e24)[uVar10];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar3 = *(int *)(iVar14 + 0x50);
  *(int *)(param_1 + 0x4c) = *(int *)(iVar14 + 0x4c) - (iVar2 >> 8);
  *(int *)(param_1 + 0x50) = (iVar3 - (iVar9 >> 8)) + -0x900;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  iVar9 = *(int *)(iVar2 + 0x24);
  while (iVar9 != 0) {
    iVar2 = *(int *)(iVar2 + 0x24);
    iVar9 = *(int *)(iVar2 + 0x24);
  }
  iVar3 = *(int *)(iVar2 + 0x4c) - *(int *)(param_1 + 0x4c);
  iVar8 = *(int *)(iVar2 + 0x50) - *(int *)(param_1 + 0x50);
  iVar9 = sub_080C88E8(iVar3 * 0x100 >> 0x10,iVar8 * 0x100 >> 0x10);
  uVar10 = ((uint)(iVar9 << 0x10) >> 0x18) - 0x40 & 0xff;
  bVar15 = *(char *)(iVar2 + 0xe) != '\x05';
  if ((*(byte *)(iVar14 + 10) & 0x10) == 0) {
    if (!bVar15) goto LAB_08055d5c;
  }
  else if (bVar15) {
LAB_08055d5c:
    uVar4 = (int)((0x100 - uVar10) * 3) >> 5;
    goto LAB_08055d74;
  }
  uVar4 = (int)(uVar10 * -0x18) >> 8;
LAB_08055d74:
  uVar10 = uVar10 + (uVar4 & 0xff);
  *(char *)(param_1 + 0x1f) = (char)uVar10;
  uVar10 = (uVar10 & 0xff) + 0x40 & 0xff;
  bVar1 = *(byte *)(iVar2 + 0xc4);
  iVar9 = *(int *)(param_1 + 0x24);
  iVar14 = *(int *)(param_1 + 0x4c);
  iVar12 = *(int *)(param_1 + 0x50);
  iVar3 = iVar3 * iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar8 = iVar8 * iVar8;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = sub_080C88FC((iVar3 >> 8) + (iVar8 >> 8));
  iVar8 = sub_080C8AD0((uint)(iVar3 << 0x10) >> 0xc,bVar1 + 1);
  iVar3 = iVar8 * (short)(&DAT_080c8e24)[uVar10 + 0x40];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = iVar3 >> 8;
  iVar5 = iVar8 * (short)(&DAT_080c8e24)[uVar10];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar5 = iVar5 >> 8;
  for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x24)) {
    iVar14 = iVar14 + iVar3;
    iVar12 = iVar12 + iVar5;
    iVar11 = *(int *)(iVar2 + 0x4c) - iVar14;
    iVar13 = *(int *)(iVar2 + 0x50) - iVar12;
    iVar6 = iVar11 * iVar11;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar7 = iVar13 * iVar13;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar6 = sub_080C88FC((iVar6 >> 8) + (iVar7 >> 8));
    uVar10 = (uint)(iVar6 << 0x10) >> 0xc;
    iVar6 = sub_080C8AD0(iVar11 * 0x100,uVar10);
    iVar11 = sub_080C8AD0(iVar13 * 0x100,uVar10);
    iVar6 = iVar8 * iVar6;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar6 = iVar6 >> 8;
    iVar11 = iVar8 * iVar11;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    iVar11 = iVar11 >> 8;
    iVar3 = iVar3 * 0xc0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    if (iVar6 < 0) {
      iVar6 = iVar6 + 3;
    }
    iVar3 = (iVar3 >> 8) + (iVar6 >> 2);
    iVar5 = iVar5 * 0xc0;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    if (iVar11 < 0) {
      iVar11 = iVar11 + 3;
    }
    iVar5 = (iVar5 >> 8) + (iVar11 >> 2);
    *(int *)(iVar9 + 0x4c) = iVar14;
    *(int *)(iVar9 + 0x50) = iVar12;
    *(int *)(iVar9 + 0x5c) = iVar14;
    *(int *)(iVar9 + 0x60) = iVar12;
    *(undefined4 *)(iVar9 + 0x54) = 0;
    *(undefined4 *)(iVar9 + 0x58) = 0;
    sub_080C88E8((int)(short)iVar3,(int)(short)iVar5);
    *(char *)(iVar9 + 0x1f) = extraout_var + -0x40;
  }
  return in_lr;
}

