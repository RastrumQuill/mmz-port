// sub_08128460 at 0x08128460 (thumb)

void sub_08128460(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2d) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

