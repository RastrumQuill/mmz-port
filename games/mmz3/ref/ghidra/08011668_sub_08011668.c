// sub_08011668 at 0x08011668 (thumb)

undefined4 sub_08011668(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    (&DAT_020023c4)[uVar1] = (ushort)*(undefined4 *)(param_1 + 100) | 0x45;
    (&DAT_020023cc)[uVar1] = 0;
    DAT_020023c0 = DAT_020023c0 & 0xdbff;
    sub_080FE110(&DAT_0852f470,((ushort)(&DAT_020023c4)[uVar1] & 0x1f00) * 8 + 0x6000000,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

