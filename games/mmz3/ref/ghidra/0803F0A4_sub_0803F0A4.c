// sub_0803F0A4 at 0x0803F0A4 (thumb)

undefined4 sub_0803F0A4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    goto switchD_0803f0b6_caseD_0;
  case 1:
    goto switchD_0803f0b6_caseD_1;
  case 2:
    break;
  case 3:
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08017700(param_1,*(short *)(param_1 + 200) + 0x28U | 0xa200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 5:
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_0803f0b6_caseD_6;
  }
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
    return in_lr;
  }
  goto LAB_0803f156;
switchD_0803f0b6_caseD_0:
  *(undefined *)(param_1 + 0x12) = 0x1a;
  sub_08017700(param_1,*(short *)(param_1 + 200) + 0x27U | 0xa200);
  sub_0800471C(0x73);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803f0b6_caseD_1:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0803f156:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0803f0b6_caseD_6:
  return in_lr;
}

