// sub_080EDA7C at 0x080EDA7C (thumb)

void sub_080EDA7C(int param_1)

{
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
  }
  return;
}

