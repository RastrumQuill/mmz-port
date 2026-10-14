// sub_08093468 at 0x08093468 (thumb)

undefined4 sub_08093468(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar7 + 0xc) < 2) {
    if (*(char *)(iVar7 + 0xf) == '\0') {
      sub_080014E8(&DAT_082f1140,(DAT_02004f34 & 0xc) << 0xc);
      sub_0800179C(&DAT_082f114c,0);
      *(char *)(iVar7 + 0xf) = *(char *)(iVar7 + 0xf) + '\x01';
    }
    if (*(char *)(iVar7 + 0xd) == '\0') {
      uVar3 = sub_080C8C38(*(undefined *)(iVar7 + 0x12),3);
      uVar3 = uVar3 & 0xff;
      if (9 < uVar3) {
        uVar3 = 9;
      }
      pbVar4 = *(byte **)(&DAT_082b4594 + uVar3 * 4);
      bVar1 = *pbVar4;
      uVar3 = 0;
      bVar2 = pbVar4[1];
      if (bVar2 != 0) {
        do {
          iVar7 = (int)(short)uVar3;
          (&DAT_0202392c)[(uint)bVar1 + iVar7] = pbVar4[iVar7 + 2] | 0x1200;
          iVar6 = (int)(short)(ushort)bVar2;
          *(ushort *)(&DAT_0202396c + ((uint)bVar1 + iVar7) * 2) =
               pbVar4[iVar7 + iVar6 + 2] | 0x1200;
          uVar3 = iVar7 + 1U & 0xffff;
        } while ((int)((iVar7 + 1U) * 0x10000) >> 0x10 < iVar6);
      }
    }
    else if (*(char *)(iVar7 + 0xd) == '\x01') {
      uVar3 = (uint)*(byte *)(iVar7 + 0x12) << 0x18;
      if (*(byte *)(iVar7 + 0x12) < 10) {
        uVar3 = uVar3 >> 0x19;
        if (5 < uVar3) {
          uVar3 = 5;
        }
        pbVar4 = *(byte **)(&DAT_082b45bc + uVar3 * 4);
        bVar1 = *pbVar4;
        uVar3 = 0;
        bVar2 = pbVar4[1];
        if (bVar2 != 0) {
          do {
            iVar7 = (int)(short)uVar3;
            (&DAT_0202392c)[(uint)bVar1 + iVar7] = pbVar4[iVar7 + 2] | 0x1200;
            iVar6 = (int)(short)(ushort)bVar2;
            *(ushort *)(&DAT_0202396c + ((uint)bVar1 + iVar7) * 2) =
                 pbVar4[iVar7 + iVar6 + 2] | 0x1200;
            uVar3 = iVar7 + 1U & 0xffff;
          } while ((int)((iVar7 + 1U) * 0x10000) >> 0x10 < iVar6);
        }
      }
      else {
        uVar3 = uVar3 >> 0x19;
        if (10 < uVar3) {
          uVar3 = 10;
        }
        uVar5 = 0;
        iVar7 = (&DAT_082b45d0)[uVar3 - 4];
        do {
          iVar6 = (int)(short)uVar5;
          (&DAT_0202392c)[iVar6] = *(byte *)(iVar7 + iVar6) | 0x1200;
          uVar5 = iVar6 + 1U & 0xffff;
        } while ((int)((iVar6 + 1U) * 0x10000) >> 0x10 < 0x20);
      }
    }
  }
  return in_lr;
}

