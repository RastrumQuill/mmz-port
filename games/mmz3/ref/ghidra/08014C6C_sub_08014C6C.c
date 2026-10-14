// sub_08014C6C at 0x08014C6C (thumb)

undefined4 sub_08014C6C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  *(short *)(&DAT_020023cc + uVar1) = (short)(*(int *)(param_1 + 0x34) + -0x1428 >> 7);
  *(ushort *)((int)&DAT_020023cc + uVar1 * 4 + 2) = *(ushort *)(param_1 + 0x10) >> 2;
  return in_lr;
}

