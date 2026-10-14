// sub_08067160 at 0x08067160 (thumb)

undefined4 sub_08067160(int param_1)

{
  undefined uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
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
    goto LAB_08067546;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x606);
    uVar7 = *(uint *)(param_1 + 0x8c);
    if (((uVar7 & 0x200) == 0) || ((uVar7 & 0x10000) == 0)) {
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
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(char *)(param_1 + 0xb8) == '\0') {
      local_38 = *(int *)(param_1 + 0x54) + -0x800;
    }
    else {
      local_38 = *(int *)(param_1 + 0x54) + 0x800;
    }
    local_34 = *(int *)(param_1 + 0x58) + 0x800;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08024FE4(1,param_1 + 0x54);
    }
    uVar1 = 1;
    goto LAB_080672fc;
  case 3:
    iVar5 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    iVar5 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -4 >> 8);
    *(int *)(param_1 + 0x5c) = iVar5;
    iVar5 = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x54) = iVar5;
    if (((*(char *)(param_1 + 0x12) != '\0') &&
        (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0'))
       && (sVar3 = sub_08009A3C(iVar5,iVar6), sVar3 == 0)) {
      return in_lr;
    }
    sub_080B714C(param_1 + 0x54,*(undefined *)(param_1 + 0xb8));
    sub_08017700(param_1,0x606);
    sub_080177F4(param_1);
    uVar1 = 0x44;
LAB_080672fc:
    *(undefined *)(param_1 + 0x12) = uVar1;
    break;
  case 4:
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    sub_080177F4(param_1);
    iVar5 = *(int *)(param_1 + 0x60) + 0x10;
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
      uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar7 & 0x7fffffff;
      uVar7 = uVar7 * 2 >> 0x11 & 3;
      local_28 = *(undefined4 *)(param_1 + 0x54);
      local_24 = *(undefined4 *)(param_1 + 0x58);
      puVar8 = (undefined *)(param_1 + 0xb8);
      sub_080B71A0(&local_28,*puVar8,0x608,uVar7);
      sub_080B71A0(&local_28,*puVar8,0x609,uVar7);
      sub_080B71A0(&local_28,*puVar8,0x60a,uVar7);
      sub_0800471C(0x2a);
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (DAT_0203016c < 9999) {
          DAT_0203016c = DAT_0203016c + 1;
        }
        goto LAB_0806752a;
      }
    }
    else {
      local_38 = *(int *)(param_1 + 0x54);
      local_34 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(2,&local_38);
      uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar7 & 0x7fffffff;
      uVar7 = uVar7 * 2 >> 0x11 & 3;
      local_30 = *(undefined4 *)(param_1 + 0x54);
      local_2c = *(undefined4 *)(param_1 + 0x58);
      puVar8 = (undefined *)(param_1 + 0xb8);
      sub_080B71A0(&local_30,*puVar8,0x608,uVar7);
      sub_080B71A0(&local_30,*puVar8,0x609,uVar7);
      sub_080B71A0(&local_30,*puVar8,0x60a,uVar7);
      sub_0800471C(0x2a);
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (DAT_0203016c < 9999) {
          DAT_0203016c = DAT_0203016c + 1;
        }
LAB_0806752a:
        sub_080250C4(param_1,param_1 + 0x54);
      }
    }
    goto LAB_0806752e;
  default:
    goto switchD_080671c4_caseD_5;
  case 0xb:
    local_38 = *(int *)(param_1 + 0x54);
    local_34 = *(undefined4 *)(param_1 + 0x58);
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08024FE4(1);
      sub_080B2484(1,&local_38);
      sub_0800471C(0x2a);
      uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar7 & 0x7fffffff;
      uVar7 = uVar7 * 2 >> 0x11 & 3;
      local_20 = *(undefined4 *)(param_1 + 0x54);
      local_1c = *(undefined4 *)(param_1 + 0x58);
      puVar8 = (undefined *)(param_1 + 0xb8);
      sub_080B71A0(&local_20,*puVar8,0x608,uVar7);
      sub_080B71A0(&local_20,*puVar8,0x609,uVar7);
      sub_080B71A0(&local_20,*puVar8,0x60a,uVar7);
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (DAT_0203016c < 9999) {
          DAT_0203016c = DAT_0203016c + 1;
        }
        goto LAB_0806752a;
      }
    }
LAB_0806752e:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_08067546:
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    goto switchD_080671c4_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080671c4_caseD_5:
  return in_lr;
}

