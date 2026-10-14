// sub_08090A30 at 0x08090A30 (thumb)

undefined4 sub_08090A30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_08365ed8);
    *(undefined *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08090a44_caseD_1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08090baa:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_08090a44_caseD_9:
    return in_lr;
  case 1:
    goto switchD_08090a44_caseD_1;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_08365ec0);
    sub_08017700(param_1,0x7e17);
    *(undefined *)(param_1 + 0x12) = 0x60;
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      uVar2 = 0xffffff34;
    }
    else {
      uVar2 = 0xcc;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar3 == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08090baa;
  case 4:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08090baa;
  case 5:
    sub_08017700(param_1,0x7e18);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    cVar1 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x14);
    *(char *)(param_1 + 0x12) = cVar1 + '\n';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08090baa;
  case 7:
    sub_08017700(param_1,0x7e19);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_08090baa;
  default:
    goto switchD_08090a44_caseD_9;
  }
}

