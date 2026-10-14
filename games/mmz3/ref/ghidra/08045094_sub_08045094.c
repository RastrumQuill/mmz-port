// sub_08045094 at 0x08045094 (thumb)

undefined4 sub_08045094(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08017700(param_1,0xa50c);
    sub_08007390(param_1 + 0x74,&DAT_0835eb10);
    sub_0800471C(0x7b);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x13) = 0xb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080450a8_caseD_1:
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
      *(undefined *)(param_1 + 0x13) = 0;
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0804523c:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_080450a8_caseD_9:
    return in_lr;
  case 1:
    goto switchD_080450a8_caseD_1;
  case 2:
    if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0x71) == '\x04')) {
      sub_08007390(param_1 + 0x74,&DAT_0835ecf0);
      *(undefined *)(param_1 + 0x13) = 1;
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804523c;
  case 3:
    sub_08017700(param_1,0xa50d);
    sub_08007390(param_1 + 0x74,&DAT_0835eb10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804523c;
  case 5:
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08017700(param_1,0xa50b);
    sub_08007390(param_1 + 0x74,&DAT_0835eb10);
    sub_0800471C(0x7b);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0x71) == '\x04')) {
      sub_08007390(param_1 + 0x74,&DAT_0835ecf0);
      *(undefined *)(param_1 + 0x13) = 1;
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804523c;
  case 7:
    sub_08017700(param_1,0xa50d);
    sub_08007390(param_1 + 0x74,&DAT_0835eb10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_0804523c;
  default:
    goto switchD_080450a8_caseD_9;
  }
}

