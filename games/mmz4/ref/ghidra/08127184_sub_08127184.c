// sub_08127184 at 0x08127184 (thumb)

undefined4 sub_08127184(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  if (*(int *)(&DAT_08138864)[(uint)*(ushort *)(&DAT_08138910 + uVar1) * 3] ==
      *(int *)(&DAT_0813890c + uVar1)) {
    sub_08127888((int *)(&DAT_08138864)[(uint)*(ushort *)(&DAT_08138910 + uVar1) * 3]);
  }
  return in_lr;
}

