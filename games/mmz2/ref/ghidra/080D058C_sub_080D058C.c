// sub_080D058C at 0x080D058C (thumb)

undefined4 sub_080D058C(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x2c);
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CF5F8(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined *)(param_1 + 0x13) = 8;
    puVar7 = (ushort *)(param_1 + 0xbe);
    *puVar7 = *puVar7 + 0x10;
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar8 = *(int *)(param_1 + 0x5c) + 0x180;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x5c) + 0x100;
    }
    *(int *)(param_1 + 0x5c) = iVar8;
    if (*puVar7 < 0x80) goto switchD_080d05e6_caseD_e;
    break;
  case 1:
    uVar3 = *(ushort *)(param_1 + 0xbc) + 8;
    *(ushort *)(param_1 + 0xbc) = uVar3;
    if (uVar3 < 0x40) goto switchD_080d05e6_caseD_e;
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 2:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_080d05e6_caseD_e;
    uVar5 = sub_080CF56C(param_1,4,*(undefined *)(param_1 + 0x11));
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    break;
  case 3:
    if (*(byte *)(iVar8 + 0xd) < 3) goto switchD_080d05e6_caseD_e;
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 4:
    bVar1 = *(char *)(param_1 + 0x12) + 4;
    *(byte *)(param_1 + 0x12) = bVar1;
    *(byte *)(param_1 + 0x13) = (bVar1 >> 4) + *(char *)(param_1 + 0x13);
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 2;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 1;
    if (*(byte *)(param_1 + 0x13) < 0x41) goto switchD_080d05e6_caseD_e;
    break;
  case 5:
    bVar1 = *(char *)(param_1 + 0x12) - 8;
    *(byte *)(param_1 + 0x12) = bVar1;
    *(byte *)(param_1 + 0x13) = (bVar1 >> 4) + *(char *)(param_1 + 0x13);
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 2;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 1;
    if (0xf < *(byte *)(param_1 + 0x12)) goto switchD_080d05e6_caseD_e;
    break;
  case 6:
    bVar1 = *(char *)(param_1 + 0x12) + 3;
    *(byte *)(param_1 + 0x12) = bVar1;
    *(byte *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) - (bVar1 >> 4);
    *(char *)(param_1 + 0xbb) = *(char *)(param_1 + 0xbb) - (bVar1 >> 4);
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 2;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 1;
    if (0x3f < *(byte *)(param_1 + 0x13)) goto switchD_080d05e6_caseD_e;
    break;
  case 7:
    bVar1 = *(char *)(param_1 + 0x12) - 3;
    *(byte *)(param_1 + 0x12) = bVar1;
    *(byte *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) - (bVar1 >> 4);
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 2;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 1;
    if (0x2f < *(byte *)(param_1 + 0x13)) goto switchD_080d05e6_caseD_e;
    break;
  case 8:
    if (*(byte *)(iVar8 + 0xd) < 6) goto switchD_080d05e6_caseD_e;
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 9:
    cVar2 = sub_080EF150((int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)],0x14);
    *(char *)(param_1 + 0x13) = cVar2 + '0';
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
    if ((*(char *)(iVar4 + 0x10) != '\0') || (*(byte *)(iVar4 + 0xd) < 5))
    goto switchD_080d05e6_caseD_e;
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 10:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_080d05e6_caseD_e;
    *(undefined *)(param_1 + 0x12) = 0x30;
    break;
  case 0xb:
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    *(byte *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) - (bVar1 >> 4);
    puVar7 = (ushort *)(param_1 + 0xbc);
    if (*puVar7 < 0x11) {
      *(undefined *)(param_1 + 0x12) = 0x10;
      *puVar7 = 0x10;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      *puVar7 = *puVar7 - 8;
    }
    goto switchD_080d05e6_caseD_e;
  case 0xc:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    goto switchD_080d05e6_caseD_e;
  case 0xd:
    uVar3 = *(ushort *)(param_1 + 0xbe);
    if (uVar3 < 0x41) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080CF5F8(param_1);
    }
    else {
      *(ushort *)(param_1 + 0xbe) = uVar3 - 0x40;
    }
  default:
    goto switchD_080d05e6_caseD_e;
  case 0x65:
    if (0xff < *(ushort *)(iVar4 + 0x50)) goto switchD_080d05e6_caseD_e;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0xbc);
    *(undefined2 *)(param_1 + 0xc2) = *(undefined2 *)(param_1 + 0xbe);
    break;
  case 0x66:
    puVar7 = (ushort *)(iVar4 + 0x50);
    iVar8 = (uint)*(ushort *)(param_1 + 0xc0) * (uint)*puVar7;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    *(short *)(param_1 + 0xbc) = (short)((uint)iVar8 >> 8);
    iVar8 = (uint)*(ushort *)(param_1 + 0xc2) * (uint)*puVar7;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    *(short *)(param_1 + 0xbe) = (short)((uint)iVar8 >> 8);
    iVar8 = (uint)*puVar7 * *(int *)(param_1 + 100);
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar8 >> 8;
    if (*puVar7 < 0x10) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080CF5F8(param_1);
    }
    goto switchD_080d05e6_caseD_e;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d05e6_caseD_e:
  *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x13);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar6 = (uint)*(byte *)(param_1 + 0x13);
  }
  else {
    uVar6 = -(uint)*(byte *)(param_1 + 0x13) & 0xff;
  }
  iVar8 = *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080ef450)[uVar6];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + (iVar8 >> 8);
  iVar8 = *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080ef450)[uVar6 + 0x40 & 0xff];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) - (iVar8 >> 8);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0xbc);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0xbe);
  return in_lr;
}

