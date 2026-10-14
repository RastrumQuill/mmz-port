// sub_080D0AFC at 0x080D0AFC (thumb)

undefined4 sub_080D0AFC(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar9 = *(int *)(param_1 + 0x2c);
  if (1 < *(byte *)(iVar9 + 0xc)) {
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
    *(undefined *)(param_1 + 0xbb) = 8;
    uVar3 = *(ushort *)(param_1 + 0xbe) + 0x20;
    *(ushort *)(param_1 + 0xbe) = uVar3;
    if (uVar3 < 0x180) goto switchD_080d0b5a_caseD_b;
    break;
  case 1:
    uVar3 = *(ushort *)(param_1 + 0xbc) + 8;
    *(ushort *)(param_1 + 0xbc) = uVar3;
    if (uVar3 < 0x40) goto switchD_080d0b5a_caseD_b;
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x19) goto switchD_080d0b5a_caseD_b;
    *(undefined *)(param_1 + 0x12) = 0xc;
    break;
  case 3:
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    *(char *)(param_1 + 0xbb) = (bVar1 >> 4) + *(char *)(param_1 + 0xbb);
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 2;
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 1;
    }
    else {
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 2;
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -1;
    }
    if (*(byte *)(iVar4 + 0xd) < 5) goto switchD_080d0b5a_caseD_b;
    break;
  case 4:
    bVar1 = *(char *)(param_1 + 0x12) + 8;
    *(byte *)(param_1 + 0x12) = bVar1;
    pbVar6 = (byte *)(param_1 + 0xbb);
    *pbVar6 = (bVar1 >> 4) + *pbVar6;
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 5;
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 2;
    }
    else {
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 3;
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -2;
    }
    if (*pbVar6 < 0x84) goto switchD_080d0b5a_caseD_b;
    *(undefined *)(param_1 + 0x12) = 0x60;
    break;
  case 5:
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 1;
    iVar5 = *(byte *)(param_1 + 0x12) - 3;
    *(char *)(param_1 + 0x12) = (char)iVar5;
    uVar8 = (uint)*(byte *)(param_1 + 0xbb) - ((uint)(iVar5 * 0x1000000) >> 0x1c);
    *(byte *)(param_1 + 0xbb) = (byte)uVar8;
    if (0x37 < (uVar8 & 0xff)) goto switchD_080d0b5a_caseD_b;
    if (*(char *)(iVar9 + 0x10) == '\x02') {
      *(undefined *)(param_1 + 0xd) = 100;
      goto switchD_080d0b5a_caseD_b;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 6:
    iVar5 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x1f;
    }
    *(char *)(param_1 + 0x13) = (char)(iVar5 >> 5) + '8';
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
    if (*(byte *)(iVar9 + 0xd) < 5) goto switchD_080d0b5a_caseD_b;
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 7:
    pbVar6 = (byte *)(param_1 + 0xbb);
    bVar1 = *pbVar6;
    if (*(byte *)(iVar4 + 0x13) < bVar1) {
      cVar2 = -1;
LAB_080d0eb4:
      *pbVar6 = bVar1 + cVar2;
    }
    else if (bVar1 < *(byte *)(iVar4 + 0x13)) {
      cVar2 = '\x01';
      goto LAB_080d0eb4;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_080d0b5a_caseD_b;
    *pbVar6 = *(byte *)(iVar4 + 0x13);
    break;
  case 8:
    *(undefined *)(param_1 + 0xbb) = *(undefined *)(iVar4 + 0x13);
    puVar7 = (ushort *)(param_1 + 0xbc);
    if (*puVar7 < 0x11) {
      *(undefined *)(param_1 + 0x12) = 0x10;
      *puVar7 = 0x10;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      *puVar7 = *puVar7 - 0x10;
    }
    goto switchD_080d0b5a_caseD_b;
  case 9:
    *(undefined *)(param_1 + 0xbb) = *(undefined *)(iVar4 + 0x13);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    goto switchD_080d0b5a_caseD_b;
  case 10:
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
    goto switchD_080d0b5a_caseD_b;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d0b5a_caseD_b:
  *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xbb);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar8 = (uint)*(byte *)(iVar4 + 0x24);
  }
  else {
    uVar8 = -(uint)*(byte *)(iVar4 + 0x24) & 0xff;
  }
  iVar9 = (uint)*(ushort *)(iVar4 + 0x52) * (short)(&DAT_080ef450)[uVar8] * 0x14;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + (iVar9 >> 8);
  iVar9 = (uint)*(ushort *)(iVar4 + 0x52) * (short)(&DAT_080ef450)[uVar8 + 0x40 & 0xff] * 0x14;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) - (iVar9 >> 8);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0xbc);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0xbe);
  return in_lr;
}

