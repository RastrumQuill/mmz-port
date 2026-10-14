// sub_080C7400 at 0x080C7400 (thumb)

void sub_080C7400(int param_1)

{
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
  }
  return;
}

