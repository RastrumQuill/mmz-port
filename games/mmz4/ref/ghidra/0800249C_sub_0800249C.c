// sub_0800249C at 0x0800249C (thumb)

undefined4 sub_0800249C(uint param_1,undefined2 param_2)

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
  puVar5 = (ushort *)&DAT_020008a0;
  do {
    if (*puVar5 == uVar3) {
      return in_lr;
    }
    puVar5 = puVar5 + 1;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  iVar8 = 0;
  if (DAT_020008a0 != 0) {
    psVar6 = &DAT_020008a0;
    do {
      psVar6 = psVar6 + 1;
      iVar8 = iVar8 + 1;
      if (0xf < iVar8) break;
    } while (*psVar6 != 0);
  }
  if (iVar8 != 0x10) {
    iVar4 = iVar8 * 0x14;
    iVar7 = (param_1 & 0xffff) * 4;
    (&DAT_020008c0)[iVar8 * 5] =
         (undefined *)(*(int *)(&DAT_08c0c000 + iVar7) + (int)(&DAT_08c0c000 + iVar7));
    *(undefined4 *)(iVar4 + 0x20008c4) = *(undefined4 *)(&DAT_08c18000 + iVar7);
    (&DAT_020008d0)[iVar8 * 10] = 0;
    (&DAT_020008d2)[iVar8 * 10] = param_2;
    sub_080034A4(&DAT_020008c8 + iVar8 * 5);
    sub_080034B8(&DAT_020008c8 + iVar8 * 5,0);
    iVar7 = (&DAT_020008c0)[iVar8 * 5];
    bVar1 = *(byte *)(iVar7 + 1);
    sVar2 = ((ushort)*(byte *)(iVar7 + 2) - (ushort)bVar1) + 1;
    if (((&DAT_020008d2)[iVar8 * 10] & 0x1ff) == 0) {
      sub_081284E8(iVar7 + (int)sVar2 *
                           (uint)*(byte *)((char)(&DAT_020008cd)[iVar4] * 2 +
                                          *(int *)((uint)(byte)(&DAT_020008cc)[iVar4] * 4 +
                                                  (&DAT_020008c8)[iVar8 * 5])) * 2 + 4,
                   (int)&DAT_03002ac0 + (uint)bVar1 * 2 + (uint)(ushort)(&DAT_020008d2)[iVar8 * 10],
                   (int)sVar2 & 0x1fffff);
    }
    else {
      sub_081284E8(iVar7 + (int)sVar2 *
                           (uint)*(byte *)((char)(&DAT_020008cd)[iVar4] * 2 +
                                          *(int *)((uint)(byte)(&DAT_020008cc)[iVar4] * 4 +
                                                  (&DAT_020008c8)[iVar8 * 5])) * 2 + 4,
                   (int)&DAT_03002ac0 +
                   (bVar1 & 0xf) * 2 + (uint)(ushort)(&DAT_020008d2)[iVar8 * 10],
                   (int)sVar2 & 0x1fffff);
    }
    (&DAT_020008a0)[iVar8] = (short)uVar3;
  }
  return in_lr;
}

