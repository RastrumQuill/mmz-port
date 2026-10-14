// sub_0802C3F4 at 0x0802C3F4 (thumb)

undefined4 sub_0802C3F4(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080596B8(param_1,8,0x40);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 0x40;
    if (*(short *)(param_1 + 0xd0) == 0) {
      sub_08029778(param_1,0x18);
      sub_0802D3A8(param_1,0);
    }
    else {
      sub_08029790(param_1,0x18,1,5);
      sub_0802D3A8(param_1,1);
    }
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    if (*(char *)(param_1 + 0x12) == '\x14') {
      uVar2 = sub_08001EAC(0x22);
      *(undefined2 *)(param_1 + 0xda) = uVar2;
    }
    sub_0802B670(param_1);
    sub_080297C0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 3:
    uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_10 = uVar3 * 0x4000 + *(int *)(param_1 + 0x4c) + -0x2000;
    local_c = *(int *)(param_1 + 0x50) + -0x1c00;
    *(undefined2 *)(param_1 + 0xda) = 0xffff;
    sub_08077ED8(&local_10,uVar3 * 0x80 - 0x80 & 0xff,0x300);
    sub_08029778(param_1,0x19);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_0802B670(param_1);
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08029778(param_1,0xb);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xffffffbf;
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

