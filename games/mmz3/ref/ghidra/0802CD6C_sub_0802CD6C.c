// sub_0802CD6C at 0x0802CD6C (thumb)

undefined4 sub_0802CD6C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined *)(param_1 + 0xec) = 0;
  DAT_0202f5b8 = 1;
  *(undefined *)(param_1 + 0xe) = *(undefined *)(param_1 + 0xf);
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

