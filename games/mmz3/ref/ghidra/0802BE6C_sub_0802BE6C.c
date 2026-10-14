// sub_0802BE6C at 0x0802BE6C (thumb)

undefined4 sub_0802BE6C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined *)(param_1 + 0x12d) = 0xff;
  *(undefined *)(param_1 + 0x126) = 0xff;
  *(undefined *)(param_1 + 0x12e) = 0xff;
  *(undefined *)(param_1 + 0x127) = 0xff;
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xec) = 0;
    sub_0802BEF8(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xec) = 0;
    sub_0802BF80(param_1);
  }
  return in_lr;
}

