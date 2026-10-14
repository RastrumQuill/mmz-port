// sub_08035FA0 at 0x08035FA0 (thumb)

undefined4 sub_08035FA0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xb301);
    break;
  case 1:
  case 3:
  case 5:
    goto switchD_08035fb6_caseD_1;
  case 2:
    sub_08017700(param_1,0xb302);
    break;
  case 4:
    sub_08017700(param_1,0xb303);
    cVar1 = *(char *)(param_1 + 0x27c);
    if (cVar1 == '\0') {
      sub_0800471C(0x51);
    }
    else if (cVar1 == '\x01') {
      sub_0800471C(0x49);
    }
    else if (cVar1 == '\x02') {
      sub_0800471C(0x40);
    }
    else {
      sub_0800471C(0x51);
    }
    local_10 = *(int *)(param_1 + 0x54) + 0x1600;
    local_c = *(int *)(param_1 + 0x58) + -0x1600;
    sub_080B1354(&local_10,param_1 + 0x54,*(undefined *)(param_1 + 0x27c));
    break;
  case 6:
    sub_08017700(param_1,0xb304);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    return in_lr;
  default:
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08035fb6_caseD_1:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

