// sub_08025330 at 0x08025330 (thumb)

undefined4 sub_08025330(void)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_020305d8 != 0) {
    iVar1 = DAT_020305d8 + 0x19;
    sub_0800393C(&DAT_085d78f8 + iVar1 * 5,
                 ((uint)(ushort)(&DAT_0202fa10)[iVar1] -
                 (uint)((ushort)(&DAT_085d78fe)[iVar1 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7904 + iVar1 * 0x14,
                 ((uint)(ushort)(&DAT_0202f810)[iVar1] - (uint)(byte)(&DAT_085d790b)[iVar1 * 0x14])
                 * 0x20 + 0x200);
  }
  if (DAT_020305d8 != 3) {
    sub_0800393C(&DAT_085d7b28,(DAT_0202fa48 - 0x19c) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7b34,(DAT_0202f848 - 0xf) * 0x20 + 0x200);
  }
  return in_lr;
}

