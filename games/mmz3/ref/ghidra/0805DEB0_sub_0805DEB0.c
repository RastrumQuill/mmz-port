// sub_0805DEB0 at 0x0805DEB0 (thumb)

undefined4 sub_0805DEB0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800471C(0xed);
    sub_080ADDE4(param_1);
    break;
  case 1:
  case 5:
    goto switchD_0805dec2_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    return in_lr;
  case 4:
    sub_0800471C(0xed);
    sub_080ADE60(param_1);
    break;
  case 6:
    sub_08017700(param_1,0x802);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    return in_lr;
  default:
    return in_lr;
  }
  sub_08017700(param_1,0x804);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805dec2_caseD_1:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

