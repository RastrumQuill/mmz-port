// sub_08014D34 at 0x08014D34 (thumb)

longlong sub_08014D34(int param_1)

{
  undefined uVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (*(short *)(iVar4 + 2) == 0) {
    uVar1 = *(undefined *)(iVar4 + 1);
    bVar2 = *(byte *)(iVar4 + 4);
  }
  else {
    uVar1 = **(undefined **)(iVar4 + 4);
    bVar2 = (*(undefined **)(iVar4 + 4))[1];
  }
  uVar6 = (uint)bVar2;
  switch(uVar1) {
  case 3:
    sub_080014E8(&UNK_084b8000 + uVar6 * 0x14,
                 ((uint)(ushort)(&DAT_02022ea0)[uVar6] -
                 (uint)((ushort)(&DAT_084b8006)[uVar6 * 10] >> 6)) * 0x20 + 0x10000);
    puVar5 = &UNK_084b800c + uVar6 * 0x14;
    puVar3 = &DAT_02022f30;
    break;
  case 4:
    sub_080014E8(&UNK_084e0000 + uVar6 * 0x14,
                 ((uint)(ushort)(&DAT_02022f80)[uVar6] -
                 (uint)((ushort)(&DAT_084e0006)[uVar6 * 10] >> 6)) * 0x20 + 0x10000);
    puVar5 = &UNK_084e000c + uVar6 * 0x14;
    puVar3 = &DAT_02022fe0;
    break;
  case 5:
    sub_080014E8(&DAT_08500000 + uVar6 * 0x14,
                 ((uint)(ushort)(&DAT_02023010)[uVar6] -
                 (uint)((ushort)(&DAT_08500006)[uVar6 * 10] >> 6)) * 0x20 + 0x10000);
    puVar5 = &DAT_0850000c + uVar6 * 0x14;
    puVar3 = &DAT_020230c0;
    break;
  case 6:
    sub_080014E8(&UNK_08510000 + uVar6 * 0x14,
                 ((uint)(ushort)(&DAT_02023170)[uVar6] -
                 (uint)((ushort)(&DAT_08510006)[uVar6 * 10] >> 6)) * 0x20 + 0x10000);
    puVar5 = &UNK_0851000c + uVar6 * 0x14;
    puVar3 = &DAT_02023120;
    break;
  case 7:
    iVar4 = uVar6 * 0x14;
    sub_080014E8(&DAT_084fc000 + iVar4,
                 ((uint)(ushort)(&DAT_02023200)[uVar6] -
                 (uint)((ushort)(&DAT_084fc006)[uVar6 * 10] >> 6)) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084fc00c + iVar4,
                 ((uint)(byte)(&DAT_02023208)[uVar6] - (uint)(byte)(&DAT_084fc013)[iVar4]) * 0x20 +
                 0x200);
  default:
    goto switchD_08014d5c_caseD_5;
  }
  sub_0800179C(puVar5,((uint)(byte)puVar3[uVar6] - (uint)(byte)puVar5[7]) * 0x20 + 0x200);
switchD_08014d5c_caseD_5:
  return (ulonglong)in_lr << 0x20;
}

