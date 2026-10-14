// sub_0800BAAC at 0x0800BAAC (thumb)

undefined4 sub_0800BAAC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  uint local_20 [2];
  
  iVar2 = *(int *)(param_1 + 0x5c);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    uVar3 = *(uint *)(param_1 + 100);
    (&DAT_020023c4)[(uint)(iVar2 << 0x10) >> 0x14] = (ushort)uVar3 | 0x4046;
    sub_080FE110(&DAT_08526bb8,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = (uint)bVar1;
    sub_080FE110(local_20,((ushort)(&DAT_020023c4)[(uint)(iVar2 << 0x10) >> 0x14] & 0x1f00) * 8 +
                          0x6000800,0x1000200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

