// sub_080FCC24 at 0x080FCC24 (thumb)

void sub_080FCC24(int param_1)

{
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
  }
  return;
}

