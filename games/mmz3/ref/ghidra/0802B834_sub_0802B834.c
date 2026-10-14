// sub_0802B834 at 0x0802B834 (thumb)

undefined4 sub_0802B834(int param_1)

{
  undefined4 in_lr;
  
  sub_08017700(param_1,0x500);
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0xf8) = 8;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0802B870(param_1);
  return in_lr;
}

