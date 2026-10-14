// sub_0800D6B0 at 0x0800D6B0 (thumb)

undefined4 sub_0800D6B0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  *(short *)(&DAT_020023cc + uVar1) = (short)(*(int *)(param_1 + 0x34) >> 1);
  *(short *)((int)&DAT_020023cc + uVar1 * 4 + 2) = (short)(*(int *)(param_1 + 0x38) >> 1) + -0x60;
  return in_lr;
}

