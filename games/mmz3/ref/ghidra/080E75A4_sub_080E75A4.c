// sub_080E75A4 at 0x080E75A4 (thumb)

void sub_080E75A4(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0x16500;
  *(uint *)(param_1 + 0x58) = (uint)*(byte *)(param_1 + 0x11) * 0x1000 + 0x1000;
  return;
}

