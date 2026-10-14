// sub_0801BA4C at 0x0801BA4C (thumb)

undefined4 sub_0801BA4C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x150);
  if (uVar1 != 0) {
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[uVar1 & 0xffff],(int)uVar1 >> 0x10 & 0xff,
                 uVar1 >> 0x18);
  }
  return in_lr;
}

