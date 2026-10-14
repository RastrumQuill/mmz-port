// sub_08017ABC at 0x08017ABC (thumb)

undefined4 sub_08017ABC(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  uint local_20 [2];
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar3 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar2] = (ushort)uVar3 | 0x8047;
    *(undefined4 *)(&DAT_02000a0c + uVar2 * 2) = 0;
    sub_081284E4(&DAT_08b426c8,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = (uint)bVar1;
    sub_081284E4(local_20,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar2] & 0x1f00) * 8,0x1000200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

