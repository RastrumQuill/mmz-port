// sub_08108464 at 0x08108464 (thumb)

undefined4 sub_08108464(int param_1)

{
  byte bVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0x11) == '\0') {
    sVar2 = *(short *)(param_1 + 0x12);
    uVar7 = sVar2 - 1;
    *(ushort *)(param_1 + 0x12) = uVar7;
    if ((ushort)(sVar2 - 1U) < 0x3c) {
      if ((uVar7 & 2) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
  }
  puVar3 = (uint *)(param_1 + 0x8c);
  if (((*puVar3 & 4) != 0) && (*(int *)(param_1 + 0xb8) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 8);
    sub_08108678(param_1);
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x11) < 2) &&
     ((*(short *)(param_1 + 0x12) == 0 ||
      (uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), 0x8000 < uVar4)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    piVar5 = (int *)(param_1 + 0xb4);
    if ((*(int *)(param_1 + 0x58) < *piVar5) ||
       (sVar2 = sub_081086CC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)), sVar2 == 0))
    {
      sVar2 = sub_081086CC(*(undefined4 *)(param_1 + 0x54),*piVar5);
      if ((sVar2 != 0) &&
         (iVar8 = sub_0810870C(*(undefined4 *)(param_1 + 0x54),*piVar5),
         iVar8 < *(int *)(param_1 + 0x58) + -0x700)) {
        iVar8 = sub_0810873C(*(undefined4 *)(param_1 + 0x54),*piVar5);
        *piVar5 = iVar8;
      }
    }
    else {
      uVar6 = sub_0810870C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar6;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    iVar8 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    if (0x6ff < iVar8) {
      return in_lr;
    }
    *(int *)(param_1 + 0x60) = iVar8 + 0x40;
    return in_lr;
  }
  iVar8 = sub_0810870C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar10 = *(int *)(param_1 + 0x58);
  if (iVar8 < iVar10) {
    *(int *)(param_1 + 0x58) = iVar8;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if (iVar10 < iVar8) {
    iVar9 = *(int *)(param_1 + 0x60);
    if (iVar9 == 0) {
      if (iVar8 <= iVar10 + 0x700) {
        *(int *)(param_1 + 0x58) = iVar8;
        goto LAB_0810861a;
      }
      *(undefined4 *)(param_1 + 0x60) = 0x40;
      iVar10 = iVar10 + 0x40;
    }
    else {
      if (iVar9 < 0x700) {
        *(int *)(param_1 + 0x60) = iVar9 + 0x40;
      }
      iVar10 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
    *(int *)(param_1 + 0x58) = iVar10;
  }
LAB_0810861a:
  iVar8 = sub_0810876C(*(int *)(param_1 + 0x54) + -0x700,*(int *)(param_1 + 0x58) + 0x400);
  if (((iVar8 != 0) ||
      (iVar8 = sub_0810876C(*(int *)(param_1 + 0x54) + 0x700,*(int *)(param_1 + 0x58) + 0x400),
      iVar8 != 0)) &&
     (sVar2 = sub_081086CC(*(int *)(param_1 + 0x54) + iVar8,*(int *)(param_1 + 0x58) + -0x400),
     sVar2 == 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
  }
  return in_lr;
}

