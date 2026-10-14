// sub_080BAF30 at 0x080BAF30 (thumb)

bool sub_080BAF30(int param_1)

{
  return *(byte *)(*(int *)(param_1 + 0x20) + 1) < 2;
}

