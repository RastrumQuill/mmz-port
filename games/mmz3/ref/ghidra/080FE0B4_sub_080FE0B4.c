// sub_080FE0B4 at 0x080FE0B4 (thumb)

void sub_080FE0B4(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2f) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

