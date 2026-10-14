// sub_081284B4 at 0x081284B4 (thumb)

void sub_081284B4(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x26) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

