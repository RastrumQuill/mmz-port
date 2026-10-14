// sub_0801E25C at 0x0801E25C (thumb)

undefined4 sub_0801E25C(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  undefined4 local_30 [2];
  uint local_28;
  uint local_24;
  
  local_28 = param_2 & 0xff;
  local_24 = (uint)(param_1 << 0x18) >> 0x16;
  pbVar3 = *(byte **)(&DAT_088394f4 + local_24);
  if (DAT_0202e891 == -1) {
    sub_08001D30(&DAT_08c44000,(DAT_0202e040 - 0xc6) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4400c,(DAT_0202de40 - 0xe) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c44014,(DAT_0202e042 - 0xbf) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44020,(DAT_0202de42 - 0xe) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c44028,(DAT_0202e044 - 0x199) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44034,(DAT_0202de44 - 0xe) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c44050,(DAT_0202e048 - 0x19e) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4405c,(DAT_0202de48 - 0xb) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c44064,(DAT_0202e04a - 0x18d) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44070,(DAT_0202de4a - 0xe) * 0x20 + 0x200);
    local_30[0] = 0xffffffff;
    sub_081284E4(local_30,&DAT_03002e60,0x1000008);
    DAT_0202e891 = -2;
  }
  if ((DAT_0202e88e & 1) == 0) {
    if (DAT_0202e891 == -2) {
      bVar1 = *pbVar3;
      while (bVar1 != 0xff) {
        (&DAT_0202e040)[*pbVar3] = *(undefined2 *)(pbVar3 + 2);
        (&DAT_0202de40)[*pbVar3] = (ushort)pbVar3[4];
        pbVar3 = pbVar3 + 8;
        bVar1 = *pbVar3;
      }
    }
    DAT_0202e8a6 = 0;
    pbVar3 = *(byte **)(&DAT_088394f4 + local_24);
    bVar1 = *pbVar3;
    while (bVar1 != 0xff) {
      if (((int)(uint)pbVar3[1] >> (local_28 & 0xff) & 1U) != 0) {
        (&DAT_0202e040)[*pbVar3] = *(undefined2 *)(pbVar3 + 2);
        (&DAT_0202de40)[*pbVar3] = (ushort)pbVar3[4];
        uVar2 = (uint)*pbVar3;
        sub_08001D30(&DAT_08c44000 + uVar2 * 5,
                     ((uint)(&DAT_0202e040)[uVar2] -
                     (uint)((ushort)(&DAT_08c44006)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
        sub_08002208(&DAT_08c4400c + uVar2 * 0x14,
                     ((uint)(&DAT_0202de40)[uVar2] - (uint)(byte)(&DAT_08c44013)[uVar2 * 0x14]) *
                     0x20 + 0x200);
      }
      pbVar3 = pbVar3 + 8;
      bVar1 = *pbVar3;
    }
    DAT_0202e891 = (char)local_28;
  }
  return in_lr;
}

