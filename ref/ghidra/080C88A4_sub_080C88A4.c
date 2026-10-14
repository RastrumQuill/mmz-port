// sub_080C88A4 at 0x080C88A4 (thumb)

void sub_080C88A4(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x1e) = **(undefined **)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = *(undefined **)(param_2 + 0x40) + 1;
  return;
}

