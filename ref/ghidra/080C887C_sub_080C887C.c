// sub_080C887C at 0x080C887C (thumb)

void sub_080C887C(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2e) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

