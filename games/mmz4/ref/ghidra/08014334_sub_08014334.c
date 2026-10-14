// sub_08014334 at 0x08014334 (thumb)

undefined4 sub_08014334(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  (&DAT_02000a0c)[uVar1 * 2] = (short)*(undefined4 *)(param_1 + 0x34);
  (&DAT_02000a0e)[uVar1 * 2] = (short)*(undefined4 *)(param_1 + 0x38) + 0x10;
  return in_lr;
}

