// sub_080EDA98 at 0x080EDA98 (thumb)

void sub_080EDA98(int param_1,undefined2 param_2)

{
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(undefined2 *)(param_1 + 0x26) = param_2;
    *(undefined2 *)(param_1 + 0x24) = param_2;
    *(undefined2 *)(param_1 + 0x28) = 0x100;
  }
  return;
}

