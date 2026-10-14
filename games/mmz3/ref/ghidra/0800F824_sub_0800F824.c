// sub_0800F824 at 0x0800F824 (thumb)

undefined4 sub_0800F824(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  uint local_18 [2];
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  local_18[0] = (uint)*(byte *)(param_1 + 0xe);
  if (local_18[0] == 0) {
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_020023c4)[(uVar1 << 0x10) >> 0x14] = (ushort)uVar2 | 0x4046;
    sub_080FE110(local_18,(uVar2 & 0x1f00) * 8 + 0x6000000,0x1000400);
    sub_08004340(uVar1 & 0xff,&DAT_085222a0,0x59,0,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

