// sub_08128488 at 0x08128488 (thumb)

void sub_08128488(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2f) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

