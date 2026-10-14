// sub_080C88B0 at 0x080C88B0 (thumb)

void sub_080C88B0(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x1f) = **(undefined **)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = *(undefined **)(param_2 + 0x40) + 1;
  return;
}

