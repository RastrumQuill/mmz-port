// sub_08127014 at 0x08127014 (thumb)

void sub_08127014(int param_1,undefined2 param_2)

{
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(undefined2 *)(param_1 + 0x26) = param_2;
    *(undefined2 *)(param_1 + 0x24) = param_2;
    *(undefined2 *)(param_1 + 0x28) = 0x100;
  }
  return;
}

