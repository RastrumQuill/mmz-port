// sub_0802C4C0 at 0x0802C4C0 (thumb)

undefined4 sub_0802C4C0(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined *)(param_1 + 0xec) = 0;
  sub_08036FA8(0x803834d);
  *(undefined4 *)(param_1 + 0x238) = 0;
  DAT_0202f5d8 = 1;
  *(undefined *)(param_1 + 0xe) = 2;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0802C5CC(param_1);
  return in_lr;
}

