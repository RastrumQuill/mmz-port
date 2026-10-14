// sub_0801F0E0 at 0x0801F0E0 (thumb)

int sub_0801F0E0(int param_1)

{
  return *(int *)(param_1 + 0x58) + (uint)*(ushort *)(*(int *)(param_1 + 0xd8) + 4) + 1;
}

