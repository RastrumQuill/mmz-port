// sub_081271B8 at 0x081271B8 (thumb)

undefined4 sub_081271B8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  if (*(int *)(&DAT_08138864)[(uint)*(ushort *)(&DAT_08138910 + uVar1) * 3] ==
      *(int *)(&DAT_0813890c + uVar1)) {
    sub_08126FF8((int *)(&DAT_08138864)[(uint)*(ushort *)(&DAT_08138910 + uVar1) * 3]);
  }
  return in_lr;
}

