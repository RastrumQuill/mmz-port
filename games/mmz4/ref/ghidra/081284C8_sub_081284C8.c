// sub_081284C8 at 0x081284C8 (thumb)

void sub_081284C8(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x27) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

