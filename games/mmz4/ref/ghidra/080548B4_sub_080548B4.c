// sub_080548B4 at 0x080548B4 (thumb)

undefined4 sub_080548B4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(*(int *)(param_1 + 0xc4) + 0xb8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xbc) = 0x20;
    *(undefined *)(*(int *)(param_1 + 200) + 0xb8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xbc) = 0x20;
    sub_0801CF00(param_1,0x2c00);
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_08054FBC(param_1);
  if (((*(short *)(*(int *)(param_1 + 0xc4) + 0xbc) == 0) &&
      (*(short *)(*(int *)(param_1 + 200) + 0xbc) == 0)) && (*(char *)(param_1 + 0x12) == '\0')) {
    sub_08054FFC(param_1);
  }
  return in_lr;
}

