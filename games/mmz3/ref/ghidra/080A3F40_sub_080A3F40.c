// sub_080A3F40 at 0x080A3F40 (thumb)

undefined4 sub_080A3F40(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 in_lr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined *local_24;
  
  iVar9 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar9 + 0xc)) {
    sub_080B2484(1,param_1 + 0x54);
    goto LAB_080a4738;
  }
  if (*(char *)(iVar9 + 0xd) == '\n') {
    *(undefined *)(param_1 + 0xe) = 8;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x25) = 0x19;
    uVar5 = *(undefined4 *)(iVar9 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x4000;
    sub_08017700(param_1,0xad00);
    bVar1 = *(byte *)(iVar9 + 10) >> 4;
    uVar8 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar8;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a3f7c_caseD_1:
    uVar5 = *(undefined4 *)(iVar9 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar9 = *(int *)(param_1 + 0x54) + -0x2a00;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x54) + 0x2a00;
    }
    *(int *)(param_1 + 0x54) = iVar9;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x6400;
    sub_080177F4(param_1);
    uVar8 = *(uint *)(param_1 + 0xc0);
    if ((uVar8 & 1) != 0) {
      uVar3 = 0xfffffffe;
LAB_080a45a6:
      *(uint *)(param_1 + 0xc0) = uVar8 & uVar3;
LAB_080a45aa:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080a3f7c_caseD_9:
    return in_lr;
  case 1:
    goto switchD_080a3f7c_caseD_1;
  case 2:
    uVar5 = *(undefined4 *)(iVar9 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + -0x2a00;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) + 0x2a00;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x6400;
    sub_08017700(param_1,0xad00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    uVar5 = *(undefined4 *)(iVar9 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar9 = *(int *)(param_1 + 0x54) + -0x2a00;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x54) + 0x2a00;
    }
    *(int *)(param_1 + 0x54) = iVar9;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x6400;
    sub_080177F4(param_1);
    uVar8 = *(uint *)(param_1 + 0xc0);
    if ((uVar8 & 8) == 0) {
      return in_lr;
    }
    uVar3 = 0xfffffff7;
    goto LAB_080a45a6;
  case 4:
    uVar5 = *(undefined4 *)(iVar9 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    sub_08017700(param_1,0xad00);
    *(int *)(param_1 + 0x58) = *(int *)(iVar9 + 0x58) + -0x4000;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x54);
      iVar6 = iVar4 + -0x9800;
      iVar7 = -0x2000;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54);
      iVar6 = iVar4 + 0x9800;
      iVar7 = 0x2000;
    }
    *(int *)(param_1 + 0x54) = iVar4 + iVar7;
    *(undefined *)(param_1 + 0x12) = 0x2c;
    uVar5 = FUN_080fe2f8(iVar6 - *(int *)(param_1 + 0x54),0x2c);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    iVar9 = FUN_080fe2f8(0xf200 - (*(int *)(iVar9 + 0x58) - *(int *)(param_1 + 0x58)),0x2c);
    *(int *)(param_1 + 0x60) = -iVar9;
    *(undefined *)(param_1 + 0x12) = 0x2b;
    uVar5 = sub_080CDD9C(param_1,param_1 + 0x54,param_1 + 0x54,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar9 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar9;
    if (0x700 < iVar9) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    iVar9 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar9 == 0) {
      if (*(int *)(param_1 + 0x5c) < 0) {
        iVar9 = sub_0800A04C(*(int *)(param_1 + 0x54) + -0x2000,*(int *)(param_1 + 0x58) + -0x800);
      }
      else {
        iVar9 = sub_08009ED0(*(int *)(param_1 + 0x54) + 0x2000,*(int *)(param_1 + 0x58) + -0x800);
      }
      if (iVar9 != 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar9;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      sub_0800471C(0x113);
      local_2c = (undefined4 *)(param_1 + 0x8c);
      local_28 = (undefined4 *)(param_1 + 0x90);
      local_24 = (undefined *)(param_1 + 0x94);
      piVar10 = &DAT_083681b4;
      local_34 = 1;
      do {
        local_48 = *(int *)(param_1 + 0x54) + *piVar10;
        local_44 = *(int *)(param_1 + 0x58) + *piVar10 + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_48,*(byte *)(param_1 + 10) >> 4 & 1,0xad01,uVar8 * 2 >> 0x11 & 3);
        local_48 = *(int *)(param_1 + 0x54) + piVar10[2];
        local_44 = *(int *)(param_1 + 0x58) + piVar10[2] + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_48,*(byte *)(param_1 + 10) >> 4 & 1,0xad02,uVar8 * 2 >> 0x11 & 3);
        local_48 = *(int *)(param_1 + 0x54) + piVar10[4];
        local_44 = *(int *)(param_1 + 0x58) + piVar10[4] + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_48,*(byte *)(param_1 + 10) >> 4 & 1,0xad03,uVar8 * 2 >> 0x11 & 3);
        local_48 = *(int *)(param_1 + 0x54) + piVar10[6];
        local_44 = *(int *)(param_1 + 0x58) + piVar10[6] + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_48,*(byte *)(param_1 + 10) >> 4 & 1,0xad04,uVar8 * 2 >> 0x11 & 3);
        local_48 = *(int *)(param_1 + 0x54) + piVar10[8];
        local_44 = *(int *)(param_1 + 0x58) + piVar10[8] + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_48,*(byte *)(param_1 + 10) >> 4 & 1,0xad05,uVar8 * 2 >> 0x11 & 3);
        piVar10 = piVar10 + 10;
        local_34 = local_34 + -1;
      } while (-1 < local_34);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *local_2c = 0;
      *local_28 = 0;
      *local_24 = 0;
      bVar1 = *(byte *)(param_1 + 10);
      bVar2 = 0xfb;
LAB_080a4734:
      *(byte *)(param_1 + 10) = bVar2 & bVar1;
LAB_080a4738:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar9;
    if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      sub_0800471C(0x113);
      local_2c = (undefined4 *)(param_1 + 0x8c);
      local_28 = (undefined4 *)(param_1 + 0x90);
      local_24 = (undefined *)(param_1 + 0x94);
      piVar10 = &DAT_083681b4;
      local_38 = 1;
      do {
        local_50 = *(int *)(param_1 + 0x54) + *piVar10;
        local_4c = *(int *)(param_1 + 0x58) + *piVar10 + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_50,*(byte *)(param_1 + 10) >> 4 & 1,0xad01,uVar8 * 2 >> 0x11 & 3);
        local_50 = *(int *)(param_1 + 0x54) + piVar10[2];
        local_4c = *(int *)(param_1 + 0x58) + piVar10[2] + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_50,*(byte *)(param_1 + 10) >> 4 & 1,0xad02,uVar8 * 2 >> 0x11 & 3);
        local_50 = *(int *)(param_1 + 0x54) + piVar10[4];
        local_4c = *(int *)(param_1 + 0x58) + piVar10[4] + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_50,*(byte *)(param_1 + 10) >> 4 & 1,0xad03,uVar8 * 2 >> 0x11 & 3);
        local_50 = *(int *)(param_1 + 0x54) + piVar10[6];
        local_4c = *(int *)(param_1 + 0x58) + piVar10[6] + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_50,*(byte *)(param_1 + 10) >> 4 & 1,0xad04,uVar8 * 2 >> 0x11 & 3);
        local_50 = *(int *)(param_1 + 0x54) + piVar10[8];
        local_4c = *(int *)(param_1 + 0x58) + piVar10[8] + -0x1e00;
        uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar8 & 0x7fffffff;
        sub_080BE758(&local_50,*(byte *)(param_1 + 10) >> 4 & 1,0xad05,uVar8 * 2 >> 0x11 & 3);
        piVar10 = piVar10 + 10;
        local_38 = local_38 + -1;
      } while (-1 < local_38);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *local_2c = 0;
      *local_28 = 0;
      *local_24 = 0;
      bVar1 = *(byte *)(param_1 + 10);
      bVar2 = 0xfb;
      goto LAB_080a4734;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    iVar9 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar9 + 0x8c) = 0;
    *(undefined4 *)(iVar9 + 0x90) = 0;
    *(undefined *)(iVar9 + 0x94) = 0;
    *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    goto LAB_080a45aa;
  case 6:
    sub_080177F4(param_1);
    uVar8 = *(uint *)(param_1 + 0xc0);
    if ((uVar8 & 0x10) == 0) {
      return in_lr;
    }
    uVar3 = 0xffffffef;
    goto LAB_080a45a6;
  case 7:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_0800471C(0x113);
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      iVar9 = *(int *)(param_1 + 0x2c);
      *(undefined4 *)(iVar9 + 0x8c) = 0;
      *(undefined4 *)(iVar9 + 0x90) = 0;
      *(undefined *)(iVar9 + 0x94) = 0;
      *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfb;
    }
    piVar10 = &DAT_083681b4;
    local_30 = 1;
    do {
      local_40 = *(int *)(param_1 + 0x54) + *piVar10;
      local_3c = *(int *)(param_1 + 0x58) + *piVar10 + -0x1e00;
      uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      sub_080BE758(&local_40,*(byte *)(param_1 + 10) >> 4 & 1,0xad01,uVar8 * 2 >> 0x11 & 3);
      local_40 = *(int *)(param_1 + 0x54) + piVar10[2];
      local_3c = *(int *)(param_1 + 0x58) + piVar10[2] + -0x1e00;
      uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      sub_080BE758(&local_40,*(byte *)(param_1 + 10) >> 4 & 1,0xad02,uVar8 * 2 >> 0x11 & 3);
      local_40 = *(int *)(param_1 + 0x54) + piVar10[4];
      local_3c = *(int *)(param_1 + 0x58) + piVar10[4] + -0x1e00;
      uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      sub_080BE758(&local_40,*(byte *)(param_1 + 10) >> 4 & 1,0xad03,uVar8 * 2 >> 0x11 & 3);
      local_40 = *(int *)(param_1 + 0x54) + piVar10[6];
      local_3c = *(int *)(param_1 + 0x58) + piVar10[6] + -0x1e00;
      uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      sub_080BE758(&local_40,*(byte *)(param_1 + 10) >> 4 & 1,0xad04,uVar8 * 2 >> 0x11 & 3);
      local_40 = *(int *)(param_1 + 0x54) + piVar10[8];
      local_3c = *(int *)(param_1 + 0x58) + piVar10[8] + -0x1e00;
      uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      sub_080BE758(&local_40,*(byte *)(param_1 + 10) >> 4 & 1,0xad05,uVar8 * 2 >> 0x11 & 3);
      piVar10 = piVar10 + 10;
      local_30 = local_30 + -1;
    } while (-1 < local_30);
    bVar1 = *(byte *)(param_1 + 10);
    bVar2 = 0xfe;
    goto LAB_080a4734;
  default:
    goto switchD_080a3f7c_caseD_9;
  }
}

