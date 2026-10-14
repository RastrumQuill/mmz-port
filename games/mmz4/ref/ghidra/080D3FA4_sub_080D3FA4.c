// sub_080D3FA4 at 0x080D3FA4 (thumb)

undefined4 sub_080D3FA4(int param_1)

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
  
  iVar8 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar8 + 0xc) < 2) {
    if (*(char *)(iVar8 + 0xf) == '\0') {
      DAT_02000a00 = DAT_02000a00 | 0x100;
      sub_08001D30(&UNK_08b6c0dc + (uint)*(byte *)(iVar8 + 0x10) * 0x14,(DAT_02000a04 & 0xc) << 0xc)
      ;
      sub_08002208(&UNK_08b6c0e8 + (uint)*(byte *)(iVar8 + 0x10) * 0x14,0);
      *(char *)(iVar8 + 0xf) = *(char *)(iVar8 + 0xf) + '\x01';
    }
    switch(*(undefined *)(iVar8 + 0xe)) {
    case 0:
      iVar8 = (uint)(*(byte *)(iVar8 + 0x12) >> 2) * 4;
      bVar1 = **(byte **)(&DAT_08864530 + iVar8);
      uVar4 = 0;
      iVar6 = (int)(short)(ushort)(*(byte **)(&DAT_08864530 + iVar8))[1];
      do {
        uVar3 = 0;
        if (iVar6 != 0) {
          iVar7 = (int)(uVar4 * 0x10000) >> 0x10;
          iVar2 = *(int *)(&DAT_08864530 + iVar8);
          do {
            iVar5 = (int)(short)uVar3;
            *(ushort *)(&DAT_0202f7e0 + (iVar5 + iVar7 * 0x20 + (uint)bVar1) * 2) =
                 *(byte *)(iVar5 + iVar6 * iVar7 + iVar2 + 2) | 0x1200;
            uVar3 = iVar5 + 1U & 0xffff;
          } while ((int)((iVar5 + 1U) * 0x10000) >> 0x10 < iVar6);
        }
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 6);
      break;
    case 1:
      uVar4 = 0;
      do {
        uVar3 = 0;
        iVar6 = (int)(uVar4 * 0x10000) >> 0x10;
        do {
          iVar2 = (int)(short)uVar3;
          *(ushort *)(&DAT_0202f7e0 + (iVar2 + iVar6 * 0x20 + 2) * 2) =
               (byte)(&DAT_088642b8)[iVar2 + iVar6 * 0x1a] | 0x1200;
          uVar3 = iVar2 + 1U & 0xffff;
        } while ((int)((iVar2 + 1U) * 0x10000) >> 0x10 < 0x1a);
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 6);
      uVar4 = 0;
      do {
        iVar6 = (int)(short)uVar4;
        (&DAT_0202f964)[iVar6] =
             (byte)(&DAT_08864564)[iVar6 + (uint)*(byte *)(iVar8 + 0x12) * 0xd] | 0x1600;
        (&DAT_0202f9a4)[iVar6] =
             (byte)(&DAT_08864564)[iVar6 + (uint)*(byte *)(iVar8 + 0x12) * 0xd] | 0x1e00;
        (&DAT_0202f97e)[iVar6] =
             (byte)(&DAT_08864570)[(uint)*(byte *)(iVar8 + 0x12) * 0xd - iVar6] | 0x1200;
        (&DAT_0202f9be)[iVar6] =
             (byte)(&DAT_08864570)[(uint)*(byte *)(iVar8 + 0x12) * 0xd - iVar6] | 0x1a00;
        uVar4 = iVar6 + 1U & 0xffff;
      } while ((int)((iVar6 + 1U) * 0x10000) >> 0x10 < 0xd);
      break;
    case 2:
      uVar4 = 0;
      do {
        uVar3 = 0;
        iVar8 = (int)(uVar4 * 0x10000) >> 0x10;
        do {
          iVar6 = (int)(short)uVar3;
          *(ushort *)(&DAT_0202f7e0 + (iVar6 + iVar8 * 0x20 + 2) * 2) =
               (byte)(&DAT_088642b8)[iVar6 + iVar8 * 0x1a] | 0x1200;
          uVar3 = iVar6 + 1U & 0xffff;
        } while ((int)((iVar6 + 1U) * 0x10000) >> 0x10 < 0x1a);
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 6);
      uVar4 = 0;
      do {
        iVar8 = (int)(short)uVar4;
        (&DAT_0202f964)[iVar8] = (byte)(&DAT_088646a9)[iVar8] | 0x1600;
        (&DAT_0202f9a4)[iVar8] = (byte)(&DAT_088646a9)[iVar8] | 0x1e00;
        (&DAT_0202f97e)[iVar8] = (byte)(&DAT_088646b5)[-iVar8] | 0x1200;
        (&DAT_0202f9be)[iVar8] = (byte)(&DAT_088646b5)[-iVar8] | 0x1a00;
        uVar4 = iVar8 + 1U & 0xffff;
      } while ((int)((iVar8 + 1U) * 0x10000) >> 0x10 < 0xd);
      break;
    case 3:
      iVar8 = ((*(byte *)(iVar8 + 0x12) >> 2) + 6) * 4;
      bVar1 = **(byte **)(&DAT_08864530 + iVar8);
      uVar4 = 0;
      iVar6 = (int)(short)(ushort)(*(byte **)(&DAT_08864530 + iVar8))[1];
      do {
        uVar3 = 0;
        if (iVar6 != 0) {
          iVar7 = (int)(uVar4 * 0x10000) >> 0x10;
          iVar2 = *(int *)(&DAT_08864530 + iVar8);
          do {
            iVar5 = (int)(short)uVar3;
            *(ushort *)(&DAT_0202f7e0 + (iVar5 + iVar7 * 0x20 + (uint)bVar1) * 2) =
                 *(byte *)(iVar5 + iVar6 * iVar7 + iVar2 + 2) | 0x1200;
            uVar3 = iVar5 + 1U & 0xffff;
          } while ((int)((iVar5 + 1U) * 0x10000) >> 0x10 < iVar6);
        }
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 6);
      uVar4 = 0;
      do {
        iVar8 = (int)(short)uVar4;
        (&DAT_0202f964)[iVar8] = (byte)(&DAT_088646a9)[iVar8] | 0x1600;
        (&DAT_0202f9a4)[iVar8] = (byte)(&DAT_088646a9)[iVar8] | 0x1e00;
        (&DAT_0202f97e)[iVar8] = (byte)(&DAT_088646b5)[-iVar8] | 0x1200;
        (&DAT_0202f9be)[iVar8] = (byte)(&DAT_088646b5)[-iVar8] | 0x1a00;
        uVar4 = iVar8 + 1U & 0xffff;
      } while ((int)((iVar8 + 1U) * 0x10000) >> 0x10 < 0xd);
      break;
    case 4:
      uVar4 = 0;
      do {
        iVar6 = (int)(short)uVar4;
        (&DAT_0202f964)[iVar6] =
             (byte)(&DAT_08864564)[iVar6 + (0x19 - (uint)*(byte *)(iVar8 + 0x12)) * 0xd] | 0x1600;
        (&DAT_0202f9a4)[iVar6] =
             (byte)(&DAT_08864564)[iVar6 + (0x19 - (uint)*(byte *)(iVar8 + 0x12)) * 0xd] | 0x1e00;
        (&DAT_0202f97e)[iVar6] =
             (byte)(&DAT_08864570)[(0x19 - (uint)*(byte *)(iVar8 + 0x12)) * 0xd - iVar6] | 0x1200;
        (&DAT_0202f9be)[iVar6] =
             (byte)(&DAT_08864570)[(0x19 - (uint)*(byte *)(iVar8 + 0x12)) * 0xd - iVar6] | 0x1a00;
        uVar4 = iVar6 + 1U & 0xffff;
      } while ((int)((iVar6 + 1U) * 0x10000) >> 0x10 < 0xd);
    }
  }
  return in_lr;
}

