// sub_0801F0B0 at 0x0801F0B0 (thumb)

int sub_0801F0B0(int param_1)

{
  return *(int *)(param_1 + 0x54) +
         (uint)*(ushort *)
                (*(int *)(param_1 + 0xd8) + (~(uint)(*(byte *)(param_1 + 10) >> 4) & 1) * 2) + 1;
}

