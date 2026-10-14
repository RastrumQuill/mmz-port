// sub_080FE0C8 at 0x080FE0C8 (thumb)

void sub_080FE0C8(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x1e) = **(undefined **)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = *(undefined **)(param_2 + 0x40) + 1;
  return;
}

