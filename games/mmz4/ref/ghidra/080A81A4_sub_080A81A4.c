// sub_080A81A4 at 0x080A81A4 (thumb)

undefined4 sub_080A81A4(int param_1)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  undefined uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar9 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar5 = 0x30;
    }
    else {
      uVar5 = 0xffffffd0;
    }
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * 0x18;
    iVar9 = *(int *)(param_1 + 0x58) - (*(int *)(iVar9 + 0xc4) + -0xa000);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0x1f;
    }
    *(int *)(param_1 + 0x60) = -(iVar9 >> 5);
    uVar4 = 0x20;
    break;
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    psVar8 = (short *)(param_1 + 0xbc);
    sVar2 = *psVar8;
    *psVar8 = sVar2 + -0x100;
    if ((short)(sVar2 + -0x100) < -0x1400) {
      *psVar8 = -0x1400;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar9 = *(int *)(iVar9 + 0x54) + -0x1700;
      if (iVar9 < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x54) = iVar9;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
      }
    }
    else {
      iVar9 = *(int *)(iVar9 + 0x54) + 0x1700;
      if (*(int *)(param_1 + 0x54) < iVar9) {
        *(int *)(param_1 + 0x54) = iVar9;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
      }
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_080a81c0_caseD_6;
    sub_0801CE54(param_1);
    *(undefined *)(param_1 + 0x22) = 0;
    sub_0801CF00(param_1,0x8d04);
    sub_08005784(param_1 + 0x74,&DAT_0885f260);
    uVar4 = 8;
    break;
  case 2:
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x18';
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_080a81c0_caseD_6;
    iVar9 = (*(int *)(iVar9 + 0xc4) + -0x1400) - *(int *)(param_1 + 0x58);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xf;
    }
    *(int *)(param_1 + 0x60) = iVar9 >> 4;
    uVar4 = 0x10;
    break;
  case 3:
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x18';
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    puVar7 = (ushort *)(param_1 + 0xbc);
    uVar1 = *puVar7;
    *puVar7 = (ushort)(uVar1 + 0x200);
    if (0x800 < (int)((uVar1 + 0x200) * 0x10000) >> 0x10) {
      *puVar7 = 0x800;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_080a81c0_caseD_6;
    sub_0801CC9C(param_1);
    *(undefined *)(param_1 + 0x22) = 0;
    sub_0801CF00(param_1,0x8d04);
    if (*(char *)(param_1 + 0x11) == '\0') {
      local_24 = *(int *)(param_1 + 0x54) + 0x1700;
    }
    else {
      local_24 = *(int *)(param_1 + 0x54) + -0x1700;
    }
    local_20 = *(undefined4 *)(iVar9 + 0xc4);
    sub_080CACD8(&local_24,0,*(undefined *)(param_1 + 0x11),0);
    sub_0801FE64(8,param_1 + 0x54);
    sub_08002B10(0x38);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xc0) = 0;
    goto LAB_080a843a;
  case 4:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_080a81c0_caseD_6;
    *(undefined *)(param_1 + 0x22) = 1;
    sub_0801CF00(param_1,0x8d05);
    sub_08005784(param_1 + 0x74,&DAT_0885f218);
    local_1c = *(int *)(param_1 + 0xb8);
    iVar10 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    iVar9 = FUN_081288bc(iVar10 * -2,0x240);
    *(int *)(param_1 + 100) = iVar9;
    iVar11 = local_1c - *(int *)(param_1 + 0x58);
    iVar6 = FUN_081288bc(iVar11 * -2,0x240);
    *(int *)(param_1 + 0x68) = iVar6;
    iVar10 = FUN_081288bc(iVar10,0xc);
    *(int *)(param_1 + 0x5c) = iVar10;
    iVar11 = FUN_081288bc(iVar11,0xc);
    *(int *)(param_1 + 0x5c) = iVar10 + (iVar9 >> 1);
    *(int *)(param_1 + 0x60) = iVar11 + (iVar6 >> 1);
    uVar4 = 0x18;
    break;
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    psVar8 = (short *)(param_1 + 0xbc);
    sVar2 = *psVar8;
    *psVar8 = sVar2 + 0x100;
    if (0x800 < (short)(sVar2 + 0x100)) {
      *psVar8 = 0x800;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080a81c0_caseD_6;
  }
  *(undefined *)(param_1 + 0x12) = uVar4;
LAB_080a843a:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a81c0_caseD_6:
  sub_0801CFF0(param_1);
  return in_lr;
}

