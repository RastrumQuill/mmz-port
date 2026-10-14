// sub_0806F588 at 0x0806F588 (thumb)

undefined4 sub_0806F588(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) =
       *(int *)(param_1 + 0x5c) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 0x2c;
  *(int *)(param_1 + 0x50) =
       *(int *)(param_1 + 0x60) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 0x2c;
  return in_lr;
}

