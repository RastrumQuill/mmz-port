// sub_08041654 at 0x08041654 (thumb)

undefined4 sub_08041654(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835e68c);
    *(undefined *)(param_1 + 0x12) = 4;
    *(undefined *)(param_1 + 0x13) = 3;
    sub_08017700(param_1,0xa404);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080417be:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 2:
    sub_080733F0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    sub_08017700(param_1,0xa405);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
    uVar3 = 0xfffffe00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x60) + 0x80;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    if ((*(char *)(param_1 + 0x12) == '\0') && (0 < *(int *)(param_1 + 0x60))) {
      sub_08017700(param_1,0xa406);
      *(undefined *)(param_1 + 0x12) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    if ((DAT_0202e48c - iVar2 < 0) && (0 < *(int *)(param_1 + 0x60))) {
      *(int *)(param_1 + 0x58) = iVar2 + (DAT_0202e48c - iVar2);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 4;
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      sub_080733F0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_080417CC(param_1);
      return in_lr;
    }
    sub_08017700(param_1,0xa407);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    cVar1 = '\x02';
    goto LAB_080417be;
  default:
    break;
  }
  return in_lr;
}

