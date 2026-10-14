// sub_080FE0A0 at 0x080FE0A0 (thumb)

void sub_080FE0A0(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2e) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

