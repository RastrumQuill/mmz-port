// sub_0800EB6C at 0x0800EB6C (thumb)

undefined4 sub_0800EB6C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar1] = (ushort)uVar2 | 0x4044;
    (&DAT_020023cc)[uVar1] = 0;
    sub_080FE110(&DAT_085364a0,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080FE110(&DAT_08536aa8,((ushort)(&DAT_020023c4)[uVar1] & 0x1f00) * 8 + 0x6000800,0x200);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 0x10;
  return in_lr;
}

