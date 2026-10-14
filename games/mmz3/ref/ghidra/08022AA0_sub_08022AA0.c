// sub_08022AA0 at 0x08022AA0 (thumb)

longlong sub_08022AA0(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0xc) + 4);
  sub_0800393C(&DAT_085d78f8 + iVar1 * 5,
               ((uint)(ushort)(&DAT_0202fa10)[iVar1] -
               (uint)((ushort)(&DAT_085d78fe)[iVar1 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7904 + iVar1 * 0x14,
               ((uint)(ushort)(&DAT_0202f810)[iVar1] - (uint)(byte)(&DAT_085d790b)[iVar1 * 0x14]) *
               0x20 + 0x200);
  return (ulonglong)in_lr << 0x20;
}

