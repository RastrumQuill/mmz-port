// sub_08055178 at 0x08055178 (thumb)

void sub_08055178(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(uint *)(param_1 + 0x68) = (((uint)(param_3 << 0x18) >> 0x17) - 1) * param_2;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf7;
  return;
}

