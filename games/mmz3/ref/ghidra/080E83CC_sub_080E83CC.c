// sub_080E83CC at 0x080E83CC (thumb)

void sub_080E83CC(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar9 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar9 + 0xdd9) != '\0') {
    FUN_080e9024();
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    sub_080041E4();
  }
  if ((*(char *)(iVar9 + 2) == '\x02') && (*(byte *)(param_1 + 0xd) < 2)) {
    *(undefined *)(param_1 + 0xd) = 3;
  }
  if (*(char *)(param_1 + 0x10) != -0x50) goto switchD_080e8416_caseD_c;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 1;
LAB_080e8582:
      sub_08017700(param_1,uVar6 | uVar3);
LAB_080e858a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x73) != '\x03') break;
    *(undefined *)(param_1 + 0x12) = 0x10;
    goto LAB_080e858a;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
    uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
    uVar3 = 0x16;
    goto LAB_080e8582;
  case 4:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 0x17;
      goto LAB_080e8582;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 0x18;
      goto LAB_080e8582;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 8;
      goto LAB_080e858a;
    }
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 0x10;
      goto LAB_080e8582;
    }
    break;
  case 8:
    if ('\x03' < *(char *)(param_1 + 0x71)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1700;
      goto LAB_080e858a;
    }
    break;
  case 9:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x60;
    if ('\x04' < *(char *)(param_1 + 0x71)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xc00;
      goto LAB_080e858a;
    }
    break;
  case 10:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x60;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 0x10;
      goto LAB_080e858a;
    }
    break;
  case 0xb:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 10;
      goto LAB_080e8582;
    }
  }
switchD_080e8416_caseD_c:
  if (*(char *)(param_1 + 0x10) != -0x4f) goto switchD_080e85a8_caseD_c;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      uVar3 = *(ushort *)(param_1 + 0x78) & 0xff00 | 0xc;
LAB_080e8a84:
      sub_08017700(param_1,uVar3);
LAB_080e8a8a:
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080e8a8e:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x71) < '\x03') break;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
    goto LAB_080e8a8a;
  case 3:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar9 = *(int *)(param_1 + 0x5c) + 0x38;
    *(int *)(param_1 + 0x5c) = iVar9;
    if (0x80 < iVar9) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0xd);
      *(undefined *)(param_1 + 0x12) = 4;
      goto LAB_080e8a8a;
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x73) != '\x03') break;
    uVar3 = *(ushort *)(param_1 + 0x78) & 0xff00 | 0xe;
    goto LAB_080e8a84;
  case 5:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar3 = *(ushort *)(param_1 + 0x78) & 0xff00 | 0xf;
      goto LAB_080e8a84;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 0x10;
      goto LAB_080e8a8a;
    }
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x11);
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
      goto LAB_080e8a8a;
    }
    break;
  case 8:
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar9 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar9;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0xc0;
      if (0 < iVar9) {
        uVar3 = *(ushort *)(param_1 + 0x78) & 0xff00 | 0x12;
        goto LAB_080e8a84;
      }
    }
    break;
  case 9:
    iVar9 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar9;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
    if (*(int *)(param_1 + 0x68) < iVar9) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x13);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
      goto LAB_080e8a8a;
    }
    break;
  case 10:
    if ('\x01' < *(char *)(param_1 + 0x71)) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 3);
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff40;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
      goto LAB_080e8a8a;
    }
    break;
  case 0xb:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar9 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar9;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar9 <= *(int *)(param_1 + 0x68)) break;
    sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
    cVar1 = 'd';
    goto LAB_080e8a8e;
  case 100:
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x65:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
    uVar3 = *(ushort *)(param_1 + 0x78) & 0xff00 | 0x16;
    goto LAB_080e8a84;
  case 0x66:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar3 = *(ushort *)(param_1 + 0x78) & 0xff00 | 0x17;
      goto LAB_080e8a84;
    }
    break;
  case 0x67:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x18);
      *(undefined *)(param_1 + 0x12) = 0x10;
      goto LAB_080e8a8a;
    }
    break;
  case 0x68:
  case 0x6a:
  case 0x6c:
  case 0x6e:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x19);
      *(undefined *)(param_1 + 0x12) = 0x10;
      goto LAB_080e8a8a;
    }
    break;
  case 0x69:
  case 0x6b:
  case 0x6d:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x18);
      *(undefined *)(param_1 + 0x12) = 0x10;
      goto LAB_080e8a8a;
    }
    break;
  case 0x6f:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x1a);
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      goto LAB_080e8a8a;
    }
    break;
  case 0x70:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar3 = *(ushort *)(param_1 + 0x78) & 0xff00;
      goto LAB_080e8a84;
    }
  }
switchD_080e85a8_caseD_c:
  if (*(char *)(param_1 + 0x10) != -0x4e) goto switchD_080e8aa8_caseD_e;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x80;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x12) = 0x10;
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 1;
LAB_080e8c8e:
      sub_08017700(param_1,uVar6 | uVar3);
LAB_080e8c96:
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080e8c9a:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 2:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x40;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
    sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00);
    *(undefined *)(param_1 + 0x12) = 0x20;
    goto LAB_080e8c96;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 4);
      *(undefined *)(param_1 + 0x12) = 0x3c;
      goto LAB_080e8c96;
    }
    break;
  case 4:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x20;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
    uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
    uVar3 = 5;
    goto LAB_080e8c8e;
  case 5:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 9;
      goto LAB_080e8c8e;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 10;
      goto LAB_080e8c8e;
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 0xb;
      goto LAB_080e8c8e;
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 0xc;
      goto LAB_080e8c8e;
    }
    break;
  case 9:
    if (*(char *)(param_1 + 0x73) != '\x03') break;
    *(undefined *)(param_1 + 0x12) = 8;
    cVar1 = '\r';
    goto LAB_080e8c9a;
  case 10:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0xe);
      *(undefined *)(param_1 + 0x12) = 8;
      goto LAB_080e8c96;
    }
    break;
  case 0xb:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 0xf;
      goto LAB_080e8c8e;
    }
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 8;
      goto LAB_080e8c96;
    }
    break;
  case 0xd:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      uVar6 = *(ushort *)(param_1 + 0x78) & 0xff00;
      uVar3 = 0x14;
      goto LAB_080e8c8e;
    }
  }
switchD_080e8aa8_caseD_e:
  if (*(char *)(param_1 + 0x10) != -0x4d) goto switchD_080e8cb4_caseD_f;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 1);
LAB_080e8f98:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x73) != '\x03') break;
    sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 2);
    *(undefined *)(param_1 + 0x12) = 0;
    goto LAB_080e8f98;
  case 3:
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if ((bVar2 & 1) == 0) {
      iVar9 = *(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x12) * -0x80;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x12) * 0x80;
    }
    *(int *)(param_1 + 0x54) = iVar9;
    if (0x78 < *(byte *)(param_1 + 0x12)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      *(undefined4 *)(param_1 + 100) = 0x28;
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0xc);
      goto LAB_080e8f98;
    }
    break;
  case 4:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar9 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar9;
    if (-0x100 < iVar9) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0xd);
      goto LAB_080e8f98;
    }
    break;
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar8 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar8;
    iVar4 = *(int *)(param_1 + 100) * 10;
    iVar9 = iVar8 + iVar4;
    if (iVar9 != 0 && iVar9 < 0 == SCARRY4(iVar8,iVar4)) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00);
      *(undefined *)(param_1 + 0x12) = 8;
      goto LAB_080e8f98;
    }
    break;
  case 6:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 3);
      goto LAB_080e8f98;
    }
    break;
  case 7:
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc40;
      uVar5 = FUN_080fe2f8(*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x54),0x1e);
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
      goto LAB_080e8f98;
    }
    break;
  case 8:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar9 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar9;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(int *)(param_1 + 0x68) < iVar9) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 4);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
      *(undefined *)(param_1 + 0x12) = 0x20;
      goto LAB_080e8f98;
    }
    break;
  case 9:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x16);
      goto LAB_080e8f98;
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 8;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080e8f98;
    }
    break;
  case 0xb:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x17);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      iVar9 = *(int *)(param_1 + 0x58) + -0x1c00;
LAB_080e8f96:
      *(int *)(param_1 + 0x58) = iVar9;
      goto LAB_080e8f98;
    }
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x18);
      *(undefined *)(param_1 + 0x12) = 8;
      goto LAB_080e8f98;
    }
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 8;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080e8f98;
    }
    break;
  case 0xe:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08017700(param_1,*(ushort *)(param_1 + 0x78) & 0xff00 | 0x19);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      iVar9 = *(int *)(param_1 + 0x58) + 0x1c00;
      goto LAB_080e8f96;
    }
  }
switchD_080e8cb4_caseD_f:
  sub_080177F4(param_1);
  bVar2 = *(byte *)(param_1 + 0xd);
  if (bVar2 == 1) {
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
      pbVar7 = (byte *)(param_1 + 0x7c);
      bVar2 = *pbVar7;
      *pbVar7 = bVar2 + 2;
      if (0xf < (byte)(bVar2 + 2)) {
        *pbVar7 = 0x10;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
  }
  else if (bVar2 == 2) {
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x7c) = 8;
  }
  else if (bVar2 == 3) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 8);
    sub_080E9064(param_1);
    goto LAB_080e9058;
  }
  DAT_02002402 = *(byte *)(param_1 + 0x7c) & 0x1f |
                 (0x10 - (ushort)*(byte *)(param_1 + 0x7c)) * 0x100;
LAB_080e9058:
                    /* WARNING: Could not recover jumptable at 0x080e905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

