// sub_080D58BC at 0x080D58BC (thumb)

undefined4 sub_080D58BC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0x3503);
    *(undefined *)(param_1 + 0x25) = 8;
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x300);
    sub_080B322C(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_0800471C(8);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 3:
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar2 = sub_080B3C5C(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x380;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
    }
    sub_08017700(param_1,0x301);
    break;
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0x100);
    break;
  case 5:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x3300);
    *(undefined *)(param_1 + 0x12) = 0x2a;
    break;
  case 6:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_08017700(param_1,0x3400);
    break;
  case 7:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0800471C(0x9a);
    sub_08017700(param_1,0x3401);
    break;
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 9:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  default:
    goto switchD_080d58d0_caseD_a;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d58d0_caseD_a:
  return in_lr;
}

