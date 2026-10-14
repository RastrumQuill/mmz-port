// sub_08025860 at 0x08025860 (thumb)

undefined4 sub_08025860(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08015EEC(param_1,0x1603);
    sub_08015F80(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    sub_08015F80(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    uVar1 = 0x1601;
    break;
  case 3:
    sub_08015F80(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar1 = 0x3500;
    break;
  case 4:
    sub_08015F80(param_1);
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    uVar1 = 0x3502;
    break;
  case 5:
    sub_08015F80(param_1);
    return in_lr;
  default:
    return in_lr;
  }
  sub_08015EEC(param_1,uVar1);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

