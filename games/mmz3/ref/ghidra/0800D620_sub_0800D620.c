// sub_0800D620 at 0x0800D620 (thumb)

undefined4 sub_0800D620(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar1] = (ushort)uVar2 | 0x8044;
    (&DAT_020023cc)[uVar1] = 0;
    sub_080FE110(&DAT_0852b430,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080FE110(&DAT_0852ac28,((ushort)(&DAT_020023c4)[uVar1] & 0x1f00) * 8 + 0x6000800,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

