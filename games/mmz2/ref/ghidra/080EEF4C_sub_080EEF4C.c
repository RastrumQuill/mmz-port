// sub_080EEF4C at 0x080EEF4C (thumb)

void sub_080EEF4C(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x27) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

