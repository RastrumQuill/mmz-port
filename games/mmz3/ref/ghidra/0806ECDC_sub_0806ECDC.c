// sub_0806ECDC at 0x0806ECDC (thumb)

undefined4 sub_0806ECDC(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_08017700(param_1,0x1d05);
    }
    else {
      sub_08017700(param_1,0x1d0b);
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa64;
    iVar3 = *(int *)(param_1 + 0x5c) * 0xd0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x12') {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_08017700(param_1,0x1d06);
    }
    else {
      sub_08017700(param_1,0x1d0c);
    }
  }
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0x13) == '\0') &&
     (iVar3 = sub_08009C90(*(undefined4 *)(param_1 + 0x54)), 0 < iVar3)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar3 = sub_08009F80(iVar3,*(undefined4 *)(param_1 + 0x58));
      if (iVar3 < 1) goto LAB_0806edc8;
    }
    else {
      iVar3 = sub_08009E14(iVar3,*(undefined4 *)(param_1 + 0x58));
      if (-1 < iVar3) goto LAB_0806edc8;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
LAB_0806edc8:
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    uVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined *)(param_1 + 0x13) = uVar2;
  }
  return in_lr;
}

