// sub_080EEEF8 at 0x080EEEF8 (thumb)

void sub_080EEEF8(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2e) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

