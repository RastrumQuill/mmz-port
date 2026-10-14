// sub_0805FC08 at 0x0805FC08 (thumb)

void sub_0805FC08(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x40) + 0xb8) =
       *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}

