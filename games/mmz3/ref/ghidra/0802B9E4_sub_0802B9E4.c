// sub_0802B9E4 at 0x0802B9E4 (thumb)

undefined4 sub_0802B9E4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    sub_08017700(param_1,0x700);
  }
  else {
    sub_08017700(param_1,0x701);
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(uint *)(param_1 + 0x54) = (*(uint *)(param_1 + 0x54) & 0xfffff000) + 0x800;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0802BA40(param_1);
  return in_lr;
}

