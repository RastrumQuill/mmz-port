// sub_08041350 at 0x08041350 (thumb)

undefined4 sub_08041350(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800471C(0x68);
    sub_08007390(param_1 + 0x74,&DAT_0835e68c);
    sub_08017528(param_1);
    sub_080176EC(param_1);
    *(undefined *)(param_1 + 0x24) = 0x40;
    *(undefined *)(param_1 + 0x12) = 4;
    sub_08017700(param_1,0xa404);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08041364_caseD_1:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08041526:
      *(char *)(param_1 + 0xe) = cVar2;
    }
switchD_08041364_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08041364_caseD_1;
  case 2:
    sub_0800471C(0x67);
    sub_08017700(param_1,0xa405);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar5 = bVar1 & 1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x5c) + -0x40 + uVar5 * 0x80;
    *(int *)(param_1 + 0x5c) = iVar4;
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (iVar4 < 0) {
        if (uVar5 != 1) {
LAB_08041440:
          sub_08017700(param_1,0xa406);
          *(undefined *)(param_1 + 0x12) = 1;
        }
      }
      else if ((bVar1 & 1) != 0) goto LAB_08041440;
    }
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    if (0xd000 < (*(int *)(param_1 + 0xbc) - iVar4) + 0x6800U) {
      if (*(int *)(param_1 + 0x5c) < 0) {
        if (uVar5 != 1) {
LAB_0804147c:
          *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc) + -0x6800 + uVar5 * 0xd000;
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
      }
      else if ((bVar1 & 1) != 0) goto LAB_0804147c;
    }
    sub_080177F4(param_1);
    iVar4 = *(int *)(param_1 + 0xc0) + -0x18000;
    if ((iVar4 <= *(int *)(param_1 + 0x58)) && (DAT_020302c4 + -0x9000 <= *(int *)(param_1 + 0x58)))
    {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar4;
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    if ((uVar5 * 2 >> 0x11 & 1) == 0) {
      uVar3 = 9;
    }
    else {
      uVar3 = 6;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    cVar2 = '\0';
    goto LAB_08041526;
  case 4:
    *(undefined *)(param_1 + 0x12) = 4;
    sub_08017700(param_1,0xa407);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    cVar2 = '\x02';
    goto LAB_08041526;
  default:
    goto switchD_08041364_caseD_6;
  }
}

