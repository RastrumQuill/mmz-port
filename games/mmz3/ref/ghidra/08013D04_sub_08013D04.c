// sub_08013D04 at 0x08013D04 (thumb)

undefined4 sub_08013D04(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar1] = (ushort)uVar2 | 0x44;
    (&DAT_020023cc)[uVar1] = 0;
    sub_080FE110(&DAT_085324a0,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  DAT_0200241d = DAT_0200241d | 8;
  return in_lr;
}

