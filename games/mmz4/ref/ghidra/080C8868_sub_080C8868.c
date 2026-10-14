// sub_080C8868 at 0x080C8868 (thumb)

undefined4 sub_080C8868(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint local_1c;
  
  iVar11 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0xd) < 3) && (1 < *(byte *)(iVar11 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C8508(param_1);
    return in_lr;
  }
  sub_0801CFF0(param_1);
  uVar1 = *(undefined *)(param_1 + 0x11);
  iVar5 = sub_08128A9C(uVar1,6);
  iVar7 = *(int *)(iVar11 + 0x54) + *(int *)(&DAT_08862bec + ((uint)(iVar5 << 0x18) >> 0x16));
  iVar5 = sub_08128A24(uVar1,6);
  iVar5 = *(int *)(iVar11 + 0x58) + *(int *)(&DAT_08862c04 + ((uint)(iVar5 << 0x18) >> 0x16));
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if ((bVar2 & 3) < 2) {
      iVar11 = *(int *)(param_1 + 0x54);
      iVar5 = -0x100;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x54);
      iVar5 = 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar11 + iVar5;
    uVar9 = *(byte *)(param_1 + 0x12) & 0xf;
    if (uVar9 == 1) {
      uVar8 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar8 & 0x7fffffff;
      local_24 = *(int *)(param_1 + 0x54) + ((uVar8 * 2 >> 0x11 & 3) - 2) * 0x100;
      local_1c = uVar9;
      local_20 = sub_08008534(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      uVar9 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar9 & 0x7fffffff;
      local_20 = local_20 + ((uVar9 * 2 >> 0x11 & local_1c) + 2) * 0x100;
      sub_080D0894(3,&local_24);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x20;
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if (*(byte *)(param_1 + 0x12) < 0x29) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08862b48,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 1:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    iVar10 = *(int *)(param_1 + 0x54);
    iVar11 = FUN_081288bc(iVar10 - iVar7,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x54) = iVar10 - iVar11;
    iVar7 = *(int *)(param_1 + 0x58);
    iVar11 = FUN_081288bc(iVar7 - iVar5,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x58) = iVar7 - iVar11;
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    uVar6 = 0x134;
    goto LAB_080c8ae4;
  case 2:
    *(int *)(param_1 + 0x54) = iVar7;
    *(int *)(param_1 + 0x58) = iVar5;
    if (*(char *)(iVar11 + 0xd) == '\x01') {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    if (*(byte *)(iVar11 + 0xd) < 3) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08862b48,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(int *)(iVar11 + 0x54) < *(int *)(param_1 + 0x54)) {
      uVar6 = 0x300;
    }
    else {
      uVar6 = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    break;
  case 3:
    iVar11 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar11;
    sVar4 = sub_08007C7C(iVar11,*(undefined4 *)(param_1 + 0x58));
    if (sVar4 == 0) {
      return in_lr;
    }
    cVar3 = sub_08128A24(*(undefined *)(param_1 + 0x11),6);
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar6 = 0x200;
      }
      else {
        uVar6 = 0xfffffe00;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0xfffff900;
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar6 = 0xc0;
      }
      else {
        uVar6 = 0xffffff40;
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    uVar6 = 0x38;
LAB_080c8ae4:
    sub_08002B10(uVar6);
    break;
  case 4:
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar11 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar11;
    if ((0 < iVar11) && (sVar4 = sub_08007C7C(iVar5), sVar4 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080C8508(param_1);
    }
  default:
    goto switchD_080c88e6_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c88e6_caseD_5:
  return in_lr;
}

