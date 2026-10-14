// sub_080C88BC at 0x080C88BC (thumb)

void sub_080C88BC(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x26) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

