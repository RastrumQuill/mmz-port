// sub_0801C25C at 0x0801C25C (thumb)

longlong sub_0801C25C(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0xc) + 4);
  sub_08002638(&DAT_08432d00 + iVar1 * 5,
               ((uint)(ushort)(&DAT_0202e590)[iVar1] -
               (uint)((ushort)(&DAT_08432d06)[iVar1 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432d0c + iVar1 * 0x14,
               ((uint)(ushort)(&DAT_0202e390)[iVar1] - (uint)(byte)(&DAT_08432d13)[iVar1 * 0x14]) *
               0x20 + 0x200);
  return (ulonglong)in_lr << 0x20;
}

