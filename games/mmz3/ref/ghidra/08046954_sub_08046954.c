// sub_08046954 at 0x08046954 (thumb)

undefined4 sub_08046954(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined2 *)(param_1 + 0xc4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    pbVar10 = (byte *)(param_1 + 199);
    uVar5 = (ushort)*pbVar10 * 6 + -3 + *(ushort *)(param_1 + 0xc4);
    *(ushort *)(param_1 + 0xc4) = uVar5;
    if (((uVar5 < 0xff80) && (*pbVar10 == 0)) || ((0x80 < uVar5 && (*pbVar10 == 1)))) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_08045E14(param_1);
    break;
  case 2:
    uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar7 & 0x7fffffff;
    if ((uVar7 * 2 >> 0x11 & 1) == 0) {
      sub_0800471C(0x115);
    }
    else {
      sub_0800471C(0x114);
    }
    *(undefined2 *)(param_1 + 0xc4) = 0;
    piVar11 = (int *)(param_1 + 0xc0);
    *piVar11 = *(int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0xb000;
    if (*(char *)(param_1 + 199) == '\0') {
      iVar4 = *piVar11;
      iVar6 = -0x1800;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xffff5000;
      iVar4 = *piVar11;
      iVar6 = 0x1800;
    }
    *piVar11 = iVar4 + iVar6;
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x7f;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 7;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    puVar8 = (ushort *)(param_1 + 0xc4);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
    uVar5 = *puVar8;
    *puVar8 = uVar5 + 4;
    if (0x1ff < (ushort)(uVar5 + 4)) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 199) == '\0') {
      iVar4 = *(int *)(param_1 + 0x58) +
              *(short *)((int)&DAT_080fe64c + ((*(byte *)puVar8 + 0x40) * 0x1000000 >> 0x17)) * 0x18
      ;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x58) +
              *(short *)((int)&DAT_080fe64c + ((*(byte *)puVar8 + 0x40) * 0x1000000 >> 0x17)) *
              -0x18;
    }
    *(int *)(param_1 + 0x58) = iVar4;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    piVar11 = (int *)(param_1 + 0xc0);
    *piVar11 = *(int *)(param_1 + 0x58);
    bVar1 = *(byte *)(param_1 + 199) ^ 1;
    *(byte *)(param_1 + 199) = bVar1;
    if (bVar1 == 0) {
      *piVar11 = *piVar11 + 0x2000;
      uVar3 = 0x80;
    }
    else {
      *piVar11 = *piVar11 + -0x2000;
      uVar3 = 0xff80;
    }
    *(undefined2 *)(param_1 + 0xc4) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    pbVar10 = (byte *)(param_1 + 199);
    uVar5 = *(ushort *)(param_1 + 0xc4) - ((ushort)*pbVar10 * 6 + -3);
    *(ushort *)(param_1 + 0xc4) = uVar5;
    if (((0x100 < uVar5) && (*pbVar10 == 0)) || ((uVar5 < 0xff00 && (*pbVar10 == 1)))) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_08045E14(param_1);
    sub_080041E4(*(undefined *)(param_1 + 0xc6));
    sub_080177F4(param_1);
  default:
    goto switchD_08046972_caseD_6;
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
switchD_08046972_caseD_6:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar2 == '\0') {
    uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar9 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar9 & 0x7fffffff;
    sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar7 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar9 * 0x40 >> 0x16) + 0x800,0,0,
                 *(undefined *)(param_1 + 0x10));
  }
  return in_lr;
}

