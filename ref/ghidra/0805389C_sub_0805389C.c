// sub_0805389C at 0x0805389C (thumb)

void sub_0805389C(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x40) + 0xc0) =
       *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}

