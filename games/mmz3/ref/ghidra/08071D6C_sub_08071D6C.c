// sub_08071D6C at 0x08071D6C (thumb)

undefined4 sub_08071D6C(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((DAT_02030108 & 0x40) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    goto LAB_080723f8;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x2708);
    uVar8 = *(uint *)(param_1 + 0x8c);
    if (((uVar8 & 0x200) == 0) || ((uVar8 & 0x10000) == 0)) {
      uVar1 = 10;
    }
    else {
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0xe) = uVar1;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  case 1:
  case 10:
    sub_080177F4(param_1);
    goto LAB_08071f84;
  case 2:
    *(undefined4 *)(param_1 + 0x60) = 0;
    local_3c = *(int *)(param_1 + 0x54);
    local_38 = *(int *)(param_1 + 0x58) + 0x800;
    sub_08024FE4(4,param_1 + 0x54);
    uVar1 = 1;
    break;
  case 3:
    uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_38 = *(int *)(param_1 + 0x58) - (uVar8 * 2 >> 0x11 & 0x7ff);
    uVar8 = (uVar8 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar8 & 0x7fffffff;
    local_3c = *(int *)(param_1 + 0x54) + -0x400 + (uVar8 * 2 >> 0x11 & 0x7ff);
    sub_080BA4C0(&local_3c,0);
    sub_080BA4C0(&local_3c,1);
    sub_080BA4C0(&local_3c,1);
    iVar6 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar7;
    iVar6 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -4 >> 8);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar6 = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x54) = iVar6;
    if (((*(char *)(param_1 + 0x12) != '\0') &&
        (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0'))
       && (sVar4 = sub_08009A3C(iVar6,iVar7), sVar4 == 0)) {
      return in_lr;
    }
    sub_080BA294(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080175BC(param_1);
    sub_08017700(param_1,0x2709);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x24) = 0;
    sub_080177F4(param_1);
    uVar1 = 0x44;
    break;
  case 4:
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    sub_080177F4(param_1);
    cVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x12));
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_1 + 0xf) + -1;
      *(char *)(param_1 + 0xf) = cVar3;
      *(char *)(param_1 + 0x24) = cVar3;
    }
    cVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),10);
    if (cVar3 == '\0') {
      uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_38 = *(int *)(param_1 + 0x58) - (uVar8 * 2 >> 0x11 & 0x7ff);
      uVar8 = (uVar8 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      local_3c = *(int *)(param_1 + 0x54) + -0x400 + (uVar8 * 2 >> 0x11 & 0x7ff);
      sub_080BA4C0(&local_3c,0);
      sub_080BA4C0(&local_3c,1);
      sub_080BA4C0(&local_3c,1);
    }
    iVar6 = *(int *)(param_1 + 0x60) + 4;
    *(int *)(param_1 + 0x60) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar6 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -4 >> 8);
    *(int *)(param_1 + 0x5c) = iVar6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    sVar4 = sub_08009A3C();
    if (sVar4 == 0) {
      if (*(char *)(param_1 + 0x12) == '\0') {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      local_3c = *(int *)(param_1 + 0x54);
      local_38 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(2,&local_3c);
      uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      uVar8 = uVar8 * 2 >> 0x11 & 3;
      local_2c = *(undefined4 *)(param_1 + 0x54);
      local_28 = *(undefined4 *)(param_1 + 0x58);
      sub_080BA2E8(&local_2c,*(byte *)(param_1 + 10) >> 4 & 1,10000,uVar8);
      sub_080BA2E8(&local_2c,*(byte *)(param_1 + 10) >> 4 & 1,0x2711,uVar8);
      sub_080BA2E8(&local_2c,*(byte *)(param_1 + 10) >> 4 & 1,0x2712,uVar8);
      sub_080BA2E8(&local_2c,*(byte *)(param_1 + 10) >> 4 & 1,0x2713,uVar8);
      sub_080BA2E8(&local_2c,*(byte *)(param_1 + 10) >> 4 & 1,0x2714,uVar8);
      sub_080BA2E8(&local_2c,*(byte *)(param_1 + 10) >> 4 & 1,0x2715,uVar8);
      sub_0800471C(0x31);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
    }
    else {
      local_3c = *(int *)(param_1 + 0x54);
      local_38 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(2,&local_3c);
      uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      uVar8 = uVar8 * 2 >> 0x11 & 3;
      local_34 = *(undefined4 *)(param_1 + 0x54);
      local_30 = *(undefined4 *)(param_1 + 0x58);
      sub_080BA2E8(&local_34,*(byte *)(param_1 + 10) >> 4 & 1,10000,uVar8);
      sub_080BA2E8(&local_34,*(byte *)(param_1 + 10) >> 4 & 1,0x2711,uVar8);
      sub_080BA2E8(&local_34,*(byte *)(param_1 + 10) >> 4 & 1,0x2712,uVar8);
      sub_080BA2E8(&local_34,*(byte *)(param_1 + 10) >> 4 & 1,0x2713,uVar8);
      sub_080BA2E8(&local_34,*(byte *)(param_1 + 10) >> 4 & 1,0x2714,uVar8);
      sub_080BA2E8(&local_34,*(byte *)(param_1 + 10) >> 4 & 1,0x2715,uVar8);
      sub_0800471C(0x31);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
    }
    goto LAB_080723dc;
  default:
    goto switchD_08071dd4_caseD_5;
  case 0xb:
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x32;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xc:
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar6 = *(int *)(param_1 + 0x60) + 4;
    *(int *)(param_1 + 0x60) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),10);
    if (cVar3 == '\0') {
      uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_38 = *(int *)(param_1 + 0x58) - (uVar8 * 2 >> 0x11 & 0x7ff);
      uVar8 = (uVar8 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      local_3c = *(int *)(param_1 + 0x54) + -0x400 + (uVar8 * 2 >> 0x11 & 0x7ff);
      sub_080BA4C0(&local_3c,0);
      sub_080BA4C0(&local_3c,1);
      sub_080BA4C0(&local_3c,1);
    }
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    return in_lr;
  case 0xd:
    local_3c = *(int *)(param_1 + 0x54);
    local_38 = *(undefined4 *)(param_1 + 0x58);
    sub_080B2484(1,&local_3c);
    sub_0800471C(0x31);
    sub_08024FE4(4,param_1 + 0x54);
    uVar8 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar8 & 0x7fffffff;
    uVar8 = uVar8 * 2 >> 0x11 & 3;
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(undefined4 *)(param_1 + 0x58);
    sub_080BA2E8(&local_24,*(byte *)(param_1 + 10) >> 4 & 1,10000,uVar8);
    sub_080BA2E8(&local_24,*(byte *)(param_1 + 10) >> 4 & 1,0x2711,uVar8);
    sub_080BA2E8(&local_24,*(byte *)(param_1 + 10) >> 4 & 1,0x2712,uVar8);
    sub_080BA2E8(&local_24,*(byte *)(param_1 + 10) >> 4 & 1,0x2713,uVar8);
    sub_080BA2E8(&local_24,*(byte *)(param_1 + 10) >> 4 & 1,0x2714,uVar8);
    sub_080BA2E8(&local_24,*(byte *)(param_1 + 10) >> 4 & 1,0x2715,uVar8);
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
LAB_080723dc:
    sub_080250C4(param_1,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar5 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_080723f8:
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    goto switchD_08071dd4_caseD_5;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
LAB_08071f84:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08071dd4_caseD_5:
  return in_lr;
}

