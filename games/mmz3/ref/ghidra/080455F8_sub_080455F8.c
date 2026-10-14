// sub_080455F8 at 0x080455F8 (thumb)

undefined4 sub_080455F8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined *)(param_1 + 0x13) = 4;
    sub_08017700(param_1,0xa50e);
    sub_08007390(param_1 + 0x74,&DAT_0835ebb8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    sub_0800471C(0x7f);
    sub_08017700(param_1,0xa50f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x13) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 != '\0')) {
      sub_08045B78(param_1);
      sub_0800471C(0x80);
      *(undefined *)(param_1 + 0x12) = 0x30;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
    sub_08004768(0x7f);
    sub_08017700(param_1,0xa50a);
    sub_08007390(param_1 + 0x74,&DAT_0835eb10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    break;
  default:
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

