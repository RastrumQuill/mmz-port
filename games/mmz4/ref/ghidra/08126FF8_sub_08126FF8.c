// sub_08126FF8 at 0x08126FF8 (thumb)

void sub_08126FF8(int param_1)

{
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
  }
  return;
}

