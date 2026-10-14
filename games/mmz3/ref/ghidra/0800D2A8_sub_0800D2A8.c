// sub_0800D2A8 at 0x0800D2A8 (thumb)

undefined4 sub_0800D2A8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar1] = (ushort)uVar2 | 0x8044;
    (&DAT_020023cc)[uVar1] = 0;
    sub_080FE110(&DAT_085283d0,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080FE110(&DAT_08528bd8,((ushort)(&DAT_020023c4)[uVar1] & 0x1f00) * 8 + 0x6000800,0x200);
    DAT_02002400 = 0x3b44;
    DAT_02002402 = 0xc04;
    *(undefined *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x01';
  return in_lr;
}

