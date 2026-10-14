// sub_0804F894 at 0x0804F894 (thumb)

undefined4 sub_0804F894(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xab11);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 0x34;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar4 = FUN_080fe2f8(0x1a680,0x34);
    *(int *)(param_1 + 0x60) = -iVar4;
    *(undefined *)(param_1 + 0x12) = 0x33;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804f8a8_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0804fd14:
      *(char *)(param_1 + 0xe) = cVar2;
    }
switchD_0804f8a8_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0804f8a8_caseD_1;
  case 2:
    sub_08017700(param_1,0xab0d);
    sub_08007390(param_1 + 0x74,&DAT_0835fbd8);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = *(int *)(param_1 + 0x60) + 0x50;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    if ((0 < iVar4) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08017700(param_1,0xab12);
      uVar3 = sub_080A3174(param_1,param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0xc4) = uVar3;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804fd14;
  case 4:
    sub_08017700(param_1,0xab12);
    uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    puVar5 = (uint *)(*(int *)(param_1 + 0xc4) + 0xc0);
    *puVar5 = *puVar5 | 1;
    sub_0800471C(0xde);
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xf) != '\0') {
      return in_lr;
    }
    cVar2 = '\n';
    goto LAB_0804fd14;
  default:
    goto switchD_0804f8a8_caseD_6;
  case 10:
    puVar5 = (uint *)(*(int *)(param_1 + 0xc4) + 0xc0);
    *puVar5 = *puVar5 | 8;
    sub_0800471C(0xd5);
    sub_08017700(param_1,0xab13);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804fd14;
  case 0xc:
    cVar2 = '\x1e';
    goto LAB_0804fd14;
  case 0x1e:
    sub_08017700(param_1,0xab20);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x1f:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804fd14;
  case 0x20:
    uVar3 = sub_080A31CC(param_1,param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0xc0) = uVar3;
    sub_080040A8(0x49,0x2e0);
    sub_0800471C(0xdb);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x21:
    if ((*(char *)(param_1 + 0x13) == '\0') && (0x14 < *(byte *)(param_1 + 0x12))) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08004230(0x49);
      sub_080040A8(0x4a,0x2e0);
    }
    if (*(char *)(param_1 + 0x13) == '\x01') {
      sub_080041E4(0x4a);
    }
    else {
      sub_080041E4(0x49);
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 < 0x1f) && (*(byte *)(param_1 + 0x12) = bVar1 + 1, (byte)(bVar1 + 1) < 0x1f)) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804fd14;
  case 0x22:
    puVar5 = (uint *)(*(int *)(param_1 + 0xc0) + 0xc0);
    *puVar5 = *puVar5 | 0x100;
    sub_08017700(param_1,0xab22);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xfffffd00;
    }
    else {
      uVar3 = 0x300;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0x7800;
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x23:
    iVar4 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar4;
    sub_080041E4(0x4a);
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar4 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x2e00,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      iVar4 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x2e00,*(undefined4 *)(param_1 + 0x58));
    }
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    }
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x60) >> 1 < *(int *)(param_1 + 100)) {
      iVar4 = *(int *)(param_1 + 0xc4);
      if (iVar4 != 0) {
        puVar5 = (uint *)(iVar4 + 0xc0);
        *puVar5 = *puVar5 | 0x10;
        *(int *)(param_1 + 0xc4) = 0;
      }
    }
    if (*(int *)(param_1 + 100) <= *(int *)(param_1 + 0x60)) {
      return in_lr;
    }
    sub_08004230(0x4a);
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804fd14;
  case 0x24:
    puVar5 = (uint *)(*(int *)(param_1 + 0xc0) + 0xc0);
    *puVar5 = *puVar5 | 0x200;
    sub_080040A8(0x4b,0x2e0);
    sub_08017700(param_1,0xab23);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x25:
    sub_080041E4(0x4b);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    sub_08004230(0x4b);
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_0804fd14;
  }
}

