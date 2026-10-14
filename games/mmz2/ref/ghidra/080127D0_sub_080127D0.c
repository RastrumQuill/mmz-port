// sub_080127D0 at 0x080127D0 (thumb)

void sub_080127D0(int param_1)

{
  *(undefined *)(param_1 + 0x1e) = 0xff;
  *(undefined *)(param_1 + 0x1f) = 0xff;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  return;
}

