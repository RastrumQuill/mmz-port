// sub_08128438 at 0x08128438 (thumb)

void sub_08128438(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x24) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

