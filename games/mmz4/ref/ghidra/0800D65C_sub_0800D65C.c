// sub_0800D65C at 0x0800D65C (thumb)

undefined4 sub_0800D65C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  uint local_28 [2];
  
  local_28[0] = (uint)*(byte *)(param_1 + 0xe);
  if (local_28[0] == 0) {
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar1 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar2] = (ushort)uVar1 | 0x4045;
    sub_081284E4(local_28,(uVar1 & 0x1f00) * 8 + 0x6000000,0x1000200);
    sub_081284E4(&DAT_08b605f0,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar2] & 0x1f00) * 8,0x200);
    *(undefined4 *)(&DAT_02000a0c + uVar2 * 2) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x2218;
    *(undefined4 *)(param_1 + 0x50) = 0x250;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

