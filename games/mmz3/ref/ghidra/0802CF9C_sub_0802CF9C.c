// sub_0802CF9C at 0x0802CF9C (thumb)

undefined4 sub_0802CF9C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined *)(param_1 + 0xec) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

