// sub_080159B0 at 0x080159B0 (thumb)

undefined4 sub_080159B0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = (uint)DAT_02022e88;
  if (uVar1 == 0) {
    sub_080014E8(&DAT_0850053c,(DAT_02023096 - 0x1d0) * 0x20 + 0x10000);
    sub_0800179C(&DAT_08500548,(DAT_02023103 - 0xf) * 0x20 + 0x200);
  }
  else {
    sub_080014E8(&UNK_08500528 + uVar1 * 0x14,
                 ((uint)(ushort)(&DAT_02023010)[uVar1 + 0x42] -
                 (uint)(*(ushort *)(&DAT_0850052e + uVar1 * 0x14) >> 6)) * 0x20 + 0x10000);
    iVar2 = (uint)DAT_02022e88 * 0x14;
    sub_0800179C(&UNK_08500534 + iVar2,
                 ((uint)(byte)(&DAT_02023102)[DAT_02022e88] - (uint)(byte)(&DAT_0850053b)[iVar2]) *
                 0x20 + 0x200);
  }
  return in_lr;
}

