// sub_0800E9A8 at 0x0800E9A8 (thumb)

undefined4 sub_0800E9A8(uint param_1,uint param_2,byte param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  
  puVar5 = *(undefined2 **)((param_2 & 0xff) * 4 + *(int *)(&DAT_0829b4d8 + (param_1 & 0xff) * 4));
  if (DAT_02022ab5 == 0xff) {
    sub_080014E8(&DAT_08500000,(DAT_02023010 - 0x10) * 0x20 + 0x10000);
    sub_0800179C(&DAT_0850000c,(DAT_020230c0 - 0xe) * 0x20 + 0x200);
    sub_080014E8(&DAT_084fc000,(DAT_02023200 - 0x180) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084fc00c,(DAT_02023208 - 0xb) * 0x20 + 0x200);
  }
  if ((DAT_02022aae & 1) == 0) {
    for (; *(char *)(puVar5 + 1) != -1; puVar5 = puVar5 + 4) {
      if ((DAT_02022ab5 == 0xff) ||
         (((int)(uint)*(byte *)((int)puVar5 + 3) >> (uint)param_3 & 1U) != 0)) {
        switch(*puVar5) {
        case 3:
          (&DAT_02022ea0)[*(byte *)(puVar5 + 1)] = puVar5[2];
          puVar4 = &DAT_02022f30;
          (&DAT_02022f30)[*(byte *)(puVar5 + 1)] = (char)puVar5[3];
          if (((int)(uint)*(byte *)((int)puVar5 + 3) >> (uint)param_3 & 1U) != 0) {
            uVar2 = (uint)*(byte *)(puVar5 + 1);
            sub_080014E8(&UNK_084b8000 + uVar2 * 0x14,
                         ((uint)(ushort)(&DAT_02022ea0)[uVar2] -
                         (uint)((ushort)(&DAT_084b8006)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
            uVar2 = (uint)*(byte *)(puVar5 + 1);
            iVar1 = uVar2 * 0x14;
            puVar3 = &UNK_084b800c;
LAB_0800ec40:
            sub_0800179C(puVar3 + iVar1,
                         ((uint)(byte)puVar4[uVar2] - (uint)(byte)(puVar3 + iVar1)[7]) * 0x20 +
                         0x200);
          }
          break;
        case 4:
          (&DAT_02022f80)[*(byte *)(puVar5 + 1)] = puVar5[2];
          puVar4 = &DAT_02022fe0;
          (&DAT_02022fe0)[*(byte *)(puVar5 + 1)] = (char)puVar5[3];
          if (((int)(uint)*(byte *)((int)puVar5 + 3) >> (uint)param_3 & 1U) != 0) {
            uVar2 = (uint)*(byte *)(puVar5 + 1);
            sub_080014E8(&UNK_084e0000 + uVar2 * 0x14,
                         ((uint)(ushort)(&DAT_02022f80)[uVar2] -
                         (uint)((ushort)(&DAT_084e0006)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
            uVar2 = (uint)*(byte *)(puVar5 + 1);
            iVar1 = uVar2 * 0x14;
            puVar3 = &UNK_084e000c;
            goto LAB_0800ec40;
          }
          break;
        case 5:
          (&DAT_02023010)[*(byte *)(puVar5 + 1)] = puVar5[2];
          puVar4 = &DAT_020230c0;
          (&DAT_020230c0)[*(byte *)(puVar5 + 1)] = (char)puVar5[3];
          if (((int)(uint)*(byte *)((int)puVar5 + 3) >> (uint)param_3 & 1U) != 0) {
            uVar2 = (uint)*(byte *)(puVar5 + 1);
            sub_080014E8(&DAT_08500000 + uVar2 * 0x14,
                         ((uint)(&DAT_02023010)[uVar2] -
                         (uint)((ushort)(&DAT_08500006)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
            uVar2 = (uint)*(byte *)(puVar5 + 1);
            iVar1 = uVar2 * 0x14;
            puVar3 = &DAT_0850000c;
            goto LAB_0800ec40;
          }
          break;
        case 6:
          (&DAT_02023170)[*(byte *)(puVar5 + 1)] = puVar5[2];
          puVar4 = &DAT_02023120;
          (&DAT_02023120)[*(byte *)(puVar5 + 1)] = (char)puVar5[3];
          if (((int)(uint)*(byte *)((int)puVar5 + 3) >> (uint)param_3 & 1U) != 0) {
            uVar2 = (uint)*(byte *)(puVar5 + 1);
            sub_080014E8(&UNK_08510000 + uVar2 * 0x14,
                         ((uint)(ushort)(&DAT_02023170)[uVar2] -
                         (uint)((ushort)(&DAT_08510006)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
            uVar2 = (uint)*(byte *)(puVar5 + 1);
            iVar1 = uVar2 * 0x14;
            puVar3 = &UNK_0851000c;
            goto LAB_0800ec40;
          }
          break;
        case 7:
          (&DAT_02023200)[*(byte *)(puVar5 + 1)] = puVar5[2];
          (&DAT_02023208)[*(byte *)(puVar5 + 1)] = (char)puVar5[3];
          if (((int)(uint)*(byte *)((int)puVar5 + 3) >> (uint)param_3 & 1U) != 0) {
            uVar2 = (uint)*(byte *)(puVar5 + 1);
            sub_080014E8(&DAT_084fc000 + uVar2 * 0x14,
                         ((uint)(&DAT_02023200)[uVar2] -
                         (uint)((ushort)(&DAT_084fc006)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
            iVar1 = (uint)*(byte *)(puVar5 + 1) * 0x14;
            sub_0800179C(&DAT_084fc00c + iVar1,
                         ((uint)(&DAT_02023208)[*(byte *)(puVar5 + 1)] -
                         (uint)(byte)(&DAT_084fc013)[iVar1]) * 0x20 + 0x200);
          }
        }
      }
    }
    DAT_02022ab5 = param_3;
    if (DAT_02022ac3 != '\0') {
      sub_0800ED1C(param_1 & 0xff,param_2 & 0xff);
    }
  }
  return in_lr;
}

