// sub_080D07F8 at 0x080D07F8 (thumb)

undefined4 sub_080D07F8(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined *)(param_1 + 0x25) = 0x10;
    uVar3 = sub_0800A104(*(int *)(param_1 + 0x54) + 0xf000,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0x25) = 0x10;
    sub_08017700(param_1,0xc400);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x50;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_08017700(param_1,0x3303);
    uVar2 = 0x10;
    break;
  case 2:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    goto LAB_080d0954;
  case 3:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x3301);
    goto LAB_080d0954;
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar2 = 8;
    break;
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    sub_08017700(param_1,0x300);
    sub_080B322C(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_0800471C(8);
    uVar2 = 0x20;
    break;
  case 6:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (*(int *)(param_1 + 0x2c) != 0) {
        *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
      }
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      if (*(int *)(param_1 + 0x2c) == 0) {
        uVar3 = sub_080B3C5C(param_1);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x380;
  default:
    goto switchD_080d080c_caseD_7;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
LAB_080d0954:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d080c_caseD_7:
  return in_lr;
}

