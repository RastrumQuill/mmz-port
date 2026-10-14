// sub_080611FC at 0x080611FC (thumb)

undefined4 sub_080611FC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08004230(0xa7);
    sub_08004230(0xa8);
    sub_08004230(0xa9);
    sub_08004230(0xaa);
    sub_080040A8(0xa7,0x2c0);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0806120e_caseD_1:
    sub_080616C4(param_1);
    sub_080041E4(0xa7);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
LAB_08061278:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    return in_lr;
  case 1:
  case 3:
    goto switchD_0806120e_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0x3c;
    goto LAB_08061278;
  case 4:
    sub_080616C4(param_1);
    sub_08004230(0xa7);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    return in_lr;
  }
}

