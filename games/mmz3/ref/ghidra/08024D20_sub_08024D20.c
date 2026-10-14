// sub_08024D20 at 0x08024D20 (thumb)

undefined4 sub_08024D20(int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar1 = sub_08001B60(0x10);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar2 = 0;
      do {
        sVar3 = (short)uVar2;
        *(ushort *)(sVar3 * 2 + iVar1) =
             sVar3 + -0xd00 + (ushort)(byte)(&DAT_0838baec)[(uint)*(byte *)(param_1 + 0x19) * 2];
        uVar4 = (int)sVar3 + 1;
        uVar2 = uVar4 & 0xffff;
      } while ((int)(uVar4 * 0x10000) >> 0x10 < 8);
    }
    else {
      uVar2 = 0;
      do {
        sVar3 = (short)uVar2;
        *(ushort *)(sVar3 * 2 + iVar1) =
             sVar3 + -0xd00 + (ushort)(byte)(&DAT_0838bad4)[(uint)*(byte *)(param_1 + 0x18) * 2];
        uVar4 = (int)sVar3 + 1;
        uVar2 = uVar4 & 0xffff;
      } while ((int)(uVar4 * 0x10000) >> 0x10 < 8);
    }
    sub_08003B28(iVar1,(DAT_020023c6 & 0x1f00) * 8 + 0x322,0x10);
  }
  return in_lr;
}

