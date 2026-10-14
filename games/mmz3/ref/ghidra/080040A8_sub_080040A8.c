// sub_080040A8 at 0x080040A8 (thumb)

undefined4 sub_080040A8(uint param_1,undefined2 param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = 0;
  uVar3 = (param_1 & 0xffff) + 1;
  puVar5 = (ushort *)&DAT_02002260;
  do {
    if (*puVar5 == uVar3) {
      return in_lr;
    }
    puVar5 = puVar5 + 1;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  iVar8 = 0;
  if (DAT_02002260 != 0) {
    psVar6 = &DAT_02002260;
    do {
      psVar6 = psVar6 + 1;
      iVar8 = iVar8 + 1;
      if (0xf < iVar8) break;
    } while (*psVar6 != 0);
  }
  if (iVar8 != 0x10) {
    iVar4 = iVar8 * 0x14;
    iVar7 = (param_1 & 0xffff) * 4;
    (&DAT_02002280)[iVar8 * 5] =
         (undefined *)(*(int *)(&DAT_085b5cd0 + iVar7) + (int)(&DAT_085b5cd0 + iVar7));
    *(undefined4 *)(iVar4 + 0x2002284) = *(undefined4 *)(&DAT_085be764 + iVar7);
    (&DAT_02002290)[iVar8 * 10] = 0;
    (&DAT_02002292)[iVar8 * 10] = param_2;
    sub_080050B0(&DAT_02002288 + iVar8 * 5);
    sub_080050C4(&DAT_02002288 + iVar8 * 5,0);
    iVar7 = (&DAT_02002280)[iVar8 * 5];
    bVar1 = *(byte *)(iVar7 + 1);
    sVar2 = ((ushort)*(byte *)(iVar7 + 2) - (ushort)bVar1) + 1;
    if (((&DAT_02002292)[iVar8 * 10] & 0x1ff) == 0) {
      FUN_080fe114(iVar7 + (int)sVar2 *
                           (uint)*(byte *)((char)(&DAT_0200228d)[iVar4] * 2 +
                                          *(int *)((uint)(byte)(&DAT_0200228c)[iVar4] * 4 +
                                                  (&DAT_02002288)[iVar8 * 5])) * 2 + 4,
                   (int)&DAT_03002ac0 + (uint)bVar1 * 2 + (uint)(ushort)(&DAT_02002292)[iVar8 * 10],
                   (int)sVar2 & 0x1fffff);
    }
    else {
      FUN_080fe114(iVar7 + (int)sVar2 *
                           (uint)*(byte *)((char)(&DAT_0200228d)[iVar4] * 2 +
                                          *(int *)((uint)(byte)(&DAT_0200228c)[iVar4] * 4 +
                                                  (&DAT_02002288)[iVar8 * 5])) * 2 + 4,
                   (int)&DAT_03002ac0 +
                   (bVar1 & 0xf) * 2 + (uint)(ushort)(&DAT_02002292)[iVar8 * 10],
                   (int)sVar2 & 0x1fffff);
    }
    (&DAT_02002260)[iVar8] = (short)uVar3;
  }
  return in_lr;
}

