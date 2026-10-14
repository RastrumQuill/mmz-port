// sub_0802CD2C at 0x0802CD2C (thumb)

undefined4 sub_0802CD2C(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58);
  pbVar4 = (byte *)(param_1 + 0x1b8);
  *pbVar4 = 0;
  uVar5 = 0;
  uVar3 = (uint)DAT_02000c82;
  if (uVar3 != 0) {
    do {
      if (((iVar1 - (&DAT_02000c8c)[uVar5 * 6]) + (ushort)(&DAT_02000c88)[uVar5 * 0xc] + 0x1f00 <
           ((ushort)(&DAT_02000c88)[uVar5 * 0xc] + 0x1f00) * 2) &&
         (((iVar2 + -0xf00) - (&DAT_02000c90)[uVar5 * 6]) +
          (ushort)(&DAT_02000c8a)[uVar5 * 0xc] + 0x1f00 <
          ((ushort)(&DAT_02000c8a)[uVar5 * 0xc] + 0x1f00) * 2)) {
        *(char *)(param_1 + 0x188 + (uint)*pbVar4) = (char)uVar5;
        *pbVar4 = *pbVar4 + 1;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < uVar3);
  }
  return in_lr;
}

