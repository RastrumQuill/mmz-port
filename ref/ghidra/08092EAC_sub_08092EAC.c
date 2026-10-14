// sub_08092EAC at 0x08092EAC (thumb)

undefined4 sub_08092EAC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar7 + 0xc) < 2) {
    if (*(char *)(iVar7 + 0xf) == '\0') {
      sub_080014E8(&DAT_082f10dc + (uint)*(byte *)(iVar7 + 0x10) * 0x14,(DAT_02004f34 & 0xc) << 0xc)
      ;
      sub_0800179C(&DAT_082f10e8 + (uint)*(byte *)(iVar7 + 0x10) * 0x14,0);
      *(char *)(iVar7 + 0xf) = *(char *)(iVar7 + 0xf) + '\x01';
    }
    switch(*(undefined *)(iVar7 + 0xe)) {
    case 0:
      iVar7 = (uint)(*(byte *)(iVar7 + 0x12) >> 2) * 4;
      bVar1 = **(byte **)(&DAT_082b4208 + iVar7);
      uVar4 = 0;
      iVar5 = (int)(short)(ushort)(*(byte **)(&DAT_082b4208 + iVar7))[1];
      do {
        uVar3 = 0;
        if (iVar5 != 0) {
          iVar8 = (int)(uVar4 * 0x10000) >> 0x10;
          iVar2 = *(int *)(&DAT_082b4208 + iVar7);
          do {
            iVar6 = (int)(short)uVar3;
            *(ushort *)(&DAT_020238ac + (iVar6 + iVar8 * 0x20 + (uint)bVar1) * 2) =
                 *(byte *)(iVar6 + iVar5 * iVar8 + iVar2 + 2) | 0x1200;
            uVar3 = iVar6 + 1U & 0xffff;
          } while ((int)((iVar6 + 1U) * 0x10000) >> 0x10 < iVar5);
        }
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 6);
      break;
    case 1:
      uVar4 = 0;
      do {
        uVar3 = 0;
        iVar5 = (int)(uVar4 * 0x10000) >> 0x10;
        do {
          iVar2 = (int)(short)uVar3;
          *(ushort *)(&DAT_020238ac + (iVar2 + iVar5 * 0x20 + 2) * 2) =
               (byte)(&DAT_082b3f90)[iVar2 + iVar5 * 0x1a] | 0x1200;
          uVar3 = iVar2 + 1U & 0xffff;
        } while ((int)((iVar2 + 1U) * 0x10000) >> 0x10 < 0x1a);
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 6);
      uVar4 = 0;
      do {
        iVar5 = (int)(short)uVar4;
        (&DAT_02023a30)[iVar5] =
             (byte)(&DAT_082b423c)[iVar5 + (uint)*(byte *)(iVar7 + 0x12) * 0xd] | 0x1600;
        (&DAT_02023a70)[iVar5] =
             (byte)(&DAT_082b423c)[iVar5 + (uint)*(byte *)(iVar7 + 0x12) * 0xd] | 0x1e00;
        (&DAT_02023a4a)[iVar5] =
             (byte)(&DAT_082b4248)[(uint)*(byte *)(iVar7 + 0x12) * 0xd - iVar5] | 0x1200;
        (&DAT_02023a8a)[iVar5] =
             (byte)(&DAT_082b4248)[(uint)*(byte *)(iVar7 + 0x12) * 0xd - iVar5] | 0x1a00;
        uVar4 = iVar5 + 1U & 0xffff;
      } while ((int)((iVar5 + 1U) * 0x10000) >> 0x10 < 0xd);
      break;
    case 2:
      uVar4 = 0;
      do {
        uVar3 = 0;
        iVar7 = (int)(uVar4 * 0x10000) >> 0x10;
        do {
          iVar5 = (int)(short)uVar3;
          *(ushort *)(&DAT_020238ac + (iVar5 + iVar7 * 0x20 + 2) * 2) =
               (byte)(&DAT_082b3f90)[iVar5 + iVar7 * 0x1a] | 0x1200;
          uVar3 = iVar5 + 1U & 0xffff;
        } while ((int)((iVar5 + 1U) * 0x10000) >> 0x10 < 0x1a);
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 6);
      uVar4 = 0;
      do {
        iVar7 = (int)(short)uVar4;
        (&DAT_02023a30)[iVar7] = (byte)(&DAT_082b4381)[iVar7] | 0x1600;
        (&DAT_02023a70)[iVar7] = (byte)(&DAT_082b4381)[iVar7] | 0x1e00;
        (&DAT_02023a4a)[iVar7] = (byte)(&DAT_082b438d)[-iVar7] | 0x1200;
        (&DAT_02023a8a)[iVar7] = (byte)(&DAT_082b438d)[-iVar7] | 0x1a00;
        uVar4 = iVar7 + 1U & 0xffff;
      } while ((int)((iVar7 + 1U) * 0x10000) >> 0x10 < 0xd);
      break;
    case 3:
      iVar7 = ((*(byte *)(iVar7 + 0x12) >> 2) + 6) * 4;
      bVar1 = **(byte **)(&DAT_082b4208 + iVar7);
      uVar4 = 0;
      iVar5 = (int)(short)(ushort)(*(byte **)(&DAT_082b4208 + iVar7))[1];
      do {
        uVar3 = 0;
        if (iVar5 != 0) {
          iVar8 = (int)(uVar4 * 0x10000) >> 0x10;
          iVar2 = *(int *)(&DAT_082b4208 + iVar7);
          do {
            iVar6 = (int)(short)uVar3;
            *(ushort *)(&DAT_020238ac + (iVar6 + iVar8 * 0x20 + (uint)bVar1) * 2) =
                 *(byte *)(iVar6 + iVar5 * iVar8 + iVar2 + 2) | 0x1200;
            uVar3 = iVar6 + 1U & 0xffff;
          } while ((int)((iVar6 + 1U) * 0x10000) >> 0x10 < iVar5);
        }
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 6);
      uVar4 = 0;
      do {
        iVar7 = (int)(short)uVar4;
        (&DAT_02023a30)[iVar7] = (byte)(&DAT_082b4381)[iVar7] | 0x1600;
        (&DAT_02023a70)[iVar7] = (byte)(&DAT_082b4381)[iVar7] | 0x1e00;
        (&DAT_02023a4a)[iVar7] = (byte)(&DAT_082b438d)[-iVar7] | 0x1200;
        (&DAT_02023a8a)[iVar7] = (byte)(&DAT_082b438d)[-iVar7] | 0x1a00;
        uVar4 = iVar7 + 1U & 0xffff;
      } while ((int)((iVar7 + 1U) * 0x10000) >> 0x10 < 0xd);
      break;
    case 4:
      uVar4 = 0;
      do {
        iVar5 = (int)(short)uVar4;
        (&DAT_02023a30)[iVar5] =
             (byte)(&DAT_082b423c)[iVar5 + (0x19 - (uint)*(byte *)(iVar7 + 0x12)) * 0xd] | 0x1600;
        (&DAT_02023a70)[iVar5] =
             (byte)(&DAT_082b423c)[iVar5 + (0x19 - (uint)*(byte *)(iVar7 + 0x12)) * 0xd] | 0x1e00;
        (&DAT_02023a4a)[iVar5] =
             (byte)(&DAT_082b4248)[(0x19 - (uint)*(byte *)(iVar7 + 0x12)) * 0xd - iVar5] | 0x1200;
        (&DAT_02023a8a)[iVar5] =
             (byte)(&DAT_082b4248)[(0x19 - (uint)*(byte *)(iVar7 + 0x12)) * 0xd - iVar5] | 0x1a00;
        uVar4 = iVar5 + 1U & 0xffff;
      } while ((int)((iVar5 + 1U) * 0x10000) >> 0x10 < 0xd);
    }
  }
  return in_lr;
}

