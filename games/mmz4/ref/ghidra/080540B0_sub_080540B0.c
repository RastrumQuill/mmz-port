// sub_080540B0 at 0x080540B0 (thumb)

undefined4 sub_080540B0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x59);
    *(undefined *)(*(int *)(param_1 + 0xc4) + 0xb8) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xbc) = 0x20;
    *(undefined *)(*(int *)(param_1 + 200) + 0xb8) = 5;
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xbc) = 0x20;
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 4;
    sub_0801CF00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08054FBC(param_1);
  sub_08055074(param_1,0);
  if ((*(short *)(*(int *)(param_1 + 0xc4) + 0xbc) == 0) &&
     (*(short *)(*(int *)(param_1 + 200) + 0xbc) == 0)) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

