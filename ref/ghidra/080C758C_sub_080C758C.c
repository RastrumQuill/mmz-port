// sub_080C758C at 0x080C758C (thumb)

undefined4 sub_080C758C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  if (*(int *)(&DAT_080d2b5c)[(uint)*(ushort *)(&DAT_080d2c08 + uVar1) * 3] ==
      *(int *)(&DAT_080d2c04 + uVar1)) {
    sub_080C7C90((int *)(&DAT_080d2b5c)[(uint)*(ushort *)(&DAT_080d2c08 + uVar1) * 3]);
  }
  return in_lr;
}

