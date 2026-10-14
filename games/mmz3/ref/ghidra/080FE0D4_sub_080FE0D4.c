// sub_080FE0D4 at 0x080FE0D4 (thumb)

void sub_080FE0D4(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x1f) = **(undefined **)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = *(undefined **)(param_2 + 0x40) + 1;
  return;
}

