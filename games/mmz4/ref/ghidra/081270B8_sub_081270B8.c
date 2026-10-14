// sub_081270B8 at 0x081270B8 (thumb)

undefined4 sub_081270B8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  sub_081277A4((&DAT_08138864)[(uint)*(ushort *)(&DAT_08138910 + uVar1) * 3],
               *(undefined4 *)(&DAT_0813890c + uVar1));
  return in_lr;
}

