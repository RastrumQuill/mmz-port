// sub_0804C008 at 0x0804C008 (thumb)

undefined4 sub_0804C008(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xa80f);
    sub_08007390(param_1 + 0x74,&DAT_0835f910);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((bVar2 != 0) && (*(byte *)(param_1 + 0x12) = bVar2 - 1, (byte)(bVar2 - 1) != '\0')) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f718);
    sub_0800471C(0x84);
    *(undefined *)(param_1 + 0x12) = 10;
    break;
  case 2:
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 3:
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 & 1) == 0) {
      iVar5 = *(int *)(param_1 + 0x5c) + (((uint)bVar2 << 0x18) >> 0x1a) * -0x100;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x5c) + (uint)(bVar2 >> 2) * 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    sub_080177F4(param_1);
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 < 0x28) && (*(byte *)(param_1 + 0x12) = bVar2 + 1, (byte)(bVar2 + 1) < 0x28)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x30;
    bVar2 = *(byte *)(param_1 + 10);
    bVar1 = 0xfe;
LAB_0804c26e:
    bVar1 = bVar1 & bVar2;
LAB_0804c270:
    *(byte *)(param_1 + 10) = bVar1;
    break;
  case 4:
    goto switchD_0804c01e_caseD_4;
  case 5:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xa810);
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    piVar6 = (int *)(param_1 + 0xd0);
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + -0x7000;
    iVar9 = *piVar6;
    iVar11 = iVar9 - iVar5;
    if (iVar11 < 1) {
      iVar11 = iVar5 - iVar9;
    }
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + -0xb000;
    iVar8 = iVar9 - iVar5;
    if (iVar8 < 1) {
      iVar8 = iVar5 - iVar9;
    }
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + -0xf000;
    iVar7 = iVar9 - iVar5;
    if (iVar7 < 1) {
      iVar7 = iVar5 - iVar9;
    }
    if (iVar11 < iVar8) {
      iVar5 = 2;
      if (iVar7 <= iVar11) goto LAB_0804c1e0;
LAB_0804c1e4:
      iVar5 = *piVar6 + 0x7000;
    }
    else {
      iVar5 = 2;
      if (iVar8 < iVar7) {
        iVar5 = 1;
      }
LAB_0804c1e0:
      if (iVar5 == 0) goto LAB_0804c1e4;
      if (iVar5 == 1) {
        iVar5 = *piVar6 + 0xb000;
      }
      else {
        iVar5 = *piVar6 + 0xf000;
      }
    }
    *(int *)(param_1 + 100) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd4) + -0x3200;
    if (*(int *)(param_1 + 100) < *(int *)(DAT_0202f5c0 + 0x54)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
        goto LAB_0804c270;
      }
    }
    else if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar2 = *(byte *)(param_1 + 10);
      bVar1 = 0xef;
      goto LAB_0804c26e;
    }
    break;
  case 6:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 7:
    sub_08017700(param_1,0xa809);
    sub_0800471C(0x86);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x71) == '\x04') && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08007390(param_1 + 0x74,&DAT_0835f850);
    }
switchD_0804c01e_caseD_4:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
    break;
  case 9:
    uVar10 = 0;
    do {
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0x2a00;
      sub_080A0F00(param_1,&local_18,uVar10 & 0xff);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 6);
    uVar4 = 0x20;
    goto LAB_0804c30a;
  case 10:
  case 0xc:
    goto switchD_0804c01e_caseD_a;
  case 0xb:
    sub_08017700(param_1,0xa80a);
    uVar4 = 6;
LAB_0804c30a:
    *(undefined *)(param_1 + 0x12) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804c01e_caseD_a:
    sub_080177F4(param_1);
    goto switchD_0804c01e_caseD_4;
  case 0xd:
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_0804c01e_caseD_e;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804c01e_caseD_e:
  return in_lr;
}

