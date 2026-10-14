// sub_080176EC at 0x080176EC (thumb)

void sub_080176EC(int param_1)

{
  *(undefined *)(param_1 + 0x1e) = 0xff;
  *(undefined *)(param_1 + 0x1f) = 0xff;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  return;
}

