// sub_08013D74 at 0x08013D74 (thumb)

undefined4 sub_08013D74(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  *(short *)(&DAT_020023cc + uVar1) = (short)(*(int *)(param_1 + 0x34) * 3 >> 2);
  *(short *)((int)&DAT_020023cc + uVar1 * 4 + 2) = (short)(*(int *)(param_1 + 0x38) * 3 >> 2);
  return in_lr;
}

