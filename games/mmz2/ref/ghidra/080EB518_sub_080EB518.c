// sub_080EB518 at 0x080EB518 (thumb)

undefined4 sub_080EB518(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 1;
  iVar1 = *(byte *)(param_1 + 0xdd9) + 0xa0;
  sub_08002638(&DAT_08432d00 + iVar1 * 5,
               ((uint)(ushort)(&DAT_0202e590)[iVar1] -
               (uint)((ushort)(&DAT_08432d06)[iVar1 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432d0c + iVar1 * 0x14,
               ((uint)(ushort)(&DAT_0202e390)[iVar1] - (uint)(byte)(&DAT_08432d13)[iVar1 * 0x14]) *
               0x20 + 0x200);
  *(undefined *)(param_1 + 0xddb) = 4;
  sub_080D5CF8(*(undefined4 *)(param_1 + 0x75b8),*(byte *)(param_1 + 0xdd9),
               *(undefined4 *)(param_1 + 0xdd4));
  sub_080EB5BC(param_1);
  return in_lr;
}

