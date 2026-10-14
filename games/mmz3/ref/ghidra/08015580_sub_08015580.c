// sub_08015580 at 0x08015580 (thumb)

undefined4 sub_08015580(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined4 in_lr;
  
  uVar9 = *(int *)(param_1 + 0x5c) << 0x10;
  sub_08009550(param_1);
  uVar7 = uVar9 >> 0x14;
  uVar1 = *(ushort *)(&DAT_020023cc + uVar7);
  uVar5 = *(ushort *)((int)&DAT_020023cc + uVar7 * 4 + 2) + 2 & 0xffff;
  puVar6 = (undefined4 *)sub_08001B60(0x280);
  if (puVar6 != (undefined4 *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar10 = 0xf;
    puVar8 = puVar6;
    DAT_03001704 = puVar6;
    do {
      *puVar8 = (&DAT_020023cc)[uVar7];
      puVar8 = puVar8 + 1;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    iVar10 = 0x10;
    iVar11 = uVar5 + 0x80;
    puVar12 = puVar6 + 0x10;
    do {
      uVar7 = (uint)*(ushort *)(param_1 + 0x10);
      sVar2 = *(short *)((int)&DAT_080fe64c + (uVar7 * 0x3000000 >> 0x17));
      sVar3 = *(short *)((int)&DAT_080fe64c + ((iVar11 + uVar7 * 4) * 0x2000000 >> 0x17));
      sVar4 = FUN_080fe2f8((int)*(short *)((int)&DAT_080fe64c +
                                          ((uVar7 + iVar10 * 2) * 0x1000000 >> 0x17)),0x13);
      *puVar12 = ((sVar2 * 3 + sVar3 * 2 >> 8) + 4 + uVar5) * 0x10000 |
                 (uint)uVar1 + (int)sVar4 & 0xffff;
      iVar11 = iVar11 + 8;
      iVar10 = iVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar10 < 0x60);
    if (iVar10 < 0xa0) {
      puVar6 = puVar6 + iVar10;
      do {
        *puVar6 = (&DAT_020023cc)[uVar9 >> 0x14];
        puVar6 = puVar6 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0xa0);
    }
  }
  return in_lr;
}

