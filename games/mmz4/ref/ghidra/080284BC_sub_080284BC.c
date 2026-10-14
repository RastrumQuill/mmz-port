// sub_080284BC at 0x080284BC (thumb)

longlong sub_080284BC(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0xc) + 4);
  sub_08001D30(&DAT_08c44000 + iVar1 * 5,
               ((uint)(ushort)(&DAT_0202e040)[iVar1] -
               (uint)((ushort)(&DAT_08c44006)[iVar1 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4400c + iVar1 * 0x14,
               ((uint)(ushort)(&DAT_0202de40)[iVar1] - (uint)(byte)(&DAT_08c44013)[iVar1 * 0x14]) *
               0x20 + 0x200);
  return (ulonglong)in_lr << 0x20;
}

