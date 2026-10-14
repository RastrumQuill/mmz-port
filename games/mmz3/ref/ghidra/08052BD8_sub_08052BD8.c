// sub_08052BD8 at 0x08052BD8 (thumb)

undefined4 sub_08052BD8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_0800471C(0xc9);
    uVar2 = 0xb007;
    break;
  case 1:
  case 4:
    goto switchD_08052bea_caseD_1;
  case 2:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_08052c4c;
  case 3:
    uVar2 = 0xb009;
    break;
  case 5:
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_08052bea_caseD_6;
  }
  sub_08017700(param_1,uVar2);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08052bea_caseD_1:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08052c4c:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08052bea_caseD_6:
  return in_lr;
}

