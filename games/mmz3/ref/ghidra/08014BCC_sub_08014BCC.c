// sub_08014BCC at 0x08014BCC (thumb)

undefined4 sub_08014BCC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  *(short *)(&DAT_020023cc + uVar1) = (short)(*(int *)(param_1 + 0x34) + -0x1428 >> 2);
  *(undefined2 *)((int)&DAT_020023cc + uVar1 * 4 + 2) = *(undefined2 *)(param_1 + 0x10);
  return in_lr;
}

