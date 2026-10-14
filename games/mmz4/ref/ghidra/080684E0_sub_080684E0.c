// sub_080684E0 at 0x080684E0 (thumb)

undefined4 sub_080684E0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa90c);
    sub_08002B10(0x60);
    sub_08002B10(0x61);
    *(undefined2 *)(param_1 + 0xe0) = 0x61;
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc4)) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x04' < *(char *)(param_1 + 0x71)) {
      uVar1 = sub_0809C194(param_1,1,0,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      sub_08005784(param_1 + 0x74,&DAT_08857d50);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x2c) + 0xd) != '\0') {
    *(undefined *)(param_1 + 0xd) = 0x24;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

