// sub_080146CC at 0x080146CC (thumb)

void sub_080146CC(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (0 < *(int *)(param_1 + 0x15c))) {
    *(int *)(*(int *)(param_1 + 0x10) + 0x4c) = *(int *)(param_1 + 0x15c);
  }
  return;
}

