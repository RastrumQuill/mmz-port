// sub_0801E060 at 0x0801E060 (thumb)

undefined4 sub_0801E060(void)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_0202f068 == 0) {
    sub_08002638(&DAT_0843387c,(DAT_0202e6b6 - 0x1d0) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433888,(DAT_0202e4b6 - 0xf) * 0x20 + 0x200);
  }
  else {
    iVar1 = DAT_0202f068 + 0x92;
    sub_08002638(&DAT_08432d00 + iVar1 * 5,
                 ((uint)(ushort)(&DAT_0202e590)[iVar1] -
                 (uint)((ushort)(&DAT_08432d06)[iVar1 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08432d0c + iVar1 * 0x14,
                 ((uint)(ushort)(&DAT_0202e390)[iVar1] - (uint)(byte)(&DAT_08432d13)[iVar1 * 0x14])
                 * 0x20 + 0x200);
  }
  return in_lr;
}

