// sub_0809DBA0 at 0x0809DBA0 (thumb)

undefined4 sub_0809DBA0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0809C930(param_1,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    goto LAB_0809dc5c;
  case 2:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    uVar1 = 2;
    break;
  case 3:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    uVar1 = 3;
    break;
  case 4:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    uVar1 = 0;
    break;
  case 5:
    sub_0809C980(param_1);
    return in_lr;
  default:
    return in_lr;
  }
  sub_0809C930(param_1,uVar1);
LAB_0809dc5c:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

