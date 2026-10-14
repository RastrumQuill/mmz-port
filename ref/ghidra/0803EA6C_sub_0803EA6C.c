// sub_0803EA6C at 0x0803EA6C (thumb)

undefined4 sub_0803EA6C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08081C8C(*(undefined4 *)(param_1 + 0xcc),3);
    sub_0800561C(param_1 + 0x74,&DAT_082ae010);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    sub_08029778(param_1,0x1a);
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 1;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 200) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 2;
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    if (7 < *(byte *)(param_1 + 200)) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar4 = 0x1d;
LAB_0803ebda:
      sub_08029778(param_1,uVar4);
    }
    break;
  case 2:
    sub_0800561C(param_1 + 0x74,&DAT_082adff4);
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    sub_08029778(param_1,0x17);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if (*(char *)(param_1 + 200) == '\x10') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar4 = 0x1c;
      goto LAB_0803ebda;
    }
    break;
  case 4:
    sub_08081C8C(*(undefined4 *)(param_1 + 0xcc),5);
    sub_0800561C(param_1 + 0x74,&DAT_082adedc);
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffc;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080297C0(param_1);
  default:
    goto switchD_0803ea84_caseD_6;
  }
  sub_080297C0(param_1);
switchD_0803ea84_caseD_6:
  return in_lr;
}

