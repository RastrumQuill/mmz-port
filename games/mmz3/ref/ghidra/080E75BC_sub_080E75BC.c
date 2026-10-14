// sub_080E75BC at 0x080E75BC (thumb)

void sub_080E75BC(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0x15400;
  *(uint *)(param_1 + 0x58) = (uint)*(byte *)(param_1 + 0x11) * 0x1000 + 0x1000;
  return;
}

