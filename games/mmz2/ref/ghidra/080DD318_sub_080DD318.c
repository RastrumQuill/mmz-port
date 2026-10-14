// sub_080DD318 at 0x080DD318 (thumb)

void sub_080DD318(int param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(*(int *)(param_1 + 0x28) + 8);
  return;
}

