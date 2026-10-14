// sub_080A7E58 at 0x080A7E58 (thumb)

undefined4 sub_080A7E58(int param_1)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  undefined uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar5 = 0xffffffd0;
    }
    else {
      uVar5 = 0x30;
    }
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * 0x18;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffce0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffff00;
    uVar4 = 0x20;
    break;
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    puVar8 = (ushort *)(param_1 + 0xbc);
    iVar10 = (uint)*puVar8 + *(int *)(param_1 + 0x68);
    *puVar8 = (ushort)iVar10;
    if (iVar10 * 0x10000 >> 0x10 < -0xa00) {
      *puVar8 = 0xf600;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_080a7e74_caseD_7;
    sub_0801CE54(param_1);
    *(undefined *)(param_1 + 0x22) = 0;
    sub_0801CF00(param_1,0x8d04);
    sub_08005784(param_1 + 0x74,&DAT_0885f248);
    uVar4 = 8;
    break;
  case 2:
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x18';
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_080a7e74_caseD_7;
    iVar10 = *(int *)(iVar10 + 0xc4);
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar5 = 0xffffffc0;
    }
    else {
      uVar5 = 0x40;
    }
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 3;
    iVar10 = (iVar10 + -0x3000) - *(int *)(param_1 + 0x58);
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xf;
    }
    *(int *)(param_1 + 0x60) = iVar10 >> 4;
    uVar4 = 0x10;
    break;
  case 3:
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x18';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    puVar8 = (ushort *)(param_1 + 0xbc);
    uVar1 = *puVar8;
    *puVar8 = uVar1 + 0x200;
    if (0 < (int)((uint)(ushort)(uVar1 + 0x200) * 0x10000)) {
      *puVar8 = 0;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_080a7e74_caseD_7;
    goto LAB_080a812a;
  case 4:
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x18';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    psVar9 = (short *)(param_1 + 0xbc);
    sVar2 = *psVar9;
    *psVar9 = sVar2 + 0x100;
    if (0x600 < (short)(sVar2 + 0x100)) {
      *psVar9 = 0x600;
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      if (*(int *)(iVar10 + 0x54) + 0x1a00 <= *(int *)(param_1 + 0x54))
      goto switchD_080a7e74_caseD_7;
      sub_0801CC9C(param_1);
      *(undefined *)(param_1 + 0x22) = 0;
      sub_0801CF00(param_1,0x8d04);
      *(int *)(param_1 + 0x54) = *(int *)(iVar10 + 0x54) + 0x1a00;
      sub_0801FE64(8,param_1 + 0x54);
      uVar4 = 0x20;
      break;
    }
    if (*(int *)(param_1 + 0x54) <= *(int *)(iVar10 + 0x54) + -0x1a00)
    goto switchD_080a7e74_caseD_7;
    sub_0801CC9C(param_1);
    *(undefined *)(param_1 + 0x22) = 0;
    sub_0801CF00(param_1,0x8d04);
    *(int *)(param_1 + 0x54) = *(int *)(iVar10 + 0x54) + -0x1a00;
    sub_0801FE64(8,param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_08002B10(0x38);
    goto LAB_080a812a;
  case 5:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_080a7e74_caseD_7;
    *(undefined *)(param_1 + 0x22) = 1;
    sub_0801CF00(param_1,0x8d05);
    sub_08005784(param_1 + 0x74,&DAT_0885f218);
    iVar10 = *(int *)(param_1 + 0xb8);
    iVar11 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    iVar6 = FUN_081288bc(iVar11 * -2,0x240);
    *(int *)(param_1 + 100) = iVar6;
    iVar10 = iVar10 - *(int *)(param_1 + 0x58);
    iVar7 = FUN_081288bc(iVar10 * -2,0x240);
    *(int *)(param_1 + 0x68) = iVar7;
    iVar11 = FUN_081288bc(iVar11,0xc);
    *(int *)(param_1 + 0x5c) = iVar11;
    iVar10 = FUN_081288bc(iVar10,0xc);
    *(int *)(param_1 + 0x5c) = iVar11 + (iVar6 >> 1);
    *(int *)(param_1 + 0x60) = iVar10 + (iVar7 >> 1);
    uVar4 = 0x18;
    break;
  case 6:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    psVar9 = (short *)(param_1 + 0xbc);
    sVar2 = *psVar9;
    *psVar9 = sVar2 + 0x100;
    if (0x800 < (short)(sVar2 + 0x100)) {
      *psVar9 = 0x800;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xbf) = 0;
    }
  default:
    goto switchD_080a7e74_caseD_7;
  }
  *(undefined *)(param_1 + 0x12) = uVar4;
LAB_080a812a:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a7e74_caseD_7:
  sub_0801CFF0(param_1);
  return in_lr;
}

