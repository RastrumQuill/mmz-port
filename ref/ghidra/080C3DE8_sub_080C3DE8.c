// sub_080C3DE8 at 0x080C3DE8 (thumb)

void sub_080C3DE8(int param_1)

{
  *(ushort *)(*(int *)(param_1 + 0x18) + 0x9e) =
       *(byte *)(*(int *)(param_1 + 0x10) + 0x178) + 0x94 | 0x6000;
  return;
}

