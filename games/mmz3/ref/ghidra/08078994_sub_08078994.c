// sub_08078994 at 0x08078994 (thumb)

undefined4 sub_08078994(int param_1)

{
  byte bVar1;
  undefined uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  uint *local_24;
  
  if ((DAT_02030108 & 0x40) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar6 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    goto LAB_08079082;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x3504);
    uVar9 = *(uint *)(param_1 + 0x8c);
    if (((uVar9 & 0x200) == 0) || ((uVar9 & 0x10000) == 0)) {
      uVar2 = 10;
    }
    else {
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0xe) = uVar2;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  case 1:
  case 10:
    sub_080177F4(param_1);
    goto LAB_08078c42;
  case 2:
    *(undefined4 *)(param_1 + 0x60) = 0;
    local_44 = *(int *)(param_1 + 0x58);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_48 = *(int *)(param_1 + 0x54) + -0x800;
    }
    else {
      local_48 = *(int *)(param_1 + 0x54) + 0x800;
    }
    sub_080B27F0(local_48,local_44,1);
    uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_48 = ((uVar9 * 2 >> 0x11 & 0xf) - 8) * 0x100 + local_48;
    uVar9 = (uVar9 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar9 & 0x7fffffff;
    local_44 = ((uVar9 * 2 >> 0x11 & 0xf) - 8) * 0x100 + local_44;
    local_24 = &DAT_0202f608;
    sub_080B27F0(local_48,local_44,1);
    uVar9 = *local_24 * 0x343fd + 0x269ec3;
    local_48 = ((uVar9 * 2 >> 0x11 & 0xf) - 8) * 0x100 + local_48;
    uVar9 = (uVar9 & 0x7fffffff) * 0x343fd + 0x269ec3;
    *local_24 = uVar9 & 0x7fffffff;
    local_44 = ((uVar9 * 2 >> 0x11 & 0xf) - 8) * 0x100 + local_44;
    sub_080B27F0(local_48,local_44,0);
    sub_08024FE4(2,param_1 + 0x54);
    uVar2 = 1;
    break;
  case 3:
    uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_44 = *(int *)(param_1 + 0x58) - (uVar9 * 2 >> 0x11 & 0x7ff);
    uVar9 = (uVar9 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar9 & 0x7fffffff;
    local_48 = *(int *)(param_1 + 0x54) + -0x400 + (uVar9 * 2 >> 0x11 & 0x7ff);
    iVar7 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar7;
    if (0x700 < iVar7) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar8;
    iVar7 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -4 >> 8);
    *(int *)(param_1 + 0x5c) = iVar7;
    iVar7 = *(int *)(param_1 + 0x54) + iVar7;
    *(int *)(param_1 + 0x54) = iVar7;
    if (((*(char *)(param_1 + 0x12) != '\0') &&
        (cVar4 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar4, cVar4 != '\0'))
       && (sVar5 = sub_08009A3C(iVar7,iVar8), sVar5 == 0)) {
      return in_lr;
    }
    sub_080BCA34(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080175BC(param_1);
    sub_08017700(param_1,0x3504);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x24) = 0;
    sub_080177F4(param_1);
    uVar2 = 0x44;
    break;
  case 4:
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    sub_080177F4(param_1);
    cVar4 = sub_080FE4D8(*(undefined *)(param_1 + 0x12));
    if (cVar4 == '\0') {
      cVar4 = *(char *)(param_1 + 0xf) + -1;
      *(char *)(param_1 + 0xf) = cVar4;
      *(char *)(param_1 + 0x24) = cVar4;
    }
    cVar4 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),10);
    if (cVar4 == '\0') {
      uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_44 = *(int *)(param_1 + 0x58) - (uVar9 * 2 >> 0x11 & 0x7ff);
      uVar9 = (uVar9 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar9 & 0x7fffffff;
      local_48 = *(int *)(param_1 + 0x54) + -0x400 + (uVar9 * 2 >> 0x11 & 0x7ff);
    }
    iVar7 = *(int *)(param_1 + 0x60) + 4;
    *(int *)(param_1 + 0x60) = iVar7;
    if (0x700 < iVar7) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar7 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -4 >> 8);
    *(int *)(param_1 + 0x5c) = iVar7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
    sVar5 = sub_08009A3C();
    if (sVar5 == 0) {
      if (*(char *)(param_1 + 0x12) == '\0') {
        return in_lr;
      }
      cVar4 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar4;
      if (cVar4 != '\0') {
        return in_lr;
      }
      local_48 = *(int *)(param_1 + 0x54);
      local_44 = *(int *)(param_1 + 0x58);
      sub_080B2484(2,&local_48);
      uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar9 & 0x7fffffff;
      uVar9 = uVar9 * 2 >> 0x11 & 3;
      local_38 = *(undefined4 *)(param_1 + 0x54);
      local_34 = *(undefined4 *)(param_1 + 0x58);
      sub_080BCA88(&local_38,*(byte *)(param_1 + 10) >> 4 & 1,0x3506,uVar9);
      sub_080BCA88(&local_38,*(byte *)(param_1 + 10) >> 4 & 1,0x3507,uVar9);
      sub_080BCA88(&local_38,*(byte *)(param_1 + 10) >> 4 & 1,0x3508,uVar9);
      sub_0800471C(0x31);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
      iVar7 = param_1 + 0x54;
    }
    else {
      local_48 = *(int *)(param_1 + 0x54);
      local_44 = *(int *)(param_1 + 0x58);
      sub_080B2484(2,&local_48);
      uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar9 & 0x7fffffff;
      uVar9 = uVar9 * 2 >> 0x11 & 3;
      local_40 = *(undefined4 *)(param_1 + 0x54);
      local_3c = *(undefined4 *)(param_1 + 0x58);
      sub_080BCA88(&local_40,*(byte *)(param_1 + 10) >> 4 & 1,0x3506,uVar9);
      sub_080BCA88(&local_40,*(byte *)(param_1 + 10) >> 4 & 1,0x3507,uVar9);
      sub_080BCA88(&local_40,*(byte *)(param_1 + 10) >> 4 & 1,0x3508,uVar9);
      sub_0800471C(0x31);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
      iVar7 = param_1 + 0x54;
    }
    goto LAB_08079066;
  default:
    goto switchD_080789fc_caseD_5;
  case 0xb:
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xc:
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    iVar7 = *(int *)(param_1 + 0x60) + 4;
    *(int *)(param_1 + 0x60) = iVar7;
    if (0x700 < iVar7) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar4 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),10);
    if (cVar4 == '\0') {
      uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_44 = *(int *)(param_1 + 0x58) - (uVar9 * 2 >> 0x11 & 0x7ff);
      uVar9 = (uVar9 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar9 & 0x7fffffff;
      local_48 = *(int *)(param_1 + 0x54) + -0x400 + (uVar9 * 2 >> 0x11 & 0x7ff);
    }
    if ((bVar1 == 0) || (*(byte *)(param_1 + 0x12) = bVar1 - 1, (byte)(bVar1 - 1) == '\0')) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    return in_lr;
  case 0xd:
    local_48 = *(int *)(param_1 + 0x54);
    local_44 = *(int *)(param_1 + 0x58);
    sub_080B2484(1,&local_48);
    sub_0800471C(0x31);
    local_28 = param_1 + 0x54;
    sub_08024FE4(2,local_28);
    uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar9 & 0x7fffffff;
    uVar9 = uVar9 * 2 >> 0x11 & 3;
    local_30 = *(undefined4 *)(param_1 + 0x54);
    local_2c = *(undefined4 *)(param_1 + 0x58);
    sub_080BCA88(&local_30,*(byte *)(param_1 + 10) >> 4 & 1,0x3506,uVar9);
    sub_080BCA88(&local_30,*(byte *)(param_1 + 10) >> 4 & 1,0x3507,uVar9);
    sub_080BCA88(&local_30,*(byte *)(param_1 + 10) >> 4 & 1,0x3508,uVar9);
    local_44 = local_44 + -0x800;
    sub_080B27F0(local_48,local_44,1);
    uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_48 = local_48 + ((uVar9 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar9 = (uVar9 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar9 & 0x7fffffff;
    local_44 = local_44 + ((uVar9 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    sub_080B27F0(local_48,local_44,1);
    uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_48 = local_48 + ((uVar9 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar9 = (uVar9 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar9 & 0x7fffffff;
    local_44 = local_44 + ((uVar9 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    sub_080B27F0(local_48,local_44,0);
    iVar7 = local_28;
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
LAB_08079066:
    sub_080250C4(param_1,iVar7);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar6 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_08079082:
    *(undefined4 *)(param_1 + 0x14) = uVar6;
    goto switchD_080789fc_caseD_5;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
LAB_08078c42:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080789fc_caseD_5:
  return in_lr;
}

