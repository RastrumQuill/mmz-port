// sub_080EEEE4 at 0x080EEEE4 (thumb)

void sub_080EEEE4(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2d) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

