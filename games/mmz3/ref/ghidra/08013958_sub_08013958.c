// sub_08013958 at 0x08013958 (thumb)

undefined4 sub_08013958(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar1] = (ushort)uVar2 | 0x8044;
    (&DAT_020023cc)[uVar1] = 0;
    sub_080FE110(&DAT_08530480,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080FE110(&DAT_08530c88,((ushort)(&DAT_020023c4)[uVar1] & 0x1f00) * 8 + 0x6000800,0x200);
    DAT_02002400 = 0x3b44;
    DAT_02002402 = 0xc04;
    DAT_02002410 = DAT_02002410 | 0x4000;
    DAT_0200241d = 0xf3;
    DAT_0200241e = DAT_0200241e | 0xe;
    DAT_02002416 = 0xff;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

