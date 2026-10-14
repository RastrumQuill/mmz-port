// sub_0801F090 at 0x0801F090 (thumb)

int sub_0801F090(int param_1)

{
  return (*(int *)(param_1 + 0x54) -
         (uint)*(ushort *)(*(int *)(param_1 + 0xd8) + (*(byte *)(param_1 + 10) >> 4 & 1) * 2)) + -1;
}

