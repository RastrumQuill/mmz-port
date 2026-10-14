// sub_081284A8 at 0x081284A8 (thumb)

void sub_081284A8(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x1f) = **(undefined **)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = *(undefined **)(param_2 + 0x40) + 1;
  return;
}

