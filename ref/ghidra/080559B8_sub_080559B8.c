// sub_080559B8 at 0x080559B8 (thumb)

undefined4 sub_080559B8(int param_1)

{
  bool bVar1;
  char extraout_var;
  int iVar2;
  uint uVar3;
  int iVar4;
  char extraout_var_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  uVar3 = *(byte *)(iVar2 + 0x13) + 0x40 & 0xff;
  iVar7 = ((int)-(*(uint *)(iVar2 + 0xbc) & 8) >> 0x1f & 0x800U) + 0x1c00;
  iVar4 = iVar7 * (short)(&DAT_080c8e24)[uVar3 + 0x40];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar4 = *(int *)(iVar2 + 0x4c) - (iVar4 >> 8);
  iVar7 = iVar7 * (short)(&DAT_080c8e24)[uVar3];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar8 = (*(int *)(iVar2 + 0x50) - (iVar7 >> 8)) + -0x900;
  *(int *)(param_1 + 0x4c) = iVar4;
  *(int *)(param_1 + 0x50) = iVar8;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar7 = *(int *)(param_1 + 0x24);
  sub_080C88E8((*(int *)(iVar7 + 0x4c) - iVar4) * 0x100 >> 0x10,
               (*(int *)(iVar7 + 0x50) - iVar8) * 0x100 >> 0x10);
  *(char *)(param_1 + 0x1f) = extraout_var + -0x40;
  for (; iVar4 = param_1, iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x24)) {
    iVar4 = *(int *)(iVar7 + 0x58) + 0x40;
    *(int *)(iVar7 + 0x58) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(iVar7 + 0x58) = 0x700;
    }
    *(int *)(iVar7 + 0x4c) = *(int *)(iVar7 + 0x4c) + *(int *)(iVar7 + 0x54);
    *(int *)(iVar7 + 0x50) = *(int *)(iVar7 + 0x50) + *(int *)(iVar7 + 0x58);
  }
  while (iVar7 = *(int *)(iVar4 + 0x24), iVar7 != 0) {
    iVar10 = *(int *)(iVar7 + 0x4c) - *(int *)(iVar4 + 0x4c);
    iVar9 = *(int *)(iVar7 + 0x50) - *(int *)(iVar4 + 0x50);
    sub_080C88E8(iVar10 * 0x100 >> 0x10,iVar9 * 0x100 >> 0x10);
    *(char *)(iVar7 + 0x1f) = extraout_var_00 + -0x40;
    iVar8 = iVar10 * iVar10;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar5 = iVar9 * iVar9;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = sub_080C88FC((iVar8 >> 8) + (iVar5 >> 8));
    uVar3 = (uint)(iVar8 << 0x10) >> 0xc;
    iVar10 = sub_080C8AD0(iVar10 * 0x100,uVar3);
    iVar9 = sub_080C8AD0(iVar9 * 0x100,uVar3);
    iVar8 = (uVar3 - 0x700) * 0xa0;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar10 = (iVar8 >> 8) * iVar10;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar9 = (iVar8 >> 8) * iVar9;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + (iVar10 >> 8);
    *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + (iVar9 >> 8);
    *(int *)(iVar7 + 0x4c) = *(int *)(iVar7 + 0x4c) - (iVar10 >> 8);
    *(int *)(iVar7 + 0x50) = *(int *)(iVar7 + 0x50) - (iVar9 >> 8);
    iVar4 = iVar7;
  }
  bVar1 = false;
  iVar4 = *(int *)(param_1 + 0x24);
  while (iVar7 = iVar4, iVar7 != 0) {
    iVar4 = *(int *)(iVar7 + 0x24);
    if ((bVar1) || (iVar4 == 0)) {
      iVar8 = sub_08007B30(*(undefined4 *)(iVar7 + 0x4c),*(undefined4 *)(iVar7 + 0x50));
      if (iVar8 < -0x2000) {
        iVar8 = sub_08007EE0(*(undefined4 *)(iVar7 + 0x4c),*(undefined4 *)(iVar7 + 0x50));
        if ((iVar8 < 0) ||
           (iVar8 = sub_08008120(*(undefined4 *)(iVar7 + 0x4c),*(undefined4 *)(iVar7 + 0x50)),
           0 < iVar8)) {
          *(int *)(iVar7 + 0x4c) = *(int *)(iVar7 + 0x4c) + iVar8;
        }
        uVar6 = *(undefined4 *)(iVar7 + 0x4c);
        iVar8 = *(int *)(iVar7 + 0x50) + -0x1000;
      }
      else {
        uVar6 = *(undefined4 *)(iVar7 + 0x4c);
        iVar8 = *(int *)(iVar7 + 0x50);
      }
      iVar8 = sub_08007B30(uVar6,iVar8);
      if (iVar8 < 0) {
        *(int *)(iVar7 + 0x50) = *(int *)(iVar7 + 0x50) + iVar8;
      }
    }
    bVar1 = (bool)(bVar1 ^ 1);
    if (iVar4 != 0) {
      iVar8 = (*(int *)(iVar7 + 0x4c) - *(int *)(iVar7 + 0x5c)) * 0xfa;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      *(int *)(iVar7 + 0x54) = iVar8 >> 8;
      iVar8 = (*(int *)(iVar7 + 0x50) - *(int *)(iVar7 + 0x60)) * 0xfa;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      *(int *)(iVar7 + 0x58) = iVar8 >> 8;
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x4c);
      *(int *)(iVar7 + 0x60) = *(int *)(iVar7 + 0x50);
    }
  }
  uVar3 = *(byte *)(iVar2 + 0x13) + 0x40 & 0xff;
  iVar7 = ((int)-(*(uint *)(iVar2 + 0xbc) & 8) >> 0x1f & 0x800U) + 0x1c00;
  iVar4 = iVar7 * (short)(&DAT_080c8e24)[uVar3 + 0x40];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar4 = *(int *)(iVar2 + 0x4c) - (iVar4 >> 8);
  iVar7 = iVar7 * (short)(&DAT_080c8e24)[uVar3];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (*(int *)(iVar2 + 0x50) - (iVar7 >> 8)) + -0x900;
  *(int *)(param_1 + 0x4c) = iVar4;
  *(int *)(param_1 + 0x50) = iVar2;
  *(int *)(param_1 + 0x5c) = iVar4;
  *(int *)(param_1 + 0x60) = iVar2;
  return in_lr;
}

