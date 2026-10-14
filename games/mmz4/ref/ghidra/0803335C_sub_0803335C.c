// sub_0803335C at 0x0803335C (thumb)

undefined4 sub_0803335C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined *)(param_1 + 0x100) = 0;
  sub_0801CF00(param_1,0x4e00);
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

