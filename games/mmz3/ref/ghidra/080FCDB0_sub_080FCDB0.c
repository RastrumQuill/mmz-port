// sub_080FCDB0 at 0x080FCDB0 (thumb)

undefined4 sub_080FCDB0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  if (*(int *)(&DAT_0810bf34)[(uint)*(ushort *)(&DAT_0810bfec + uVar1) * 3] ==
      *(int *)(&DAT_0810bfe8 + uVar1)) {
    sub_080FD4B4((int *)(&DAT_0810bf34)[(uint)*(ushort *)(&DAT_0810bfec + uVar1) * 3]);
  }
  return in_lr;
}

