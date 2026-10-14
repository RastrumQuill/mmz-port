// sub_08018CB4 at 0x08018CB4 (thumb)

undefined4 sub_08018CB4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  uint local_1c [2];
  
  iVar1 = *(int *)(param_1 + 0x5c);
  local_1c[0] = (uint)*(byte *)(param_1 + 0xe);
  if (local_1c[0] == 0) {
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] = (ushort)uVar2 | 0x8047;
    sub_081284E4(local_1c,(uVar2 & 0x1f00) * 8 + 0x6000000,0x1000200);
    sub_081284E4(&DAT_08b4af50,
                 &DAT_06000800 +
                 ((ushort)(&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] & 0x1f00) * 8,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

