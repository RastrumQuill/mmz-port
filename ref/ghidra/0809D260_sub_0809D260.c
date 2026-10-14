// sub_0809D260 at 0x0809D260 (thumb)

undefined4 sub_0809D260(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0809C930(param_1,1);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0809C930(param_1,0);
    *(undefined4 *)(param_1 + 0x54) = 0;
    break;
  case 2:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_0809C930(param_1,3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_0809C930(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    sub_0809C930(param_1,4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
      return in_lr;
    }
    sub_0809C930(param_1,1);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 6:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_0809C980(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    sub_0809C930(param_1,0);
    *(undefined4 *)(param_1 + 0x54) = 0;
    break;
  case 7:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    sub_0809C930(param_1,1);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    break;
  case 8:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x40) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_0809d274_caseD_9;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809d274_caseD_9:
  return in_lr;
}

