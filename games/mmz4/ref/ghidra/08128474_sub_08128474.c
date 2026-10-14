// sub_08128474 at 0x08128474 (thumb)

void sub_08128474(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2e) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

