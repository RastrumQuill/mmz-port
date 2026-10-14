// sub_08027204 at 0x08027204 (thumb)

undefined4 sub_08027204(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58);
  pbVar4 = (byte *)(param_1 + 0x18c);
  *pbVar4 = 0;
  uVar5 = 0;
  uVar3 = (uint)DAT_02002652;
  if (uVar3 != 0) {
    do {
      if (((iVar1 - (&DAT_0200265c)[uVar5 * 6]) + (ushort)(&DAT_02002658)[uVar5 * 0xc] + 0x1f00 <
           ((ushort)(&DAT_02002658)[uVar5 * 0xc] + 0x1f00) * 2) &&
         (((iVar2 + -0xf00) - (&DAT_02002660)[uVar5 * 6]) +
          (ushort)(&DAT_0200265a)[uVar5 * 0xc] + 0x1f00 <
          ((ushort)(&DAT_0200265a)[uVar5 * 0xc] + 0x1f00) * 2)) {
        *(char *)(param_1 + 0x15c + (uint)*pbVar4) = (char)uVar5;
        *pbVar4 = *pbVar4 + 1;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < uVar3);
  }
  return in_lr;
}

