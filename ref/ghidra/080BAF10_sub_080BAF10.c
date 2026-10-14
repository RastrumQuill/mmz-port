// sub_080BAF10 at 0x080BAF10 (thumb)

bool sub_080BAF10(int param_1)

{
  return **(byte **)(param_1 + 0x20) < 2;
}

