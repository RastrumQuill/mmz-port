// sub_0804E02C at 0x0804E02C (thumb)

undefined4 sub_0804E02C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x3c;
    uVar2 = 0xab21;
    break;
  case 1:
  case 3:
  case 6:
    goto switchD_0804e03e_caseD_1;
  case 2:
    uVar2 = 0xab22;
    break;
  case 4:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_0804e0a8;
  case 5:
    uVar2 = 0xab23;
    break;
  case 7:
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_0804e03e_caseD_8;
  }
  sub_08017700(param_1,uVar2);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804e03e_caseD_1:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0804e0a8:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0804e03e_caseD_8:
  return in_lr;
}

