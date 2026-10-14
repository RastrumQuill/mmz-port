// sub_080EBAE8 at 0x080EBAE8 (thumb)

undefined4 sub_080EBAE8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080DD828();
  uVar1 = 0;
  do {
    sub_080DCF68(param_1,uVar1 & 0xff);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  iVar2 = *(byte *)(param_1 + 0xdd9) + 0xa0;
  sub_08002638(&DAT_08432d00 + iVar2 * 5,
               ((uint)(ushort)(&DAT_0202e590)[iVar2] -
               (uint)((ushort)(&DAT_08432d06)[iVar2 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432d0c + iVar2 * 0x14,
               ((uint)(ushort)(&DAT_0202e390)[iVar2] - (uint)(byte)(&DAT_08432d13)[iVar2 * 0x14]) *
               0x20 + 0x200);
  return in_lr;
}

