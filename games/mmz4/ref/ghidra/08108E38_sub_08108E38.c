// sub_08108E38 at 0x08108E38 (thumb)

undefined4 sub_08108E38(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  ushort *puVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 in_lr;
  
  iVar14 = *(int *)(param_1 + 0x28);
  uVar8 = (uint)*(byte *)(iVar14 + 0xf1);
  if (uVar8 < *(byte *)(iVar14 + 0xf2)) {
    uVar8 = (uint)*(byte *)(iVar14 + 0xf2);
  }
  if (uVar8 < *(byte *)(iVar14 + 0xf3)) {
    uVar8 = (uint)*(byte *)(iVar14 + 0xf3);
  }
  if ((uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) !=
      uVar8 + 0x9400) {
    sub_0801CF00(param_1,uVar8 + 0x9400 & 0xffff);
  }
  sub_0801CFF0(param_1);
  if (DAT_0202dc00 != '\0') {
    return in_lr;
  }
  if (*(char *)(iVar14 + 0x279) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08869378)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (((*(uint *)(iVar14 + 0x8c) & 0x200) != 0) || (*(short *)(iVar14 + 0xa4) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08869378)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if ((*(byte *)(iVar14 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      iVar13 = *(int *)(param_1 + 0xb4);
      iVar4 = -0xd00;
      goto LAB_08108f84;
    }
    iVar13 = *(int *)(iVar14 + 0x54) - (*(int *)(param_1 + 0xb4) + -0x1b00);
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar6 = 0x1300;
  }
  else if (*(char *)(param_1 + 0xbe) == '\0') {
    iVar13 = *(int *)(param_1 + 0xb4);
    iVar4 = 0xd00;
LAB_08108f84:
    iVar13 = *(int *)(iVar14 + 0x54) - (iVar13 + iVar4);
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar6 = 0x2900;
  }
  else {
    iVar13 = *(int *)(iVar14 + 0x54) - (*(int *)(param_1 + 0xb4) + 0x1b00);
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar6 = 0x1300;
  }
  piVar10 = (int *)(param_1 + 0xb4);
  piVar9 = (int *)(param_1 + 0xb8);
  iVar6 = *(int *)(iVar14 + 0x58) - (iVar4 + iVar6);
  uVar8 = sub_0810CCF0(iVar13,iVar6);
  iVar4 = iVar13;
  if (iVar13 < 0) {
    iVar4 = -iVar13;
  }
  iVar5 = iVar6;
  if (iVar6 < 0) {
    iVar5 = -iVar6;
  }
  if (iVar5 < iVar4) {
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    if (iVar13 < 0x801) {
LAB_08109008:
      if (0x200 < *(int *)(param_1 + 0x5c)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
      }
      iVar13 = *(int *)(param_1 + 0x5c) + -0x20;
    }
    else {
      if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_0810901a;
      iVar13 = *(int *)(param_1 + 0x5c) + 0x40;
    }
LAB_08109018:
    *(int *)(param_1 + 0x5c) = iVar13;
  }
  else {
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 < 0x801) goto LAB_08109008;
    if (*(int *)(param_1 + 0x5c) < 0x600) {
      iVar13 = *(int *)(param_1 + 0x5c) + 0x40;
      goto LAB_08109018;
    }
  }
LAB_0810901a:
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *piVar10 = *piVar10 +
             (*(int *)(param_1 + 0x5c) *
              (int)*(short *)((int)&DAT_08128c10 + (((uVar8 & 0xff) + 0x40) * 0x1000000 >> 0x17)) >>
             8);
  *piVar9 = *piVar9 + (*(int *)(param_1 + 0x5c) * (int)(short)(&DAT_08128c10)[uVar8 & 0xff] >> 8);
  pbVar7 = (byte *)(param_1 + 0xbc);
  *pbVar7 = (char)(*pbVar7 + 1) + (char)((int)(*pbVar7 + 1) >> 5) * -0x20;
  uVar8 = (uint)*pbVar7;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    *(int *)(param_1 + 0x54) =
         *piVar10 + *(short *)((int)&DAT_08128c10 + ((uVar8 * 8 + 0x40) * 0x1000000 >> 0x17)) * 4;
    iVar13 = *piVar9 + *(short *)((int)&DAT_08128c10 + ((uVar8 << 0x1b) >> 0x17)) * 4;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *piVar10 + *(short *)((int)&DAT_08128c10 + ((uVar8 * -8 + 0x3f) * 0x1000000 >> 0x17)) * -4;
    iVar13 = *piVar9 + *(short *)((int)&DAT_08128c10 + ((~(uVar8 * 8) << 0x18) >> 0x17)) * -4;
  }
  *(int *)(param_1 + 0x58) = iVar13;
  cVar3 = sub_08108CA8(iVar14);
  if (cVar3 != '\0') {
    if (*(char *)(iVar14 + 199) == '\x02') {
      if (*(char *)(iVar14 + 0xf1) != '\0') {
        puVar11 = (ushort *)(param_1 + 0xc0);
        uVar1 = *puVar11;
        *puVar11 = uVar1 + 1;
        if (*(char *)(iVar14 + 0xf5) == '\x03') {
          uVar2 = 0x4b0;
        }
        else {
          uVar2 = 0x5dc;
        }
        if (uVar2 < (ushort)(uVar1 + 1)) {
          sub_08107D6C(0,param_1 + 0x54,0);
          *puVar11 = 0;
        }
      }
      pbVar7 = (byte *)(iVar14 + 0xf2);
      if (2 < *pbVar7) {
        puVar11 = (ushort *)(param_1 + 0xc2);
        uVar1 = *puVar11;
        *puVar11 = uVar1 + 1;
        if (0x28 < (ushort)(uVar1 + 1)) {
          sub_0810928C(iVar14,param_1,0);
          *puVar11 = 0;
        }
      }
      if ((3 < *pbVar7) &&
         (iVar13 = *(int *)(param_1 + 100) + 1, *(int *)(param_1 + 100) = iVar13, 0x3c < iVar13)) {
        sub_0810928C(iVar14,param_1,2);
        *(undefined4 *)(param_1 + 100) = 0;
      }
      if (*pbVar7 < 5) goto LAB_0810922a;
    }
    else {
      if ((*(char *)(iVar14 + 0xf1) == '\x01') || (*(char *)(iVar14 + 0xf1) == '\x06')) {
        puVar11 = (ushort *)(param_1 + 0xc0);
        uVar1 = *puVar11;
        *puVar11 = uVar1 + 1;
        if (*(char *)(iVar14 + 0xf5) == '\x03') {
          uVar2 = 0x4b0;
        }
        else {
          uVar2 = 0x5dc;
        }
        if (uVar2 < (ushort)(uVar1 + 1)) {
          sub_08107D6C(0,param_1 + 0x54,0);
          *puVar11 = 0;
        }
      }
      pcVar12 = (char *)(iVar14 + 0xf2);
      if (*pcVar12 == '\x03') {
        puVar11 = (ushort *)(param_1 + 0xc2);
        uVar1 = *puVar11;
        *puVar11 = uVar1 + 1;
        if (0x28 < (ushort)(uVar1 + 1)) {
          sub_0810928C(iVar14,param_1,0);
          *puVar11 = 0;
        }
      }
      if ((*pcVar12 == '\x04') &&
         (iVar13 = *(int *)(param_1 + 100) + 1, *(int *)(param_1 + 100) = iVar13, 0x3c < iVar13)) {
        sub_0810928C(iVar14,param_1,2);
        *(undefined4 *)(param_1 + 100) = 0;
      }
      if (*pcVar12 != '\x05') goto LAB_0810922a;
    }
    iVar13 = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 0x68) = iVar13;
    if (0x3c < iVar13) {
      sub_0810928C(iVar14,param_1,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
LAB_0810922a:
  pcVar12 = (char *)(param_1 + 0xbd);
  cVar3 = *pcVar12;
  *pcVar12 = cVar3 + -1;
  if ((char)(cVar3 + -1) == -1) {
    sub_080DF4C0(param_1 + 0x54,2);
    *pcVar12 = ' ';
  }
  return in_lr;
}

