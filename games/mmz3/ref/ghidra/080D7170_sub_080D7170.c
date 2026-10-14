// sub_080D7170 at 0x080D7170 (thumb)

undefined4 sub_080D7170(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_08017700(param_1,0);
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x3300);
    break;
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_08017700(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 3:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x60;
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    if (*(char *)(param_1 + 0x12) != '\x02') {
      return in_lr;
    }
    sub_08017700(param_1,0x3303);
    break;
  case 4:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x3301);
    break;
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 6:
    sub_08017700(param_1,0x301);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0x300);
    sub_080B322C(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_0800471C(8);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    break;
  case 8:
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar1 = sub_080B3C5C(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
    }
    iVar2 = *(int *)(param_1 + 0x54) + -0x380;
    *(int *)(param_1 + 0x54) = iVar2;
    if (DAT_020302c0 + -0x9800 <= iVar2) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080d7184_caseD_9;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d7184_caseD_9:
  return in_lr;
}

