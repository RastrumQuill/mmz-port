// sub_08018EA8 at 0x08018EA8 (thumb)

undefined4 sub_08018EA8(int param_1,sbyte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  pbVar4 = *(byte **)(&DAT_083441bc + ((uint)(param_1 << 0x18) >> 0x16));
  if (*pbVar4 != 0xff) {
    do {
      if (((int)(uint)pbVar4[1] >> param_2 & 1U) != 0) {
        if (DAT_020300f7 == '\0') {
          bVar1 = pbVar4[5];
          bVar2 = 1;
        }
        else {
          bVar1 = pbVar4[5];
          bVar2 = 2;
        }
        if (((bVar2 & bVar1) != 0) && ((pbVar4[6] & 2) != 0)) {
          if (pbVar4[7] == 0) {
            DAT_020300fa = DAT_020300fa & ~(ushort)(1 << pbVar4[4]);
          }
          else {
            DAT_020300fa = (ushort)(1 << pbVar4[4]) | DAT_020300fa;
          }
          (&DAT_0202fa10)[*pbVar4] = *(undefined2 *)(pbVar4 + 2);
          (&DAT_0202f810)[*pbVar4] = (ushort)pbVar4[4];
          uVar3 = (uint)*pbVar4;
          sub_0800393C(&DAT_085d78f8 + uVar3 * 5,
                       ((uint)(ushort)(&DAT_0202fa10)[uVar3] -
                       (uint)((ushort)(&DAT_085d78fe)[uVar3 * 10] >> 6)) * 0x20 + 0x10000);
          sub_08003E14(&DAT_085d7904 + uVar3 * 0x14,
                       ((uint)(ushort)(&DAT_0202f810)[uVar3] -
                       (uint)(byte)(&DAT_085d790b)[uVar3 * 0x14]) * 0x20 + 0x200);
        }
      }
      pbVar4 = pbVar4 + 8;
    } while (*pbVar4 != 0xff);
  }
  return in_lr;
}

