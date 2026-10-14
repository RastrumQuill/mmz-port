// sub_08010130 at 0x08010130 (thumb)

undefined4 sub_08010130(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar1 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar2] = (ushort)uVar1 | 0x44;
    (&DAT_020023cc)[uVar2] = 0;
    sub_080FE110(&DAT_0852dc58,(uVar1 & 0x1f00) * 8 + 0x6000000,0x200);
    DAT_02002400 = 0x3d42;
    DAT_02002410 = DAT_02002410 | 0x4000;
    DAT_0200241d = 0xff;
    DAT_0200241e = DAT_0200241e & 0xfd | 0xc;
    DAT_02002416 = 0xff;
    *(undefined2 *)((int)&DAT_020023cc + uVar2 * 4 + 2) = 0xff80;
    DAT_0200241a = 0x80a0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

