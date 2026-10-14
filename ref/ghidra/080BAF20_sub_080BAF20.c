// sub_080BAF20 at 0x080BAF20 (thumb)

bool sub_080BAF20(int param_1)

{
  return *(byte *)(*(int *)(param_1 + 0x20) + 1) < 2;
}

