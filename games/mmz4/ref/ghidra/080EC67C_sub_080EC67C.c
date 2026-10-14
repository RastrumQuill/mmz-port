// sub_080EC67C at 0x080EC67C (thumb)

undefined4 sub_080EC67C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    goto switchD_080ec68e_caseD_0;
  case 1:
    sub_0801CF00(param_1,0x2f01);
    goto LAB_080ec73c;
  case 2:
  case 6:
    goto switchD_080ec68e_caseD_2;
  case 3:
    sub_0801CF00(param_1,0x2f02);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0886631c;
    *(undefined2 *)(param_1 + 0x26) = 0x201;
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    goto LAB_080ec752;
  case 5:
    sub_0801CF00(param_1,0x2f03);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
LAB_080ec73c:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080ec68e_caseD_2:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080ec752;
  case 7:
    sub_0801CF00(param_1,0x2f00);
    *(undefined *)(param_1 + 0xd) = 0;
switchD_080ec68e_caseD_0:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
LAB_080ec752:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080ec68e_caseD_8:
    return in_lr;
  default:
    goto switchD_080ec68e_caseD_8;
  }
}

