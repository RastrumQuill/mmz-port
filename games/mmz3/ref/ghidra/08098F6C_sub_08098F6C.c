// sub_08098F6C at 0x08098F6C (thumb)

undefined4 sub_08098F6C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    break;
  case 2:
    goto switchD_08098f80_caseD_2;
  case 3:
    sub_08017700(param_1,0xd500);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_08098f80_caseD_5;
  case 10:
    sub_08017700(param_1,0xd511);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080991b4;
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
    cVar1 = '\x01';
    goto LAB_080991b4;
  }
  sub_08017700(param_1,0xd502);
  sub_08007390(param_1 + 0x74,&DAT_08366ca0);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0x100;
  }
  else {
    uVar3 = 0xffffff00;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08098f80_caseD_2:
  sub_080177F4(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 0x100;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar4 = sub_08009F80(iVar4 + -0xa00,*(undefined4 *)(param_1 + 0x58));
  }
  else {
    iVar4 = sub_08009E14(iVar4 + 0xa00,*(undefined4 *)(param_1 + 0x58));
  }
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  }
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar4 = *(int *)(param_1 + 0x54) + -0xa00;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) + 0xa00;
  }
  iVar4 = sub_0800A104(iVar4,*(undefined4 *)(param_1 + 0x58));
  if (iVar4 != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if ((1 < *(byte *)(param_1 + 0xbb)) &&
       (*(int *)(DAT_0202f5c0 + 0x58) <= *(int *)(param_1 + 0x58))) {
      if (*(int *)(param_1 + 0x5c) < 1) {
        iVar4 = *(int *)(DAT_0202f5c0 + 0x54);
        goto LAB_080990d2;
      }
      if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) goto LAB_080990d8;
    }
  }
  else if (*(int *)(param_1 + 0x5c) < 1) {
    iVar4 = *(int *)(DAT_0202f5c0 + 0x54);
LAB_080990d2:
    if (iVar4 < *(int *)(param_1 + 0x54)) {
LAB_080990d8:
      *(undefined *)(param_1 + 0xe) = 10;
    }
  }
  else if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) goto LAB_080990d8;
  if (0x1800 < *(int *)(param_1 + 100)) {
    cVar1 = '\x03';
LAB_080991b4:
    *(char *)(param_1 + 0xe) = cVar1;
  }
switchD_08098f80_caseD_5:
  return in_lr;
}

