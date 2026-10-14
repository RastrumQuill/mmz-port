// sub_080907B4 at 0x080907B4 (thumb)

undefined4 sub_080907B4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_08365e78);
    sub_08017700(param_1,0x7e12);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 0x1e;
LAB_08090880:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 3:
    sub_08017700(param_1,0x7e13);
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = 0x400;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = -0x400;
    }
    local_10 = local_10 + iVar2;
    local_c = *(int *)(param_1 + 0x58) + -0x1900;
    sub_08090CDC(param_1,&local_10);
    sub_0800471C(0x2c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08090880;
  case 5:
    sub_08017700(param_1,0x7e14);
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
  case 6:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 7:
    sub_08017700(param_1,0x7e15);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    break;
  }
  return in_lr;
}

