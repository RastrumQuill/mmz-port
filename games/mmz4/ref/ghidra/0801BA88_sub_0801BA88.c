// sub_0801BA88 at 0x0801BA88 (thumb)

undefined4 sub_0801BA88(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  uint local_20 [2];
  
  bVar1 = *(byte *)(param_1 + 0xe);
  local_20[0] = (uint)bVar1;
  if (local_20[0] == 0) {
    uVar2 = *(uint *)(param_1 + 0x5c);
    uVar3 = (uVar2 << 0x10) >> 0x14;
    uVar4 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar3] = (ushort)uVar4 | 0x4046;
    *(undefined4 *)(&DAT_02000a0c + uVar3 * 2) = 0;
    sub_081284E4(local_20,(uVar4 & 0x1f00) * 8 + 0x6000000,0x1000400);
    sub_08002734(uVar2 & 0xff,&DAT_08b2c000,99,0,0);
    *(ushort *)(param_1 + 0x12) = (ushort)bVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + -1;
  return in_lr;
}

