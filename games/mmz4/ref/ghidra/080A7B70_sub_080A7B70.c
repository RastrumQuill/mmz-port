// sub_080A7B70 at 0x080A7B70 (thumb)

undefined4 sub_080A7B70(int param_1)

{
  short sVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar4 = 0xffffffd0;
    }
    else {
      uVar4 = 0x30;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * 0x18;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffce0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffff00;
    uVar3 = 0x20;
    break;
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    puVar9 = (ushort *)(param_1 + 0xbc);
    iVar8 = (uint)*puVar9 + *(int *)(param_1 + 0x68);
    *puVar9 = (ushort)iVar8;
    if (iVar8 * 0x10000 >> 0x10 < -0xa00) {
      *puVar9 = 0xf600;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_080a7b8c_caseD_6;
    sub_0801CE54(param_1);
    *(undefined *)(param_1 + 0x22) = 0;
    sub_0801CF00(param_1,0x8d04);
    sub_08005784(param_1 + 0x74,&DAT_0885f230);
    *(undefined *)(param_1 + 0x25) = 0x13;
    uVar3 = 8;
    break;
  case 2:
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x18';
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_080a7b8c_caseD_6;
    iVar5 = *(int *)(DAT_0202dbf0 + 0x54);
    iVar6 = *(int *)(iVar8 + 0xc4);
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar8 = *(int *)(iVar8 + 0x54) + 0x1800;
      if (iVar8 < iVar5) goto LAB_080a7cb0;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x54) + -0x1800;
      if (iVar5 < iVar8) {
LAB_080a7cb0:
        iVar5 = iVar8;
      }
    }
    iVar5 = iVar5 - *(int *)(param_1 + 0x54);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 4;
    iVar8 = (iVar6 + -0x1400) - *(int *)(param_1 + 0x58);
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xf;
    }
    *(int *)(param_1 + 0x60) = iVar8 >> 4;
    *(undefined4 *)(param_1 + 0x68) = 0x200;
    uVar3 = 0x10;
    break;
  case 3:
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x18';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    puVar9 = (ushort *)(param_1 + 0xbc);
    iVar8 = (uint)*puVar9 + *(int *)(param_1 + 0x68);
    *puVar9 = (ushort)iVar8;
    if (0 < iVar8 * 0x10000) {
      *puVar9 = 0;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_080a7b8c_caseD_6;
    sub_0801CC9C(param_1);
    *(undefined *)(param_1 + 0x22) = 0;
    sub_0801CF00(param_1,0x8d04);
    *(undefined *)(param_1 + 0x25) = 0x13;
    sub_0801FE64(8,param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_08002B10(0x38);
    goto LAB_080a7dde;
  case 4:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_080a7b8c_caseD_6;
    *(undefined *)(param_1 + 0x22) = 1;
    sub_0801CF00(param_1,0x8d05);
    *(undefined *)(param_1 + 0x25) = 0x14;
    sub_08005784(param_1 + 0x74,&DAT_0885f218);
    iVar8 = *(int *)(param_1 + 0xb8);
    iVar10 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    iVar5 = FUN_081288bc(iVar10 * -2,0x240);
    *(int *)(param_1 + 100) = iVar5;
    iVar8 = iVar8 - *(int *)(param_1 + 0x58);
    iVar6 = FUN_081288bc(iVar8 * -2,0x240);
    *(int *)(param_1 + 0x68) = iVar6;
    iVar10 = FUN_081288bc(iVar10,0xc);
    *(int *)(param_1 + 0x5c) = iVar10;
    iVar8 = FUN_081288bc(iVar8,0xc);
    *(int *)(param_1 + 0x5c) = iVar10 + (iVar5 >> 1);
    *(int *)(param_1 + 0x60) = iVar8 + (iVar6 >> 1);
    uVar3 = 0x18;
    break;
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    psVar7 = (short *)(param_1 + 0xbc);
    sVar1 = *psVar7;
    *psVar7 = sVar1 + 0x100;
    if (0x800 < (short)(sVar1 + 0x100)) {
      *psVar7 = 0x800;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xbe) = 0;
    }
  default:
    goto switchD_080a7b8c_caseD_6;
  }
  *(undefined *)(param_1 + 0x12) = uVar3;
LAB_080a7dde:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a7b8c_caseD_6:
  sub_0801CFF0(param_1);
  return in_lr;
}

