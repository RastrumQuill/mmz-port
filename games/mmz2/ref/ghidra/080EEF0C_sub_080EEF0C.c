// sub_080EEF0C at 0x080EEF0C (thumb)

void sub_080EEF0C(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2f) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

