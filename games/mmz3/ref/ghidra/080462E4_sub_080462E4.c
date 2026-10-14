// sub_080462E4 at 0x080462E4 (thumb)

undefined4 sub_080462E4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  char *pcVar11;
  short *psVar12;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_08046302_caseD_1;
  default:
    goto switchD_08046302_caseD_2;
  case 4:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar4 = sub_08017B8C(param_1);
    sub_080040A8(0xc,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
    *(undefined *)(param_1 + 0xc6) = 0xc;
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar4 = (*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54)) + -0x5800 +
            (uint)*(byte *)(param_1 + 0x10) * 0xb000;
    iVar9 = *(int *)(param_1 + 0xb8) - (*(int *)(param_1 + 0x58) + 0x5000);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
    }
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0x1f;
    }
    iVar4 = (iVar4 >> 5) - *(int *)(param_1 + 0x5c);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    iVar6 = *(int *)(param_1 + 0x5c) + (iVar4 >> 4);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar4 = (iVar9 >> 5) - *(int *)(param_1 + 0x60);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    iVar4 = *(int *)(param_1 + 0x60) + (iVar4 >> 4);
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    sub_080177F4(param_1);
    pcVar11 = (char *)(param_1 + 0xc6);
    sub_080041E4(*pcVar11);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    if (*pcVar11 != '\0') {
      sub_08004230();
      *pcVar11 = '\0';
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 6:
    *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x10);
    sub_08017700(param_1,0x3100);
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar4 = sub_08017B8C(param_1);
      sub_080040A8(0x13,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
      uVar2 = 0x13;
    }
    else {
      iVar4 = sub_08017B8C(param_1);
      sub_080040A8(0xe,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
      uVar2 = 0xe;
    }
    *(undefined *)(param_1 + 0xc6) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    pcVar11 = (char *)(param_1 + 0xc6);
    cVar3 = sub_080041E4(*pcVar11);
    if (cVar3 == '\x03') {
      if (*pcVar11 != '\0') {
        sub_08004230();
        *pcVar11 = '\0';
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    return in_lr;
  case 8:
    iVar4 = 0;
    do {
      sub_080BC270(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0x100,
                   (uint)(iVar4 << 0x1d) >> 0x18,*(undefined *)(param_1 + 0x10));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    sub_08017700(param_1,0x3100);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 0xc4) = 0;
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar4 = sub_08017B8C(param_1);
      sub_080040A8(0x14,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
      uVar2 = 0x14;
    }
    else {
      iVar4 = sub_08017B8C(param_1);
      sub_080040A8(0xf,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
      uVar2 = 0xf;
    }
    *(undefined *)(param_1 + 0xc6) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    psVar12 = (short *)(param_1 + 0xc4);
    *psVar12 = (ushort)*(byte *)(param_1 + 0x10) * 6 + -3 + *psVar12;
    sub_08045E14(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    cVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
    if (cVar3 == '\0') {
      uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar8 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar7 * 0x20 >> 0x15) - 0x400),
                   *(int *)(param_1 + 0x58) + (uVar8 * 0x40 >> 0x16) + 0x800,0,0,
                   *(undefined *)(param_1 + 0x10));
    }
    sub_080041E4(*(undefined *)(param_1 + 0xc6));
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      if ((DAT_020301b2 & 1) != 0) {
        return in_lr;
      }
      sVar5 = *psVar12;
      iVar4 = (int)sVar5;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1ff;
      }
    }
    else {
      if ((DAT_020301b2 & 1) != 0) {
        return in_lr;
      }
      sVar5 = *psVar12;
      iVar4 = (int)sVar5;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1ff;
      }
    }
    uVar2 = 1;
    *psVar12 = sVar5 + (short)(iVar4 >> 9) * -0x200;
    *(undefined *)(param_1 + 0xd) = 1;
    goto LAB_080467a6;
  }
  sub_08017700(param_1,0x3000);
  *(undefined2 *)(param_1 + 0xc4) = 0;
  sub_08045E14(param_1);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08046302_caseD_1:
  puVar10 = (ushort *)(param_1 + 0xc4);
  *puVar10 = *puVar10 - ((ushort)*(byte *)(param_1 + 0x10) * 4 + -2);
  *puVar10 = *puVar10 & 0x1ff;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  sub_08045E14(param_1);
  if (((*(char *)(param_1 + 0x10) == '\0') &&
      ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0)) ||
     ((*(char *)(param_1 + 0x10) == '\x01' && ((*(byte *)(*(int *)(iVar4 + 0x18) + 9) & 0x40) != 0))
     )) {
    iVar9 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(short *)((int)&DAT_080fe64c + ((uint)(iVar9 << 0x18) >> 0x17)) * 2;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         *(short *)((int)&DAT_080fe64c + ((uint)(iVar9 << 0x19) >> 0x17)) * 2;
    *(int *)(param_1 + 0x5c) = iVar9 + 0x20;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  sub_080177F4(param_1);
  iVar9 = sub_080FE390(*puVar10,(uint)*(byte *)(param_1 + 0xd1) * 10 + 7);
  if (iVar9 == 0) {
    iVar9 = (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x68)) * 2;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar8 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar8 & 0x7fffffff;
    sub_080BC00C(*(int *)(param_1 + 0x54) + ((uVar7 * 0x20 >> 0x15) - 0x400),
                 (uVar8 * 0x40 >> 0x16) + *(int *)(param_1 + 0x58),0,iVar9);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (*(char *)(iVar4 + 0x11) != '\x02') {
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x18) + 9);
joined_r0x080464c2:
      if ((bVar1 & 1) == 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 4;
      return in_lr;
    }
    bVar1 = *(byte *)(*(int *)(iVar4 + 0x18) + 9);
    if ((bVar1 & 2) == 0) {
      if ((bVar1 & 4) == 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0x12;
      uVar2 = 0;
LAB_080467a6:
      *(undefined *)(param_1 + 0xe) = uVar2;
      return in_lr;
    }
    uVar2 = 0x11;
  }
  else {
    if (*(char *)(param_1 + 0x11) != '\x02') {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
      goto joined_r0x080464c2;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 2) == 0) {
      if ((bVar1 & 4) == 0) {
        return in_lr;
      }
      uVar2 = 0x12;
    }
    else {
      uVar2 = 0x11;
    }
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
switchD_08046302_caseD_2:
  return in_lr;
}

