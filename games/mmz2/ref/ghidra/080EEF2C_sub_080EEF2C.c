// sub_080EEF2C at 0x080EEF2C (thumb)

void sub_080EEF2C(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x1f) = **(undefined **)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = *(undefined **)(param_2 + 0x40) + 1;
  return;
}

