// sub_0804EBF4 at 0x0804EBF4 (thumb)

undefined4 sub_0804EBF4(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xab11);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 0x34;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar8 = FUN_080fe2f8(0x1a680,0x34);
    *(int *)(param_1 + 0x60) = -iVar8;
    uVar2 = 0x33;
    break;
  case 1:
  case 0x15:
  case 0x1f:
    goto switchD_0804ec08_caseD_1;
  case 2:
    sub_08017700(param_1,0xab0d);
    sub_08007390(param_1 + 0x74,&DAT_0835fbd8);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar8 = *(int *)(param_1 + 0x60) + 0x50;
    *(int *)(param_1 + 0x60) = iVar8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    if ((0 < iVar8) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08017700(param_1,0xab12);
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 1) == 0) {
        uVar4 = sub_080A311C(param_1,param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
        *(undefined4 *)(param_1 + 0xc4) = uVar4;
        *(undefined *)(param_1 + 0xf) = 1;
      }
      else {
        uVar4 = sub_080A3174(param_1,param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
        *(undefined4 *)(param_1 + 0xc4) = uVar4;
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
LAB_0804f30a:
    sub_080177F4(param_1);
LAB_0804f310:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_0804f320;
  case 4:
    sub_08017700(param_1,0xab12);
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    puVar7 = (uint *)(*(int *)(param_1 + 0xc4) + 0xc0);
    *puVar7 = *puVar7 | 1;
    sub_0800471C(0xde);
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      *(undefined *)(param_1 + 0xe) = 10;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 0x28;
    return in_lr;
  default:
    goto switchD_0804ec08_caseD_6;
  case 10:
    puVar7 = (uint *)(*(int *)(param_1 + 0xc4) + 0xc0);
    *puVar7 = *puVar7 | 8;
    sub_0800471C(0xd5);
    sub_08017700(param_1,0xab13);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    if (1 < *(byte *)(*(int *)(param_1 + 0xc4) + 0xc)) {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    goto LAB_0804f30a;
  case 0xc:
    if (1 < *(byte *)(*(int *)(param_1 + 0xc4) + 0xc)) {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    if (*(char *)(param_1 + 0x13) != '\x01') {
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 1) == 0) {
        uVar2 = 0x1e;
      }
      else {
        uVar2 = 0x14;
      }
      *(undefined *)(param_1 + 0xe) = uVar2;
      *(undefined *)(param_1 + 0xe) = 0x1e;
      return in_lr;
    }
    goto LAB_0804f35c;
  case 0x14:
    sub_08017700(param_1,0xab0c);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar8 = *(int *)(param_1 + 0x54);
      iVar5 = iVar8 + -0x9800;
      iVar6 = *(int *)(param_1 + 0xd0);
      if (iVar8 + -0xd800 < iVar6) {
        iVar5 = 0x4000;
LAB_0804ef78:
        iVar5 = iVar6 + iVar5;
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x54);
      iVar5 = iVar8 + 0x9800;
      iVar6 = *(int *)(param_1 + 0xdc);
      if (iVar6 < iVar8 + 0xd800) {
        iVar5 = -0x4000;
        goto LAB_0804ef78;
      }
    }
    *(undefined *)(param_1 + 0x12) = 0x38;
    uVar4 = FUN_080fe2f8(iVar5 - iVar8,0x38);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar8 = FUN_080fe2f8(0x1ea00,0x38);
    *(int *)(param_1 + 0x60) = -iVar8;
    uVar2 = 0x37;
    break;
  case 0x16:
    sub_08017700(param_1,0xab0d);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x17:
    iVar8 = *(int *)(param_1 + 0x60) + 0x50;
    *(int *)(param_1 + 0x60) = iVar8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    if ((0 < iVar8) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08007390(param_1 + 0x74,&DAT_0835fbd8);
    }
    iVar8 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((iVar8 + -0x2d00 < *(int *)(param_1 + 0x58)) && (0 < *(int *)(param_1 + 0x60))) {
      puVar7 = (uint *)(*(int *)(param_1 + 0xc4) + 0xc0);
      *puVar7 = *puVar7 | 0x10;
    }
    goto LAB_0804f30a;
  case 0x18:
    sub_08017700(param_1,0xab0f);
    sub_0800471C(0xde);
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    goto LAB_0804f150;
  case 0x19:
  case 0x23:
    goto switchD_0804ec08_caseD_19;
  case 0x1e:
    sub_08017700(param_1,0xab14);
    sub_08007390(param_1 + 0x74,&DAT_0835fc68);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar8 = *(int *)(param_1 + 0x54);
      if (iVar8 + -0xd800 < *(int *)(param_1 + 0xd0)) {
        iVar6 = *(int *)(param_1 + 0xd0) + 0x4000;
      }
      else {
        iVar6 = iVar8 + -0x5800;
      }
      uVar4 = 0xfffffd00;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x54);
      if (*(int *)(param_1 + 0xdc) < iVar8 + 0xd800) {
        iVar6 = *(int *)(param_1 + 0xdc) + -0x4000;
      }
      else {
        iVar6 = iVar8 + 0x5800;
      }
      uVar4 = 0x300;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar5 = iVar6 - iVar8;
    if (iVar5 < 1) {
      iVar5 = iVar8 - iVar6;
    }
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x68) = iVar5 + -0x2000;
    *(undefined4 *)(param_1 + 100) = 0;
    goto LAB_0804ed12;
  case 0x20:
    sub_08017700(param_1,0xab15);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x21:
    iVar8 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    iVar8 = *(int *)(param_1 + 100) + iVar8;
    *(int *)(param_1 + 100) = iVar8;
    if (*(int *)(param_1 + 0x68) < iVar8) {
      puVar7 = (uint *)(*(int *)(param_1 + 0xc4) + 0xc0);
      *puVar7 = *puVar7 | 0x10;
    }
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 100) <= *(int *)(param_1 + 0x60)) {
      return in_lr;
    }
    goto LAB_0804f320;
  case 0x22:
    sub_08017700(param_1,0xab16);
LAB_0804f150:
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804ec08_caseD_19:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  case 0x28:
    sub_08017700(param_1,0xab17);
    sub_08007390(param_1 + 0x74,&DAT_0835fc20);
    puVar7 = (uint *)(*(int *)(param_1 + 0xc4) + 0xc0);
    *puVar7 = *puVar7 | 2;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x29:
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10200) {
      sub_0800471C(0xd8);
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_0804f310;
  case 0x2a:
    sub_08017700(param_1,0xab18);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xb7) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x2b:
    if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x71) == '\x01')) {
      *(undefined *)(param_1 + 0x12) = 1;
      puVar7 = (uint *)(*(int *)(param_1 + 0xc4) + 0xc0);
      *puVar7 = *puVar7 | 4;
      sub_0800471C(0xd5);
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
LAB_0804f27e:
      if (*(char *)(param_1 + 0xb7) != '\x01') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 0x32;
      return in_lr;
    }
    goto LAB_0804f320;
  case 0x2c:
    sub_08017700(param_1,0xab09);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x2d:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
LAB_0804f354:
      *(undefined *)(param_1 + 0xb7) = 0;
LAB_0804f35c:
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    goto LAB_0804f27e;
  case 0x32:
    sub_08017700(param_1,0xab24);
    *(undefined *)(param_1 + 0x12) = 0x28;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar8 = *(int *)(param_1 + 0x54) + 0x1000;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x54) + -0x1000;
    }
    *(int *)(param_1 + 0x5c) = iVar8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x33:
    iVar8 = *(int *)(param_1 + 0x54) +
            ((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x54)) * 0x10 >> 8);
    *(int *)(param_1 + 0x54) = iVar8;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar8 = sub_08009E14(iVar8 + 0x2e00,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      iVar8 = sub_08009F80(iVar8 + -0x2e00,*(undefined4 *)(param_1 + 0x58));
    }
    if (iVar8 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
    }
    goto LAB_0804f30a;
  case 0x34:
    sub_08017700(param_1,0xab09);
    *(undefined *)(param_1 + 0x12) = 0x32;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x35:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_0804f354;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
LAB_0804ed12:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804ec08_caseD_1:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0804f320:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0804ec08_caseD_6:
  return in_lr;
}

