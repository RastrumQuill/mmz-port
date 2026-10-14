// sub_080746CC at 0x080746CC (thumb)

undefined4 sub_080746CC(int param_1)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  ushort *puVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x9301);
    if (*(char *)(param_1 + 0xe2) == '\0') {
      uVar4 = 0x200;
    }
    else {
      uVar4 = 0xfe00;
    }
    *(undefined2 *)(param_1 + 200) = uVar4;
    *(undefined2 *)(param_1 + 0xca) = uVar4;
    *(undefined2 *)(param_1 + 0xdc) = 0;
    *(undefined2 *)(param_1 + 0xca) = *(undefined2 *)(param_1 + 200);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar11 = (byte *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*pbVar11] * 4;
  *pbVar11 = *pbVar11 + 1;
  pbVar11 = (byte *)(param_1 + 0xe1);
  uVar13 = (uint)*pbVar11;
  uVar12 = uVar13 + 1 & 1;
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 200) + *(short *)(param_1 + 0xc4);
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xca) + *(short *)(param_1 + 0xc6);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    puVar9 = (ushort *)(param_1 + 0xc0 + uVar12 * 2);
    uVar1 = *puVar9;
    *puVar9 = (ushort)(uVar1 - 0x80);
    if (0x1fff0000 < (int)((uVar1 - 0x80) * 0x10000)) goto switchD_0807476c_caseD_5;
    *puVar9 = 0x2000;
    cVar3 = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 1:
    bVar2 = false;
    if (*(char *)(param_1 + 0xe2) == '\0') {
      puVar9 = (ushort *)(param_1 + 200 + uVar13 * 2);
      uVar1 = *puVar9;
      *puVar9 = (ushort)(uVar1 - 0x40);
      if (-0x201 < (int)((uVar1 - 0x40) * 0x10000) >> 0x10) goto LAB_08074802;
      *puVar9 = 0xfe00;
    }
    else {
      psVar8 = (short *)(param_1 + 200 + uVar13 * 2);
      sVar5 = *psVar8;
      *psVar8 = sVar5 + 0x40;
      if (0x200 < (short)(sVar5 + 0x40)) {
        *psVar8 = 0x200;
        bVar2 = true;
      }
LAB_08074802:
      if (!bVar2) goto switchD_0807476c_caseD_5;
    }
    *(undefined2 *)(param_1 + 0xdc) = 0x200;
    cVar3 = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 2:
    sVar5 = *(short *)(param_1 + 0xdc) + -1;
    *(short *)(param_1 + 0xdc) = sVar5;
    if (sVar5 != -1) goto switchD_0807476c_caseD_5;
    *(undefined2 *)(param_1 + 0xdc) = 0;
    cVar3 = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 3:
    if (*(char *)(param_1 + 0xe2) == '\0') {
      puVar9 = (ushort *)(param_1 + 200 + uVar12 * 2);
      uVar1 = *puVar9;
      *puVar9 = (ushort)(uVar1 - 0x80);
      if (-0x180 < (int)((uVar1 - 0x80) * 0x10000) >> 0x10) goto switchD_0807476c_caseD_5;
      *puVar9 = 0xfe80;
      cVar3 = *(char *)(param_1 + 0xf) + '\x01';
    }
    else {
      puVar9 = (ushort *)(param_1 + 200 + uVar12 * 2);
      uVar1 = *puVar9;
      *puVar9 = uVar1 + 0x80;
      if ((int)((uint)(ushort)(uVar1 + 0x80) * 0x10000) < 0x17f0001) goto switchD_0807476c_caseD_5;
      *puVar9 = 0x180;
      cVar3 = *(char *)(param_1 + 0xf) + '\x01';
    }
    break;
  case 4:
    iVar14 = 0;
    iVar6 = uVar12 * 2;
    iVar10 = param_1 + 200;
    iVar7 = (int)*(short *)(iVar10 + iVar6);
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    if (iVar7 == 0x200) {
      iVar14 = 1;
    }
    else {
      uVar13 = *(ushort *)(param_1 + 0xc4) & 0x3fff;
      uVar12 = *(ushort *)(param_1 + 0xc6) & 0x3fff;
      iVar7 = uVar13 - uVar12;
      if (iVar7 < 0) {
        iVar7 = uVar12 - uVar13;
      }
      if (iVar7 < 0x101) {
        psVar8 = (short *)(param_1 + 0xc4 + iVar6);
        *psVar8 = ((*(ushort *)(param_1 + 0xc4) & 0x3fff) - (*(ushort *)(param_1 + 0xc6) & 0x3fff))
                  + *psVar8;
        if (*(char *)(param_1 + 0xe2) == '\0') {
          *(undefined2 *)(iVar10 + iVar6) = 0xfe00;
        }
        else {
          *(undefined2 *)(iVar10 + iVar6) = 0x200;
        }
      }
    }
    psVar8 = (short *)(param_1 + 0xc0 + iVar6);
    sVar5 = *psVar8;
    *psVar8 = sVar5 + 0x20;
    if (0x3000 < (short)(sVar5 + 0x20)) {
      *psVar8 = 0x3000;
      iVar14 = iVar14 + 1;
    }
    if (iVar14 != 2) goto switchD_0807476c_caseD_5;
    *(byte *)(param_1 + 0xe2) = *(byte *)(param_1 + 0xe2) + 1 & 1;
    *pbVar11 = *pbVar11 + 1 & 1;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    cVar3 = '\x01';
    break;
  default:
    goto switchD_0807476c_caseD_5;
  }
  *(char *)(param_1 + 0xf) = cVar3;
switchD_0807476c_caseD_5:
  sub_0801CFF0(param_1);
  return in_lr;
}

