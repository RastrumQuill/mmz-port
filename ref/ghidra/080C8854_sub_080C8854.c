// sub_080C8854 at 0x080C8854 (thumb)

void sub_080C8854(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2c) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

