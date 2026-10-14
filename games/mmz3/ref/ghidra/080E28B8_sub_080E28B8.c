// sub_080E28B8 at 0x080E28B8 (thumb)

undefined4 sub_080E28B8(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  undefined4 uVar12;
  int iVar13;
  byte *pbVar14;
  ushort *puVar15;
  int *piVar16;
  undefined4 in_lr;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar6 = (uint)*(byte *)(iVar5 + 0x147) * 8;
  local_24 = *(int *)(&DAT_0835b034 + iVar6);
  local_20 = *(undefined4 *)(&DAT_0835b038 + iVar6);
  sub_080177F4(param_1);
  iVar6 = DAT_020302c0;
  if (DAT_0202f5d0 != '\0') {
    return in_lr;
  }
  if (*(char *)(iVar5 + 0x232) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (((*(uint *)(iVar5 + 0x8c) & 0x200) != 0) || (*(short *)(iVar5 + 0xa4) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  local_2c = *(int *)(iVar5 + 0x54);
  if (local_2c + 0x11800 < DAT_020302c0 + -0x7800) {
    return in_lr;
  }
  puVar15 = (ushort *)(iVar5 + 0x216);
  if ((*puVar15 & 0x8000) == 0) {
    *(undefined *)(param_1 + 0xe) = 0;
    iVar6 = (*(int *)(param_1 + 0x54) + 0xf000) - iVar6;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 < 0x1e001) {
      iVar6 = (*(int *)(param_1 + 0x58) + 0xa000) - DAT_020302c4;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (0x14000 < iVar6) goto LAB_080e2afa;
    }
    else {
LAB_080e2afa:
      *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + (int)(short)local_24;
      *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + (local_24 >> 0x10);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    }
    local_28 = DAT_020302c4;
    local_2c = DAT_020302c0;
    *(int *)(param_1 + 100) = DAT_020302c0 + -0x7800;
    *(int *)(param_1 + 0x68) = DAT_020302c4 + -0x5000;
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(param_1 + 0x12) == '\0') {
        iVar6 = -0x6000;
        goto LAB_080e2b72;
      }
      local_2c = local_2c + -0x5000;
    }
    else if (*(char *)(param_1 + 0x12) == '\0') {
      local_2c = local_2c + 0x6000;
    }
    else {
      iVar6 = 0x5000;
LAB_080e2b72:
      local_2c = local_2c + iVar6;
    }
    local_28 = local_28 + -0x3800;
    sub_080E2EAC(param_1 + 0xbc,&local_2c,param_1 + 0x5c,param_1 + 0xb8,0x400,0x400,0x500,0x400,0x70
                 ,0xe0,4);
LAB_080e2bac:
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
      if ((*puVar15 & 0x8000) == 0) {
        iVar6 = sub_080FE4D8(*(byte *)(param_1 + 0xb9) + 1,0x18);
        *(byte *)(param_1 + 0xb9) = (byte)iVar6;
        iVar6 = sub_080FE460(iVar6 << 8,0x18);
        *(int *)(param_1 + 0x58) =
             *(int *)(param_1 + 0x58) +
             *(short *)((int)&DAT_080fe64c + ((uint)(iVar6 << 0x18) >> 0x17)) * -4;
        local_2c = local_2c - *(int *)(param_1 + 0xbc) >> 8;
        local_28 = local_28 - *(int *)(param_1 + 0xc0) >> 8;
        uVar3 = sub_080FE124(local_2c * local_2c + local_28 * local_28);
        if (uVar3 < 9) {
          if (*(char *)(param_1 + 0xd) == '\0') {
            *(undefined *)(param_1 + 0xd) = 1;
          }
          else {
            *(undefined *)(param_1 + 0xd) = 0;
          }
        }
      }
      goto LAB_080e2de4;
    }
  }
  else {
    if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
      if (*(char *)(param_1 + 0x12) == '\0') {
        iVar6 = 0xd00;
        goto LAB_080e2a08;
      }
      local_2c = local_2c + 0x1b00;
      local_28 = *(int *)(iVar5 + 0x58);
      iVar6 = -0x1300;
LAB_080e2a12:
      local_28 = local_28 + iVar6;
    }
    else {
      if (*(char *)(param_1 + 0x12) == '\0') {
        iVar6 = -0xd00;
LAB_080e2a08:
        local_2c = local_2c + iVar6;
        local_28 = *(int *)(iVar5 + 0x58);
        iVar6 = -0x2900;
        goto LAB_080e2a12;
      }
      local_2c = local_2c + -0x1b00;
      local_28 = *(int *)(iVar5 + 0x58) + -0x1300;
    }
    iVar6 = *(int *)(param_1 + 0x54) - local_2c;
    if (iVar6 < 0) {
      iVar6 = local_2c - *(int *)(param_1 + 0x54);
    }
    if (iVar6 < 0x200) {
      iVar6 = *(int *)(param_1 + 0x58) - local_28;
      if (iVar6 < 0) {
        iVar6 = local_28 - *(int *)(param_1 + 0x58);
      }
      if (iVar6 < 0x200) {
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
    if (*(char *)(param_1 + 0xe) == '\0') {
      if ((*puVar15 & 0x4000) == 0) {
        uVar12 = 0x200;
        uVar17 = 0x200;
        uVar18 = 0x200;
        uVar7 = 0x300;
      }
      else {
        uVar12 = 0x400;
        uVar17 = 0x400;
        uVar18 = 0x400;
        uVar7 = 0x500;
      }
      sub_080E2EAC(param_1 + 0xbc,&local_2c,param_1 + 0x5c,param_1 + 0xb8,uVar17,uVar18,uVar7,uVar12
                   ,0x70,0xe0,4);
      goto LAB_080e2bac;
    }
  }
  piVar16 = (int *)(param_1 + 0xbc);
  if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar6 = *piVar16;
      iVar8 = -0xd00;
      goto LAB_080e2ca0;
    }
    iVar6 = *(int *)(iVar5 + 0x54) - (*piVar16 + -0x1b00);
    iVar8 = *(int *)(param_1 + 0xc0);
    iVar13 = 0x1300;
LAB_080e2cae:
    iVar8 = iVar8 + iVar13;
    iVar13 = *(int *)(iVar5 + 0x58);
  }
  else {
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar6 = *piVar16;
      iVar8 = 0xd00;
LAB_080e2ca0:
      iVar6 = *(int *)(iVar5 + 0x54) - (iVar6 + iVar8);
      iVar8 = *(int *)(param_1 + 0xc0);
      iVar13 = 0x2900;
      goto LAB_080e2cae;
    }
    iVar6 = *(int *)(iVar5 + 0x54) - (*piVar16 + 0x1b00);
    iVar8 = *(int *)(param_1 + 0xc0) + 0x1300;
    iVar13 = *(int *)(iVar5 + 0x58);
  }
  iVar13 = iVar13 - iVar8;
  uVar9 = sub_080E90EC(iVar6,iVar13);
  iVar8 = iVar6;
  if (iVar6 < 0) {
    iVar8 = -iVar6;
  }
  iVar10 = iVar13;
  if (iVar13 < 0) {
    iVar10 = -iVar13;
  }
  if (iVar10 < iVar8) {
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 < 0x801) {
LAB_080e2d20:
      if (0x200 < *(int *)(param_1 + 0x5c)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
      }
      iVar6 = *(int *)(param_1 + 0x5c) + -0x20;
    }
    else {
      if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_080e2d32;
      iVar6 = *(int *)(param_1 + 0x5c) + 0x10;
    }
LAB_080e2d30:
    *(int *)(param_1 + 0x5c) = iVar6;
  }
  else {
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    if (iVar13 < 0x801) goto LAB_080e2d20;
    if (*(int *)(param_1 + 0x5c) < 0x600) {
      iVar6 = *(int *)(param_1 + 0x5c) + 0x10;
      goto LAB_080e2d30;
    }
  }
LAB_080e2d32:
  if (*(int *)(param_1 + 0x5c) < 0x80) {
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
  }
  *piVar16 = *piVar16 +
             (*(int *)(param_1 + 0x5c) *
              (int)*(short *)((int)&DAT_080fe64c + (((uVar9 & 0xff) + 0x40) * 0x1000000 >> 0x17)) >>
             8);
  *(int *)(param_1 + 0xc0) =
       *(int *)(param_1 + 0xc0) +
       (*(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080fe64c)[uVar9 & 0xff] >> 8);
  pbVar14 = (byte *)(param_1 + 0xb9);
  *pbVar14 = (char)(*pbVar14 + 1) + (char)((int)(*pbVar14 + 1) >> 5) * -0x20;
  uVar9 = (uint)*pbVar14;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(int *)(param_1 + 0x54) =
         *piVar16 + *(short *)((int)&DAT_080fe64c + ((uVar9 * 8 + 0x40) * 0x1000000 >> 0x17)) * 4;
    iVar6 = *(int *)(param_1 + 0xc0) +
            *(short *)((int)&DAT_080fe64c + ((uVar9 << 0x1b) >> 0x17)) * 4;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *piVar16 + *(short *)((int)&DAT_080fe64c + ((uVar9 * -8 + 0x3f) * 0x1000000 >> 0x17)) * -4;
    iVar6 = *(int *)(param_1 + 0xc0) +
            *(short *)((int)&DAT_080fe64c + ((uVar9 * -8 + 0xff) * 0x1000000 >> 0x17)) * -4;
  }
  *(int *)(param_1 + 0x58) = iVar6;
LAB_080e2de4:
  psVar11 = (short *)(param_1 + 0xba);
  if (*psVar11 == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      bVar1 = *(byte *)(iVar5 + 0xb4);
    }
    else {
      bVar1 = *(byte *)(iVar5 + 0xb5);
    }
    if ((*(byte *)(DAT_0203063c + (uint)bVar1) & 4) == 0) {
      sVar4 = 900;
    }
    else {
      sVar4 = 600;
    }
    *psVar11 = sVar4;
    sub_080E04D8(0,param_1 + 0x54,0);
  }
  else {
    cVar2 = sub_080E162C(iVar5);
    if ((cVar2 != '\0') && ((*puVar15 & 0x8000) == 0)) {
      *psVar11 = *psVar11 + -1;
    }
  }
  iVar6 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar6 + -1;
  if (iVar6 == 0) {
    sub_080BF760(param_1 + 0x54,1);
    *(undefined4 *)(param_1 + 0x60) = 0x20;
  }
  return in_lr;
}

