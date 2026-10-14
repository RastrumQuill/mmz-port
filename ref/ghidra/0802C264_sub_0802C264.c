// sub_0802C264 at 0x0802C264 (thumb)

undefined4 sub_0802C264(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080596B8(param_1,0,1);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 1;
    if (*(short *)(param_1 + 0xd0) == 0) {
      sub_08029778(param_1,10);
      sub_0802D344(param_1,0);
    }
    else {
      sub_08029790(param_1,10,1,5);
      sub_0802D344(param_1,1);
    }
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    if (*(char *)(param_1 + 0x12) == '\x14') {
      uVar4 = sub_08001EAC(0x22);
      *(undefined2 *)(param_1 + 0xda) = uVar4;
    }
    sub_0802B670(param_1);
    sub_080297C0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 3:
    break;
  case 4:
    goto switchD_0802c27a_caseD_4;
  default:
    return in_lr;
  }
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_10 = uVar5 * 0x4000 + *(int *)(param_1 + 0x4c) + -0x2000;
  local_c = *(int *)(param_1 + 0x50) + -0x2a00;
  *(undefined2 *)(param_1 + 0xda) = 0xffff;
  sub_08077ED8(&local_10,uVar5 * 0x80 - 0x80 & 0xff,0x300);
  sub_08029778(param_1,0xb);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0802c27a_caseD_4:
  sub_0802B670(param_1);
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  sub_08029778(param_1,0xb);
  cVar2 = *(char *)(param_1 + 0x13) + '\x01';
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\x04') {
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  if (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c) < 1) {
    if ((bVar1 & 1) == 0) goto LAB_0802c3d6;
  }
  else if ((bVar1 & 1) == 1) {
LAB_0802c3d6:
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xfffffffe;
    uVar3 = 0xd;
    goto LAB_0802c3e8;
  }
  uVar3 = 0xf;
LAB_0802c3e8:
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

