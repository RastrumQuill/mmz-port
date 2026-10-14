// sub_0803A988 at 0x0803A988 (thumb)

undefined4 sub_0803A988(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x24);
  while ((iVar5 != 0 && (*(int *)(iVar5 + 0x24) != 0))) {
    iVar7 = *(int *)(iVar5 + 0x58) + 0x40;
    *(int *)(iVar5 + 0x58) = iVar7;
    *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + *(int *)(iVar5 + 0x54);
    *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + iVar7;
    iVar5 = *(int *)(iVar5 + 0x24);
  }
  iVar5 = *(int *)(param_1 + 0x24);
  while ((iVar5 != 0 && (iVar7 = *(int *)(iVar5 + 0x24), iVar7 != 0))) {
    iVar8 = *(int *)(iVar7 + 0x4c) - *(int *)(iVar5 + 0x4c);
    iVar3 = *(int *)(iVar7 + 0x50) - *(int *)(iVar5 + 0x50);
    iVar4 = iVar8 * iVar8;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = iVar3 * iVar3;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar4 = sub_080C88FC((iVar4 >> 8) + (iVar1 >> 8));
    uVar6 = (uint)(iVar4 << 0x10) >> 0xc;
    iVar8 = sub_080C8AD0(iVar8 * 0x100,uVar6);
    iVar3 = sub_080C8AD0(iVar3 * 0x100,uVar6);
    iVar4 = (uVar6 - 0x1400) * 0xa0;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar8 = (iVar4 >> 8) * iVar8;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar3 = (iVar4 >> 8) * iVar3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + (iVar8 >> 8);
    *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + (iVar3 >> 8);
    *(int *)(iVar7 + 0x4c) = *(int *)(iVar7 + 0x4c) - (iVar8 >> 8);
    *(int *)(iVar7 + 0x50) = *(int *)(iVar7 + 0x50) - (iVar3 >> 8);
    iVar5 = iVar7;
  }
  iVar5 = *(int *)(param_1 + 0xd0);
  if (*(char *)(param_1 + 0xd8) != '\0') {
    *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0x4c);
    *(int *)(iVar5 + 0x50) = *(int *)(*(int *)(param_1 + 0xcc) + 0x50) + 0x800;
  }
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 != 0) {
    uVar6 = 0;
    iVar7 = *(int *)(iVar5 + 0x24);
    if (iVar7 != 0) {
      iVar7 = sub_080C88E8((*(int *)(iVar5 + 0x4c) - *(int *)(iVar7 + 0x4c)) * 0x100 >> 0x10,
                           (*(int *)(iVar5 + 0x50) - *(int *)(iVar7 + 0x50)) * 0x100 >> 0x10);
      uVar2 = ((uint)(iVar7 << 0x10) >> 0x18) - 0x40;
      uVar6 = uVar2 & 0xff;
      *(char *)(param_1 + 0x1f) = (char)uVar2;
    }
    iVar7 = *(int *)(iVar5 + 0x4c);
    *(int *)(param_1 + 0x4c) = iVar7;
    *(int *)(param_1 + 0x4c) = iVar7 + (short)(&DAT_080c8e24)[uVar6] * -0x30;
    iVar7 = *(int *)(iVar5 + 0x50);
    *(int *)(param_1 + 0x50) = iVar7;
    *(int *)(param_1 + 0x50) = iVar7 + (short)(&DAT_080c8e24)[uVar6 + 0x40] * 0x30;
  }
  iVar7 = *(int *)(param_1 + 0xbc) + 0x800;
  for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x24)) {
    iVar4 = *(int *)(iVar5 + 0x50);
    if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    iVar3 = (*(int *)(iVar5 + 0x4c) - *(int *)(iVar5 + 0x5c)) * 0xfa;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar5 + 0x54) = iVar3 >> 8;
    *(int *)(iVar5 + 0x5c) = *(int *)(iVar5 + 0x4c);
    iVar3 = (iVar4 - *(int *)(iVar5 + 0x60)) * 0xfa;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar5 + 0x58) = iVar3 >> 8;
    *(int *)(iVar5 + 0x60) = iVar4;
    if ((*(ushort *)(iVar5 + 0x90) & 1) != 0) {
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

