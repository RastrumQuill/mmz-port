// sub_08098CE0 at 0x08098CE0 (thumb)

undefined4 sub_08098CE0(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_08098cf4_caseD_1;
  default:
    goto switchD_08098cf4_caseD_2;
  case 10:
    sub_08017700(param_1,0xd511);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08098f60;
  case 0xc:
    sub_08017700(param_1,0xd512);
    bVar2 = *(byte *)(param_1 + 10);
    if ((bVar2 & 0x10) == 0) {
      *(byte *)(param_1 + 10) = bVar2 | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      bVar2 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = bVar2 & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      bVar2 = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    *(byte *)(param_1 + 0x4a) = bVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xd:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
LAB_08098f60:
    *(char *)(param_1 + 0xe) = cVar1;
    return in_lr;
  }
  sub_08017700(param_1,0xd501);
  sub_08007390(param_1 + 0x74,&DAT_08366ca0);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0xffffff40;
  }
  else {
    uVar3 = 0xc0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08098cf4_caseD_1:
  sub_080177F4(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar4 = sub_08009F80(iVar4 + -0xa00,*(undefined4 *)(param_1 + 0x58));
  }
  else {
    iVar4 = sub_08009E14(iVar4 + 0xa00,*(undefined4 *)(param_1 + 0x58));
  }
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar8 = *(int *)(param_1 + 0x58);
    if ((1 < *(byte *)(param_1 + 0xbb)) && (*(int *)(DAT_0202f5c0 + 0x58) <= iVar8)) {
      if (iVar4 < 1) {
        iVar5 = *(int *)(DAT_0202f5c0 + 0x54);
        goto LAB_08098e06;
      }
      if (*(int *)(DAT_0202f5c0 + 0x54) < iVar7) goto LAB_08098e0a;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 < 1) {
      iVar5 = *(int *)(DAT_0202f5c0 + 0x54);
      iVar7 = *(int *)(param_1 + 0x54);
      iVar8 = *(int *)(param_1 + 0x58);
LAB_08098e06:
      if (iVar7 < iVar5) {
LAB_08098e0a:
        *(undefined *)(param_1 + 0xe) = 10;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54);
      iVar8 = *(int *)(param_1 + 0x58);
      if (*(int *)(DAT_0202f5c0 + 0x54) < iVar7) goto LAB_08098e0a;
    }
  }
  if (*(char *)(param_1 + 0xe) != '\n') {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      if ((1 < *(byte *)(param_1 + 0xbb)) && (*(int *)(DAT_0202f5c0 + 0x58) <= iVar8)) {
        iVar5 = *(int *)(DAT_0202f5c0 + 0x54);
        iVar6 = iVar5 - iVar7;
        if (0 < iVar6) goto LAB_08098e4c;
LAB_08098e5c:
        if (iVar7 - iVar5 < 0x3c00) goto LAB_08098e64;
      }
    }
    else {
      iVar5 = *(int *)(DAT_0202f5c0 + 0x54);
      iVar6 = iVar5 - iVar7;
      if (iVar6 < 1) goto LAB_08098e5c;
LAB_08098e4c:
      if (0x3bff < iVar6) goto LAB_08098e6c;
LAB_08098e64:
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_08098e6c:
  if (iVar4 < 1) {
    iVar4 = sub_0800A104(iVar7 + 0xa00,iVar8);
    if (iVar4 == *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
    iVar4 = *(int *)(param_1 + 0x54);
    iVar5 = -0xa00;
  }
  else {
    iVar4 = sub_0800A104(iVar7 + -0xa00,iVar8);
    if (iVar4 == *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
    iVar4 = *(int *)(param_1 + 0x54);
    iVar5 = 0xa00;
  }
  iVar4 = sub_0800A104(iVar4 + iVar5);
  if (iVar4 != *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
switchD_08098cf4_caseD_2:
  return in_lr;
}

