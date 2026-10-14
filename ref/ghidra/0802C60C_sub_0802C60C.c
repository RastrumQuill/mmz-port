// sub_0802C60C at 0x0802C60C (thumb)

undefined4 sub_0802C60C(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080596B8(param_1,1,2);
    sub_080596B8(param_1,2,2);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 2;
    sub_0800561C(param_1 + 0x74,&DAT_082acdf8);
    sub_08029778(param_1,0xc);
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(char *)(param_1 + 0x12) == '\x14') {
      uVar4 = sub_08001EAC(0x22);
      *(undefined2 *)(param_1 + 0xda) = uVar4;
    }
    if (*(char *)(param_1 + 0x12) == '\x1e') {
      sub_0802D468(param_1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080297C0(param_1);
    break;
  case 2:
    sub_08029778(param_1,0xd);
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    local_24 = (bVar1 & 1) * 0x5200 + *(int *)(param_1 + 0x4c) + -0x2900;
    local_20 = *(int *)(param_1 + 0x50) + -0x800;
    cVar2 = 'o';
    bVar3 = 0;
    do {
      cVar5 = cVar2;
      if ((bVar1 & 1) != 0) {
        cVar5 = -0x80 - cVar2;
      }
      sub_08077ED8(&local_24,cVar5,0x300);
      cVar2 = cVar2 + -0x12;
      bVar3 = bVar3 + 1;
    } while (bVar3 < 3);
    *(undefined2 *)(param_1 + 0xda) = 0xffff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xfffffffd;
    sub_08029778(param_1,0x17);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0x12;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

