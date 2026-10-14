// sub_080189E0 at 0x080189E0 (thumb)

undefined4 sub_080189E0(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  undefined4 local_34 [2];
  uint local_2c;
  uint local_28;
  ushort *local_24;
  
  local_2c = param_2 & 0xff;
  local_28 = (uint)(param_1 << 0x18) >> 0x16;
  pbVar6 = *(byte **)(&DAT_083441bc + local_28);
  if (DAT_020300e1 == -1) {
    sub_0800393C(&DAT_085d78f8,(DAT_0202fa10 - 0xa0) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7904,(DAT_0202f810 - 0xe) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d7920,(DAT_0202fa14 - 0x167) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d792c,(DAT_0202f814 - 0xe) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d7934,(DAT_0202fa16 - 0x16a) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7940,(DAT_0202f816 - 0xe) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d894c,(DAT_0202fbb2 - 0x170) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8958,(DAT_0202f9b2 - 0xf) * 0x20 + 0x200);
    iVar4 = DAT_02002479 + 0xa7;
    sub_0800393C(&DAT_085d78f8 + iVar4 * 5,
                 ((uint)(&DAT_0202fa10)[iVar4] - (uint)((ushort)(&DAT_085d78fe)[iVar4 * 10] >> 6)) *
                 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7904 + iVar4 * 0x14,
                 ((uint)(&DAT_0202f810)[iVar4] - (uint)(byte)(&DAT_085d790b)[iVar4 * 0x14]) * 0x20 +
                 0x200);
    iVar4 = DAT_0200247a + 0xaa;
    sub_0800393C(&DAT_085d78f8 + iVar4 * 5,
                 ((uint)(&DAT_0202fa10)[iVar4] - (uint)((ushort)(&DAT_085d78fe)[iVar4 * 10] >> 6)) *
                 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7904 + iVar4 * 0x14,
                 ((uint)(&DAT_0202f810)[iVar4] - (uint)(byte)(&DAT_085d790b)[iVar4 * 0x14]) * 0x20 +
                 0x200);
    iVar4 = DAT_0200247c + 0xad;
    sub_0800393C(&DAT_085d78f8 + iVar4 * 5,
                 ((uint)(&DAT_0202fa10)[iVar4] - (uint)((ushort)(&DAT_085d78fe)[iVar4 * 10] >> 6)) *
                 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7904 + iVar4 * 0x14,
                 ((uint)(&DAT_0202f810)[iVar4] - (uint)(byte)(&DAT_085d790b)[iVar4 * 0x14]) * 0x20 +
                 0x200);
    iVar4 = DAT_0200247b + 0xb0;
    sub_0800393C(&DAT_085d78f8 + iVar4 * 5,
                 ((uint)(&DAT_0202fa10)[iVar4] - (uint)((ushort)(&DAT_085d78fe)[iVar4 * 10] >> 6)) *
                 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7904 + iVar4 * 0x14,
                 ((uint)(&DAT_0202f810)[iVar4] - (uint)(byte)(&DAT_085d790b)[iVar4 * 0x14]) * 0x20 +
                 0x200);
    local_34[0] = 0xffffffff;
    sub_080FE110(local_34,&DAT_03002e60,0x1000008);
    DAT_020300e1 = -2;
  }
  if ((DAT_020300de & 1) == 0) {
    if (DAT_020300e1 == -2) {
      bVar1 = *pbVar6;
      while (bVar1 != 0xff) {
        (&DAT_0202fa10)[*pbVar6] = *(undefined2 *)(pbVar6 + 2);
        (&DAT_0202f810)[*pbVar6] = (ushort)pbVar6[4];
        pbVar6 = pbVar6 + 8;
        bVar1 = *pbVar6;
      }
    }
    local_24 = &DAT_020300fa;
    DAT_020300fa = 0;
    pbVar6 = *(byte **)(&DAT_083441bc + local_28);
    bVar1 = *pbVar6;
    while (bVar1 != 0xff) {
      if (((int)(uint)pbVar6[1] >> (local_2c & 0xff) & 1U) != 0) {
        if (DAT_020300f7 == '\0') {
          bVar1 = pbVar6[5];
          bVar2 = 1;
        }
        else {
          bVar1 = pbVar6[5];
          bVar2 = 2;
        }
        if ((bVar2 & bVar1) != 0) {
          if (DAT_020300f9 == '\0') {
            bVar1 = pbVar6[6];
            bVar2 = 1;
          }
          else {
            bVar1 = pbVar6[6];
            bVar2 = 2;
          }
          if ((bVar2 & bVar1) != 0) {
            if (pbVar6[7] == 0) {
              uVar3 = *local_24 & ~(ushort)(1 << pbVar6[4]);
            }
            else {
              uVar3 = (ushort)(1 << pbVar6[4]) | *local_24;
            }
            *local_24 = uVar3;
            (&DAT_0202fa10)[*pbVar6] = *(undefined2 *)(pbVar6 + 2);
            (&DAT_0202f810)[*pbVar6] = (ushort)pbVar6[4];
            uVar5 = (uint)*pbVar6;
            sub_0800393C(&DAT_085d78f8 + uVar5 * 5,
                         ((uint)(&DAT_0202fa10)[uVar5] -
                         (uint)((ushort)(&DAT_085d78fe)[uVar5 * 10] >> 6)) * 0x20 + 0x10000);
            sub_08003E14(&DAT_085d7904 + uVar5 * 0x14,
                         ((uint)(&DAT_0202f810)[uVar5] - (uint)(byte)(&DAT_085d790b)[uVar5 * 0x14])
                         * 0x20 + 0x200);
          }
        }
      }
      pbVar6 = pbVar6 + 8;
      bVar1 = *pbVar6;
    }
    DAT_020300e1 = (char)local_2c;
  }
  return in_lr;
}

