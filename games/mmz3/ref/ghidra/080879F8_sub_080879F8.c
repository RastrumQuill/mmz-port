// sub_080879F8 at 0x080879F8 (thumb)

undefined4 sub_080879F8(int param_1)

{
  undefined uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((DAT_02030108 & 0x40) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    goto LAB_08087dbc;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x6b01);
    uVar6 = *(uint *)(param_1 + 0x8c);
    if (((uVar6 & 0x200) == 0) || ((uVar6 & 0x10000) == 0)) {
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
    break;
  case 1:
  case 10:
    break;
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 3:
    sub_08017700(param_1,0x6b01);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    local_38 = *(int *)(param_1 + 0x54);
    local_34 = *(int *)(param_1 + 0x58);
    sub_080C2948(&local_38,*(byte *)(param_1 + 10) >> 4 & 1);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_38 = local_38 + -0x800;
      uVar4 = 0x80;
    }
    else {
      local_38 = local_38 + 0x800;
      uVar4 = 0xffffff80;
    }
    local_34 = local_34 + 0x800;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    sub_08024FE4(2,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    *(undefined *)(param_1 + 0x12) = 0x32;
    break;
  case 4:
    sub_080177F4(param_1);
    iVar5 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar5 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -4 >> 8);
    *(int *)(param_1 + 0x5c) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    sVar3 = sub_08009A3C();
    if (sVar3 == 0) {
      if (*(char *)(param_1 + 0x12) == '\0') {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      local_38 = *(int *)(param_1 + 0x54);
      local_34 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(2,&local_38);
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      uVar6 = uVar6 * 2 >> 0x11 & 3;
      local_28 = *(undefined4 *)(param_1 + 0x54);
      local_24 = *(undefined4 *)(param_1 + 0x58);
      sub_080C299C(&local_28,*(byte *)(param_1 + 10) >> 4 & 1,0x6b04,uVar6);
      sub_080C299C(&local_28,*(byte *)(param_1 + 10) >> 4 & 1,0x6b05,uVar6);
      sub_080C299C(&local_28,*(byte *)(param_1 + 10) >> 4 & 1,0x6b06,uVar6);
      sub_0800471C(0x2a);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
    }
    else {
      local_38 = *(int *)(param_1 + 0x54);
      local_34 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(2,&local_38);
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      uVar6 = uVar6 * 2 >> 0x11 & 3;
      local_30 = *(undefined4 *)(param_1 + 0x54);
      local_2c = *(undefined4 *)(param_1 + 0x58);
      sub_080C299C(&local_30,*(byte *)(param_1 + 10) >> 4 & 1,0x6b04,uVar6);
      sub_080C299C(&local_30,*(byte *)(param_1 + 10) >> 4 & 1,0x6b05,uVar6);
      sub_080C299C(&local_30,*(byte *)(param_1 + 10) >> 4 & 1,0x6b06,uVar6);
      sub_0800471C(0x2a);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
    }
    goto LAB_08087da0;
  default:
    goto switchD_08087a5c_caseD_5;
  case 0xb:
    local_38 = *(int *)(param_1 + 0x54);
    local_34 = *(undefined4 *)(param_1 + 0x58);
    sub_080B2484(1,&local_38);
    sub_0800471C(0x2a);
    sub_08024FE4(2,param_1 + 0x54);
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar6 & 0x7fffffff;
    uVar6 = uVar6 * 2 >> 0x11 & 3;
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    sub_080C299C(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x6b04,uVar6);
    sub_080C299C(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x6b05,uVar6);
    sub_080C299C(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x6b06,uVar6);
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
LAB_08087da0:
    sub_080250C4(param_1,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_08087dbc:
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    goto switchD_08087a5c_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08087a5c_caseD_5:
  return in_lr;
}

