// sub_0805741C at 0x0805741C (thumb)

undefined4 sub_0805741C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar11 = *(int *)(param_1 + 0xc0);
  iVar2 = *(int *)(iVar11 + 0x20);
  uVar7 = *(byte *)(iVar2 + 10) >> 4 & 1;
  if ((*(uint *)(iVar2 + 0xbc) & 0x100) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080561A8(param_1);
    return in_lr;
  }
  if ((*(uint *)(iVar2 + 0xbc) & 0x200) != 0) {
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    sub_080033F0(param_1 + 0x6c,7);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xc5) = 0;
    *(undefined *)(iVar11 + 0xc4) = 0;
    sub_08001EAC(0x7d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar11 = *(int *)(iVar11 + 0x4c) + 0x3000 + uVar7 * -0x6000;
    iVar2 = sub_08008360(iVar11,*(undefined4 *)(param_1 + 0x50));
    iVar11 = (iVar11 - *(int *)(param_1 + 0x4c)) * 0x14;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar11 >> 8);
    iVar2 = (iVar2 - *(int *)(param_1 + 0x50)) * 0x14;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar2 >> 8);
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0x12) = 0;
LAB_080576ea:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(iVar11 + 0xc4) = 1;
    *(undefined *)(param_1 + 0xc6) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    pcVar10 = (char *)(param_1 + 0xc6);
    if (*pcVar10 != '\0') {
      *pcVar10 = *pcVar10 + -1;
    }
    if (((*(ushort *)(param_1 + 0x90) & 4) != 0) && (*pcVar10 == '\0')) {
      *pcVar10 = '<';
      sub_08001EAC(0x7e);
    }
    pbVar8 = (byte *)(param_1 + 0xc5);
    iVar5 = (uint)*pbVar8 * 4;
    iVar9 = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] *
            *(int *)(&DAT_082afae8 + iVar5);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar5 = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * *(int *)(&DAT_082afafc + iVar5)
    ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar3 = *(int *)(iVar11 + 0x50);
    iVar6 = 0x2c00;
    if (*pbVar8 == 4) {
      iVar6 = 0x3600;
    }
    iVar11 = (((uVar7 * -2 + 1) * (iVar9 >> 8) + *(int *)(iVar11 + 0x4c)) - *(int *)(param_1 + 0x4c)
             ) * 200;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar11 >> 8);
    iVar11 = (((iVar3 - (iVar5 >> 8)) + iVar6) - *(int *)(param_1 + 0x50)) * 200;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar11 >> 8);
    cVar1 = *(char *)(param_1 + 0x12) + '\x04';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '`') {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    iVar11 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (iVar11 < -0x2000) {
      iVar11 = *(int *)(param_1 + 0x4c);
      if (*(int *)(iVar2 + 0xb8) < iVar11) {
        iVar2 = sub_08007EE0(iVar11,*(int *)(param_1 + 0x50) + -0x2000);
        if (iVar2 < 0) {
LAB_080576a0:
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
        }
      }
      else {
        iVar2 = sub_08008120(iVar11,*(int *)(param_1 + 0x50) + -0x2000);
        if (0 < iVar2) goto LAB_080576a0;
      }
    }
    iVar2 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if ((iVar2 < 0) &&
       (*(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2,
       *(char *)(param_1 + 0x13) != '\0')) {
      *pbVar8 = *pbVar8 + 1;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -0xc;
      if (*pbVar8 == 5) {
        *(undefined *)(param_1 + 0xe) = 0xc;
        sub_08001EAC(0x7e);
        break;
      }
      sub_08001EAC(0x7e);
      goto LAB_080576ea;
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(iVar11 + 0xc4) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    pcVar10 = (char *)(param_1 + 0xc6);
    if (*pcVar10 != '\0') {
      *pcVar10 = *pcVar10 + -1;
    }
    if (((*(ushort *)(param_1 + 0x90) & 4) != 0) && (*pcVar10 == '\0')) {
      *pcVar10 = '<';
      sub_08001EAC(0x7e);
    }
    pbVar8 = (byte *)(param_1 + 0xc5);
    iVar9 = *(int *)(&DAT_082afae8 + (uint)*pbVar8 * 4) + (uint)*(byte *)(param_1 + 0x13) * 0x100;
    uVar4 = *(byte *)(param_1 + 0x13) + 1;
    *(char *)(param_1 + 0x13) = (char)uVar4;
    if (0x20 < (uVar4 & 0xff)) {
      *(undefined *)(param_1 + 0x13) = 0x20;
    }
    iVar5 = iVar9 * (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar9 = (iVar9 + *(int *)(&DAT_082afafc + (uint)*pbVar8 * 4)) *
            (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar6 = *(int *)(iVar11 + 0x50);
    iVar11 = (((uVar7 * -2 + 1) * (iVar5 >> 8) + *(int *)(iVar11 + 0x4c)) - *(int *)(param_1 + 0x4c)
             ) * 200;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    iVar5 = *(int *)(param_1 + 0x4c) + (iVar11 >> 8);
    *(int *)(param_1 + 0x4c) = iVar5;
    iVar11 = (((iVar6 - (iVar9 >> 8)) + 0x2c00) - *(int *)(param_1 + 0x50)) * 200;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar11 >> 8);
    iVar11 = sub_08007B30(iVar5);
    if (iVar11 < -0x2000) {
      iVar11 = *(int *)(param_1 + 0x4c);
      if (*(int *)(iVar2 + 0xb8) < iVar11) {
        iVar2 = sub_08007EE0(iVar11,*(int *)(param_1 + 0x50) + -0x2000);
        if (iVar2 < 0) {
LAB_08057824:
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
        }
      }
      else {
        iVar2 = sub_08008120(iVar11,*(int *)(param_1 + 0x50) + -0x2000);
        if (0 < iVar2) goto LAB_08057824;
      }
      sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    else {
      sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -4;
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if ((iVar2 < *(int *)(param_1 + 0x50)) &&
       (*(int *)(param_1 + 0x50) = iVar2, 0x17 < *(byte *)(param_1 + 0x13))) {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\f';
      *(undefined *)(param_1 + 0xe) = 2;
      sub_08001EAC(0x7e);
      *pbVar8 = *pbVar8 + 1;
    }
    break;
  default:
    goto switchD_08057488_caseD_6;
  case 0xc:
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(iVar11 + 0xc4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xd:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    goto switchD_08057488_caseD_6;
  case 0xe:
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xf:
    cVar1 = sub_080C8CB0(*(undefined *)(param_1 + 0x12),6);
    pcVar10 = (char *)(param_1 + 0xc4);
    if (cVar1 == '\0') {
      sub_0808CFC4(*(undefined4 *)(iVar11 + 0x24));
      *pcVar10 = *pcVar10 + -1;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if (*pcVar10 == '\0') {
      *(uint *)(iVar2 + 0xbc) = *(uint *)(iVar2 + 0xbc) & 0xfffffffd;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    goto switchD_08057488_caseD_6;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  sub_0805593C(param_1);
switchD_08057488_caseD_6:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x40;
  return in_lr;
}

