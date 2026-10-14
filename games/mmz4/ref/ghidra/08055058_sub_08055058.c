// sub_08055058 at 0x08055058 (thumb)

void sub_08055058(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(uint *)(param_1 + 100) = (((uint)(param_3 << 0x18) >> 0x17) - 1) * param_2;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfb;
  return;
}

