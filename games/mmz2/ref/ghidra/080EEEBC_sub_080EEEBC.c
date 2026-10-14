// sub_080EEEBC at 0x080EEEBC (thumb)

void sub_080EEEBC(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x24) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

