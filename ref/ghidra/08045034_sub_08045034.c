// sub_08045034 at 0x08045034 (thumb)

undefined4 sub_08045034(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08029778(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
LAB_080450ac:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_08001EAC(0x85);
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') goto LAB_080450ac;
    break;
  case 4:
    sub_08029778(param_1,9);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 6:
    sub_08029778(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    bVar1 = (byte)DAT_02022b6e & 1;
    if ((DAT_02022b6e & 1) == 0) {
      *(byte *)(param_1 + 0xd) = bVar1;
      *(byte *)(param_1 + 0xe) = bVar1;
    }
    sub_080297C0(param_1);
  default:
    goto switchD_08045046_caseD_8;
  }
  sub_080297C0(param_1);
switchD_08045046_caseD_8:
  return in_lr;
}

