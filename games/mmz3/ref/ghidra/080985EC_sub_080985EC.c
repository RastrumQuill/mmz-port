// sub_080985EC at 0x080985EC (thumb)

undefined4 sub_080985EC(int param_1)

{
  undefined uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 in_lr;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  if (((DAT_02030108 & 0x40) != 0) && (*(char *)(param_1 + 0x11) != '\x01')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    goto LAB_08098aee;
  }
  iVar8 = param_1 + 0x54;
  uVar5 = sub_0801A9A8(&DAT_02030288,iVar8);
  if ((0x3000 < uVar5) && (DAT_020302c4 + 0x4fff < *(int *)(param_1 + 0x58) + 0x2000)) {
    local_40 = *(int *)(param_1 + 0x54);
    local_3c = *(int *)(param_1 + 0x58);
    sub_080B2484(1,&local_40);
    sub_0800471C(0x2a);
    sub_08024FE4(1,iVar8);
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      uVar5 = uVar5 * 2 >> 0x11 & 3;
      local_38 = *(int *)(param_1 + 0x54);
      local_34 = *(undefined4 *)(param_1 + 0x58);
      piVar9 = &local_38;
      puVar7 = (undefined *)(param_1 + 0xb8);
      sub_080C703C(piVar9,*puVar7,0xd50f,uVar5);
      sub_080C703C(piVar9,*puVar7,0xd50e,uVar5);
      sub_080C703C(piVar9,*puVar7,0xd510,uVar5);
      sub_080C703C(piVar9,*puVar7,0xd50e,uVar5);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_38 = *(int *)(param_1 + 0x54) + -0x2000;
        goto LAB_08098a70;
      }
      local_38 = *(int *)(param_1 + 0x54) + 0x2000;
      local_34 = *(undefined4 *)(param_1 + 0x58);
      uVar1 = *puVar7;
LAB_08098ab6:
      sub_080C703C(piVar9,uVar1,0xd50d,uVar5);
    }
    goto LAB_08098ac0;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xd505);
    uVar5 = *(uint *)(param_1 + 0x8c);
    if (((uVar5 & 0x200) == 0) || ((uVar5 & 0x10000) == 0)) {
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
    sub_08017700(param_1,0xd505);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    local_40 = *(int *)(param_1 + 0x54);
    local_3c = *(int *)(param_1 + 0x58);
    pcVar10 = (char *)(param_1 + 0xb8);
    if (*(char *)(param_1 + 0xf) == '\0') {
      sub_080C6FE4(&local_40,*pcVar10);
    }
    if (*pcVar10 == '\0') {
      local_40 = local_40 + -0x800;
      uVar4 = 0x80;
    }
    else {
      local_40 = local_40 + 0x800;
      uVar4 = 0xffffff80;
    }
    local_3c = local_3c + 0x800;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    sub_08024FE4(1,iVar8);
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      uVar5 = uVar5 * 2 >> 0x11 & 3;
      local_30 = *(undefined4 *)(param_1 + 0x54);
      local_2c = *(undefined4 *)(param_1 + 0x58);
      sub_080C703C(&local_30,*pcVar10,0xd50f,uVar5);
      sub_080C703C(&local_30,*pcVar10,0xd510,uVar5);
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 4:
    sub_080177F4(param_1);
    iVar6 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar6 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -4 >> 8);
    *(int *)(param_1 + 0x5c) = iVar6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    sVar3 = sub_08009A3C();
    if (((sVar3 != 0) && (0 < *(int *)(param_1 + 0x60))) &&
       (iVar6 = sub_08025794(*(undefined4 *)(param_1 + 0xbc)), iVar6 != 0)) {
      local_40 = *(int *)(param_1 + 0x54);
      local_3c = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(2,&local_40);
      sub_0800471C(0x2a);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
      sub_080250C4(param_1,iVar8);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    iVar6 = sub_08025794(*(undefined4 *)(param_1 + 0xbc));
    if (iVar6 == 0) {
      return in_lr;
    }
    local_40 = *(int *)(param_1 + 0x54);
    local_3c = *(int *)(param_1 + 0x58);
    sub_080B2484(2,&local_40);
    sub_0800471C(0x2a);
    goto LAB_08098ac0;
  default:
    goto switchD_08098754_caseD_5;
  case 0xb:
    iVar6 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar6 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -4 >> 8);
    *(int *)(param_1 + 0x5c) = iVar6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    iVar6 = sub_08025794(*(undefined4 *)(param_1 + 0xbc));
    if (iVar6 == 0) {
      return in_lr;
    }
    local_40 = *(int *)(param_1 + 0x54);
    local_3c = *(int *)(param_1 + 0x58);
    sub_080B2484(1,&local_40);
    sub_0800471C(0x2a);
    sub_08024FE4(1,iVar8);
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      uVar5 = uVar5 * 2 >> 0x11 & 3;
      local_28 = *(int *)(param_1 + 0x54);
      local_24 = *(undefined4 *)(param_1 + 0x58);
      piVar9 = &local_28;
      puVar7 = (undefined *)(param_1 + 0xb8);
      sub_080C703C(piVar9,*puVar7,0xd50f,uVar5);
      sub_080C703C(piVar9,*puVar7,0xd50e,uVar5);
      sub_080C703C(piVar9,*puVar7,0xd510,uVar5);
      sub_080C703C(piVar9,*puVar7,0xd50e,uVar5);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        local_28 = *(int *)(param_1 + 0x54) + 0x2000;
        local_24 = *(undefined4 *)(param_1 + 0x58);
        uVar1 = *puVar7;
        goto LAB_08098ab6;
      }
      local_28 = *(int *)(param_1 + 0x54) + -0x2000;
LAB_08098a70:
      piVar9[1] = *(int *)(param_1 + 0x58);
      sub_080C703C(piVar9,*(undefined *)(param_1 + 0xb8),0xd50d,uVar5);
    }
LAB_08098ac0:
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
    sub_080250C4(param_1,iVar8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_08098aee:
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    goto switchD_08098754_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08098754_caseD_5:
  return in_lr;
}

