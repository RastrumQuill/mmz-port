// sub_08024DD0 at 0x08024DD0 (thumb)

undefined4 sub_08024DD0(int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar5 = (uint)(byte)(&DAT_0838baed)[(uint)*(byte *)(param_1 + 0x19) * 2];
    iVar1 = sub_08001B60(uVar5 * 2);
    if (iVar1 != 0) {
      uVar2 = 0;
      if (uVar5 != 0) {
        do {
          sVar3 = (short)uVar2;
          *(ushort *)(sVar3 * 2 + iVar1) =
               sVar3 + -0xd00 + (ushort)(byte)(&DAT_0838baec)[(uint)*(byte *)(param_1 + 0x19) * 2];
          uVar4 = (int)sVar3 + 1;
          uVar2 = uVar4 & 0xffff;
        } while ((int)(uVar4 * 0x10000) >> 0x10 < (int)uVar5);
      }
      uVar2 = (uint)(byte)(&DAT_0838bad5)[(uint)*(byte *)(param_1 + 0x18) * 2];
      if (9 < uVar2 + uVar5) {
        uVar2 = (int)(char)(&DAT_0838bad5)[(uint)*(byte *)(param_1 + 0x18) * 2] -
                ((uVar2 + uVar5) - 9) & 0xff;
      }
      if (uVar5 == 8) {
        uVar2 = uVar2 + 1 & 0xff;
      }
      sub_08003B28(iVar1,(DAT_020023c6 & 0x1f00) * 8 + (uVar2 + 0x1b1) * 2,uVar5 * 2);
    }
  }
  return in_lr;
}

