// sub_080DCB54 at 0x080DCB54 (thumb)

void sub_080DCB54(int param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(*(int *)(param_1 + 0x28) + 8);
  return;
}

