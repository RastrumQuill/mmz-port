// sub_0801C5CC at 0x0801C5CC (thumb)

uint sub_0801C5CC(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x183);
  if ((*(byte *)(param_1 + 0x17a) & 0x40) != 0) {
    uVar1 = uVar1 << 1;
  }
  return uVar1 & 0xff;
}

