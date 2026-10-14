// sub_080EEF38 at 0x080EEF38 (thumb)

void sub_080EEF38(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x26) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

