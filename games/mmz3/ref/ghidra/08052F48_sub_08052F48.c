// sub_08052F48 at 0x08052F48 (thumb)

undefined4 sub_08052F48(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0xca) = 1;
    iVar5 = *(int *)(param_1 + 0x54);
    iVar8 = *(int *)(param_1 + 0xd8);
    if (iVar8 < iVar5) {
      if (iVar8 + (*(int *)(param_1 + 0xe0) >> 1) < iVar5) {
        uVar1 = 2;
LAB_08052fca:
        *(undefined *)(param_1 + 0xca) = uVar1;
      }
    }
    else if (iVar5 < iVar8 - (*(int *)(param_1 + 0xe0) >> 1)) {
      uVar1 = 0;
      goto LAB_08052fca;
    }
    *(undefined *)(param_1 + 0x12) = 0x18;
    uVar6 = FUN_080fe2f8(*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x54),0x18);
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    iVar8 = FUN_080fe2f8(0x8300,0x18);
    *(int *)(param_1 + 0x60) = -iVar8;
    *(undefined *)(param_1 + 0x12) = 0x17;
    sub_08017700(param_1,0xb015);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08052f5c_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080533e8:
      *(char *)(param_1 + 0xe) = cVar2;
    }
switchD_08052f5c_caseD_c:
    return in_lr;
  case 1:
    goto switchD_08052f5c_caseD_1;
  case 2:
    *(undefined *)(param_1 + 200) = 1;
    sub_08017700(param_1,0xb016);
    sub_08007390(param_1 + 0x74,&DAT_083601b8);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar8 = *(int *)(param_1 + 0x60) + 0x48;
    *(int *)(param_1 + 0x60) = iVar8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    if ((*(char *)(param_1 + 0x13) == '\0') && (0 < iVar8)) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08017700(param_1,0xb017);
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080533e8;
  case 4:
    iVar8 = 0;
    cVar2 = *(char *)(param_1 + 0xca);
    if (cVar2 == '\0') {
      piVar4 = (int *)(param_1 + 0xdc);
LAB_080530dc:
      iVar8 = *piVar4;
    }
    else {
      if (cVar2 == '\x01') {
        if (*(int *)(DAT_0202f5c0 + 0x54) <= *(int *)(param_1 + 0xd8)) goto LAB_080530d8;
        piVar4 = (int *)(param_1 + 0xdc);
        goto LAB_080530dc;
      }
      if (cVar2 == '\x02') {
LAB_080530d8:
        piVar4 = (int *)(param_1 + 0xd4);
        goto LAB_080530dc;
      }
    }
    iVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined *)(param_1 + 0x12) = 0x28;
    sub_080175BC(param_1);
    sub_080176EC(param_1);
    sub_08017700(param_1,0xb018);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x52;
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    uVar6 = FUN_080fe2f8(iVar8 - *(int *)(param_1 + 0x54),*(undefined *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    iVar8 = FUN_080fe2f8((uint)*(byte *)(param_1 + 0x12) *
                         ((int)(*(byte *)(param_1 + 0x12) + 1) >> 1) * 0x48 -
                         (iVar5 - *(int *)(param_1 + 0x58)));
    *(int *)(param_1 + 0x60) = -iVar8;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080533e8;
  case 6:
    if (*(int *)(param_1 + 0x5c) < 1) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    sub_0800471C(0xca);
    sub_08017700(param_1,0xb019);
    sub_08007390(param_1 + 0x74,&DAT_083601e8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2800;
    DAT_020305da = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    iVar8 = *(int *)(param_1 + 0x60) + 0x48;
    *(int *)(param_1 + 0x60) = iVar8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    puVar9 = (undefined *)(param_1 + 0x70);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar9) == -0x4fe7) {
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        uVar7 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
        if (uVar7 == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        iVar8 = 0xff;
        uVar7 = *(int *)(param_1 + 100) >> 4 & 0xff;
        if (uVar7 < 0x80) {
          iVar8 = 0xfe;
        }
        *(uint *)(param_1 + 100) = iVar8 - uVar7;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) << 4;
        sub_08017700(param_1,0xb01f);
      }
      else {
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        uVar7 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
        if (uVar7 == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        iVar8 = 0xff;
        uVar7 = *(int *)(param_1 + 100) >> 4 & 0xff;
        if (uVar7 < 0x80) {
          iVar8 = 0xfe;
        }
        *(uint *)(param_1 + 100) = iVar8 - uVar7;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) << 4;
        sub_08017700(param_1,0xb019);
      }
    }
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x5c) < 1) {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar9) != -0x4fe7) goto LAB_0805331c;
      iVar8 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x68);
    }
    else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar9) == -0x4fe7) {
      iVar8 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x68);
    }
    else {
LAB_0805331c:
      iVar8 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x68);
    }
    *(int *)(param_1 + 100) = iVar8;
    *(char *)(param_1 + 0x24) = (char)(*(int *)(param_1 + 100) >> 4);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080533e8;
  case 8:
    *(undefined *)(param_1 + 200) = 0;
    DAT_020305da = 4;
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    sub_08017700(param_1,0xb01a);
    sub_08007390(param_1 + 0x74,&DAT_083601b8);
    uVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x3c00);
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080533e8;
  case 10:
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    sub_08017700(param_1,0xb01b);
    sub_08007390(param_1 + 0x74,&DAT_083601b8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_080533e8;
  default:
    goto switchD_08052f5c_caseD_c;
  }
}

