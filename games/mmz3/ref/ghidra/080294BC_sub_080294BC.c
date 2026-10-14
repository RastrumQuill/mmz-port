// sub_080294BC at 0x080294BC (thumb)

undefined4 sub_080294BC(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  short *psVar15;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x54);
  iVar9 = *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    sub_08025BDC(param_1);
  }
  cVar2 = *(char *)(param_1 + 0x233);
  if (cVar2 != '\0') {
    cVar2 = cVar2 + -1;
    *(char *)(param_1 + 0x233) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_0800471C(0x21);
    return in_lr;
  }
  psVar15 = (short *)(param_1 + 0xfa);
  if (*psVar15 == -1) {
    if ((*(char *)(param_1 + 0xd) != '\v') && (DAT_0202e48c < *(int *)(param_1 + 0x58) + -0x1e00)) {
      sVar5 = sub_0800471C(0x32);
LAB_08029558:
      *psVar15 = sVar5;
    }
  }
  else if (*(int *)(param_1 + 0x58) < DAT_0202e48c) {
    sub_08004768((int)*psVar15);
    sVar5 = -1;
    goto LAB_08029558;
  }
  *(char *)(param_1 + 0xe8) = *(char *)(param_1 + 0xd);
  *(char *)(param_1 + 0xe9) = *(char *)(param_1 + 0xe);
  sub_080330DC(param_1);
  puVar10 = (uint *)(param_1 + 0x8c);
  pbVar11 = (byte *)(param_1 + 0x147);
  if ((*puVar10 & 0x200) == 0) {
    psVar15 = (short *)(param_1 + 0xa4);
    if (*psVar15 != 0) {
      cVar2 = sub_080287E8(param_1,&DAT_0835b034 + (uint)*pbVar11 * 8);
      if (cVar2 == '\x01') {
        sub_08032F58(param_1);
      }
      else if (cVar2 == '\x02') {
        *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 10) >> 4 & 1;
        *psVar15 = 0;
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    if (((*puVar10 & 0x200) == 0) && (*psVar15 != 0)) {
      cVar2 = sub_080272C0(param_1,&DAT_0835b034 + (uint)*pbVar11 * 8);
      if (cVar2 == '\x01') {
        *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 10) >> 4 & 1;
        *psVar15 = 0;
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else if (cVar2 == '\x02') {
        sub_08032F58(param_1);
      }
      sub_08027204(param_1);
    }
  }
  if ((*(char *)(param_1 + 0xd) != '\x01') && (*(char *)(param_1 + 0xd) != '\x04')) {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  cVar2 = *(char *)(param_1 + 0x234);
  if (cVar2 == '\0') {
    if (((DAT_02002650 & 0x7f) == 7) && (sVar5 = sub_08010340(), sVar5 != 0)) {
      cVar2 = '\x10';
      goto LAB_0802968a;
    }
  }
  else {
    cVar2 = cVar2 + -1;
LAB_0802968a:
    *(char *)(param_1 + 0x234) = cVar2;
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x58);
  *(ushort *)(param_1 + 0x13e) =
       CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  *(undefined *)(param_1 + 0x140) = *(undefined *)(param_1 + 0x71);
  *(undefined *)(param_1 + 0x141) = *(undefined *)(param_1 + 0x72);
  pbVar12 = (byte *)(param_1 + 0x148);
  *pbVar12 = *pbVar11;
  *pbVar11 = 0;
  if ((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x400) {
    *(undefined *)(param_1 + 0x18d) = 0;
  }
  *(char *)(param_1 + 0x142) = '\0';
  if ((((((*puVar10 & 0x200) == 0) && (psVar15 = (short *)(param_1 + 0xa4), *psVar15 != 0)) &&
       (1 < (byte)(*(char *)(param_1 + 0xd) - 5U))) && (*(char *)(param_1 + 0xd) != '\n')) &&
     ((*(int *)(param_1 + 0x158) <
       (*(int *)(param_1 + 0x58) - (int)*(short *)(&DAT_0835b03a + (uint)*pbVar11 * 8)) + -0x800 ||
      ((cVar2 = sub_08009038(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)),
       cVar2 != '\0' &&
       (cVar2 = sub_08009038(*(undefined4 *)(param_1 + 0x54),
                             (*(int *)(param_1 + 0x58) -
                             (int)*(short *)(&DAT_0835b03a + (uint)*pbVar11 * 8)) + -0x800),
       cVar2 != '\0')))))) {
    uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1e00);
    if ((uVar7 & 0x400) == 0) {
      if ((((byte)(*(char *)(param_1 + 0xb4) - 0x20U) < 2) || (*(char *)(param_1 + 0xb5) == ' ')) ||
         (*(char *)(param_1 + 0xb5) == '!')) {
        *(undefined *)(param_1 + 0xd) = 8;
        *(undefined *)(param_1 + 0xe) = 0;
        goto LAB_080297f8;
      }
      *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 10) >> 4 & 1;
      *psVar15 = 0;
    }
    else {
      *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 10) >> 4 & 1;
      *psVar15 = 0;
    }
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
LAB_080297f8:
  bVar1 = *(byte *)(param_1 + 0x136);
  if (bVar1 != 0) {
    bVar3 = bVar1 & 0x80;
    if ((bVar1 & 0x80) != 0) {
      bVar3 = bVar1 ^ 0x80;
    }
    *(byte *)(param_1 + 0x136) = bVar3;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&UNK_0835abb8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  pcVar8 = (char *)(param_1 + 0x113);
  if (*pcVar8 != '\0') {
    if ((*(uint *)(param_1 + 0x114) < *(uint *)(param_1 + 0x58)) &&
       (((uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54)), (uVar7 & 0x8000) == 0 ||
         (uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
         (uVar7 & 0xf) == 0)) ||
        (uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
        0xe < (uVar7 & 0xf))))) {
      *pcVar8 = '\0';
    }
    if (*(uint *)(param_1 + 0x58) < *(int *)(param_1 + 0x114) - 0x2000U) {
      *pcVar8 = '\0';
    }
  }
  if (*(char *)(param_1 + 0xd) != '\a') {
    *(undefined *)(param_1 + 0x143) = 0;
  }
  if ((*(char *)(param_1 + 0xd) != '\x04') &&
     (((*puVar10 & 0x200) != 0 || (*(short *)(param_1 + 0xa4) == 0)))) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&UNK_0835abe8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  *(undefined *)(param_1 + 0x12e) = 0xff;
  iVar14 = 0;
  pbVar13 = (byte *)(param_1 + 0x124);
  pcVar8 = (char *)(param_1 + 0x125);
  if ((*pbVar13 & 4) != 0) {
    if (*(char *)(param_1 + 0xd) == *(char *)(param_1 + 0xe8)) {
      if ((*(char *)(param_1 + 0xd) != '\0') ||
         (*(char *)(param_1 + 0xe) == *(char *)(param_1 + 0xe9))) goto LAB_08029936;
      cVar2 = *pcVar8;
    }
    else {
      cVar2 = *pcVar8;
    }
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xec) = 0;
    }
    else {
      iVar14 = 1;
    }
  }
LAB_08029936:
  *pbVar13 = *pbVar13 & 0xf0;
  *pcVar8 = '\0';
  *pbVar13 = *pbVar13 & 0xbf | (byte)(iVar14 << 6);
  *(undefined *)(param_1 + 0x126) = 0xff;
  *(undefined *)(param_1 + 0x127) = 0xff;
  cVar2 = *(char *)(param_1 + 0x13b);
  if (cVar2 != '\0') {
    *(char *)(param_1 + 0x13b) = cVar2 + -1;
  }
  if (((*pbVar11 == 1) && ((*(ushort *)(param_1 + 0x216) & 0x8000) == 0)) &&
     (((*(char *)(param_1 + 0xc5) == '\x03' || (*(char *)(param_1 + 0xc5) == '\a')) &&
      (*pbVar12 == 3)))) {
    *pbVar11 = 3;
  }
  if (*(byte *)(param_1 + 0xd) < 4) {
    sub_080FE2C0(param_1,*(undefined4 *)(&UNK_0835ac18 + (uint)*(byte *)(param_1 + 0xd) * 4));
    pcVar8 = (char *)(param_1 + 0x232);
    cVar2 = *pcVar8;
    if (cVar2 != '\0') {
      *pcVar8 = cVar2 + -1;
      if (cVar2 == '\x01') {
        *pcVar8 = cVar2 + -1;
        sub_080E1274(param_1,*(char *)(param_1 + 0xb4),0);
        sub_080E1274(param_1,*(undefined *)(param_1 + 0xb5),1);
      }
    }
  }
  else {
    *(undefined *)(param_1 + 0xec) = 0;
  }
  *pbVar13 = *pbVar13 & 0xcf;
  if (*pbVar12 != *pbVar11) {
    sub_08007390(param_1 + 0x74,&DAT_0835b064 + (uint)*pbVar11 * 0x18);
    if (*pbVar11 == 3) {
      uVar4 = sub_08032F3C(param_1);
      sub_0802595C(param_1,uVar4);
    }
    else {
      uVar4 = sub_08032F3C(param_1);
      sub_080258F0(param_1,uVar4);
    }
  }
  if (((1 < (byte)(*(char *)(param_1 + 0xd) - 5U)) && (*(char *)(param_1 + 0xd) != '\n')) &&
     (cVar2 = sub_08026FB8(param_1,&DAT_0835b034 + (uint)*pbVar11 * 8,1), cVar2 != '\0')) {
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 10) >> 4 & 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) = iVar9;
  }
  if (*(char *)(param_1 + 0x11b) == '\0') {
    iVar14 = *(int *)(param_1 + 0x58);
    if (DAT_0202e48c <
        iVar14 - ((int)((uint)*(ushort *)(&DAT_0835b03a + (uint)*pbVar11 * 8) << 0x10) >> 0x11)) {
      if (iVar14 - *(short *)(&DAT_0835b03a + (uint)*pbVar11 * 8) < DAT_0202e48c) {
        sub_080B4E54(param_1,1);
      }
    }
    else if (DAT_0202e48c < iVar14) {
      sub_080B4E54(param_1,0);
    }
  }
  *(undefined *)(param_1 + 0x11c) = 0;
  if ((((*(ushort *)(param_1 + 0x216) & 0x8000) == 0) && ((*puVar10 & 0x200) == 0)) &&
     (*(short *)(param_1 + 0xa4) != 0)) {
    iVar14 = iVar6 - *(int *)(param_1 + 0x54);
    if (iVar14 < 0) {
      iVar14 = *(int *)(param_1 + 0x54) - iVar6;
    }
    if (0x1000 < iVar14) {
      *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 10) >> 4 & 1;
      *(short *)(param_1 + 0xa4) = 0;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      *(int *)(param_1 + 0x54) = iVar6;
      *(int *)(param_1 + 0x58) = iVar9;
    }
  }
  if (((*(char *)(param_1 + 399) != '\0') && ((*puVar10 & 0x200) == 0)) &&
     (*(short *)(param_1 + 0xa4) != 0)) {
    iVar14 = iVar9 - *(int *)(param_1 + 0x58);
    if (iVar14 < 0) {
      iVar14 = *(int *)(param_1 + 0x58) - iVar9;
    }
    if (0x1000 < iVar14) {
      *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 10) >> 4 & 1;
      *(short *)(param_1 + 0xa4) = 0;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      *(int *)(param_1 + 0x54) = iVar6;
      *(int *)(param_1 + 0x58) = iVar9;
    }
  }
  if (*(char *)(param_1 + 0x142) == '\0') {
    sub_080177F4(param_1);
  }
  sub_080329CC(param_1);
  *(undefined *)(param_1 + 0x149) = 0;
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x54) - iVar6;
  return in_lr;
}

