// sub_080C8EF4 at 0x080C8EF4 (thumb)

undefined4 sub_080C8EF4(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
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
  if ((*(byte *)(param_1 + 0xd) < 3) && (1 < *(byte *)(iVar11 + 0xc)))
  goto switchD_080c9166_caseD_1;
  sub_0801CFF0(param_1);
  uVar3 = *(undefined *)(param_1 + 0x11);
  iVar5 = sub_08128A24(uVar3,6);
  iVar7 = *(int *)(iVar11 + 0x54) + *(int *)(&DAT_08862c80 + ((uint)(iVar5 << 0x18) >> 0x16));
  iVar5 = sub_08128A9C(uVar3,6);
  iVar5 = *(int *)(iVar11 + 0x58) + *(int *)(&DAT_08862c68 + ((uint)(iVar5 << 0x18) >> 0x16));
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if ((bVar2 & 3) < 2) {
      iVar11 = *(int *)(param_1 + 0x54) + -0x100;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x54) + 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar11;
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
    if (*(byte *)(param_1 + 0x12) < 3) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08862b48,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x12) = 0xc;
    break;
  case 1:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    iVar10 = *(int *)(param_1 + 0x54);
    iVar11 = FUN_081288bc(iVar10 - iVar7,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x54) = iVar10 - iVar11;
    iVar7 = *(int *)(param_1 + 0x58);
    iVar11 = FUN_081288bc(iVar7 - iVar5,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x58) = iVar7 - iVar11;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08002B10(0x134);
    break;
  case 2:
    *(int *)(param_1 + 0x54) = iVar7;
    *(int *)(param_1 + 0x58) = iVar5;
    if (*(byte *)(iVar11 + 0xd) < 3) {
      return in_lr;
    }
    uVar3 = *(undefined *)(param_1 + 0x11);
    bVar2 = sub_08128A9C(uVar3,6);
    if ((byte)(bVar2 - 2) < 2) goto switchD_080c9166_caseD_1;
    if (*(int *)(iVar11 + 0x5c) < 1) {
      *(undefined4 *)(param_1 + 0x5c) = 0x380;
      iVar11 = 8;
      if (bVar2 < 3) {
        iVar11 = 0xf8;
      }
    }
    else {
      iVar11 = 0x78;
      if (bVar2 < 3) {
        iVar11 = 0x88;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc80;
    }
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 + ((uint)((iVar11 + 0x40) * 0x1000000) >> 0x17)) * 7 >> 1;
    *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[iVar11] * 7 >> 1;
    bVar2 = sub_08128A9C(uVar3,6);
    if (bVar2 < 3) {
      uVar6 = 0xffffff40;
    }
    else {
      uVar6 = 0xc0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    break;
  case 3:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar4 = sub_08007C7C();
    if (sVar4 == 0) {
      return in_lr;
    }
    if (0 < *(int *)(param_1 + 0x60)) {
switchD_080c9166_caseD_1:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080C8508(param_1);
      return in_lr;
    }
    uVar3 = sub_08128A24(*(undefined *)(param_1 + 0x11),3);
    switch(uVar3) {
    case 0:
    case 3:
      sub_08002B10(0x38);
      *(undefined4 *)(param_1 + 0x60) = 0xfffff900;
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar6 = 0xc0;
      }
      else {
        uVar6 = 0xffffff40;
      }
      break;
    case 1:
    case 4:
      goto switchD_080c9166_caseD_1;
    case 2:
    case 5:
      sub_08002B10(0x38);
      *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar6 = 0x200;
      }
      else {
        uVar6 = 0xfffffe00;
      }
      break;
    default:
      goto switchD_080c9166_caseD_6;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
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
    goto switchD_080c8f54_caseD_5;
  }
switchD_080c9166_caseD_6:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c8f54_caseD_5:
  return in_lr;
}

