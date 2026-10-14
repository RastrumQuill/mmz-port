// sub_080C8868 at 0x080C8868 (thumb)

void sub_080C8868(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2d) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

