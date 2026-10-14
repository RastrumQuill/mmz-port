// sub_0800BF50 at 0x0800BF50 (thumb)

void sub_0800BF50(int param_1)

{
  *(uint *)(&DAT_02000a0c + ((uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14) * 2) =
       (((*(int *)(param_1 + 0x38) + -0x280) - (uint)*(byte *)(param_1 + 0x6f)) -
       (uint)*(ushort *)(param_1 + 0x12)) * 0x10000 +
       (*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x10) & 0xffff);
  return;
}

