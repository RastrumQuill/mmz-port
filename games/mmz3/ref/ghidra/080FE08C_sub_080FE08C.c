// sub_080FE08C at 0x080FE08C (thumb)

void sub_080FE08C(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2d) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

