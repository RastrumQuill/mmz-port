// sub_08093538 at 0x08093538 (thumb)

undefined8 sub_08093538(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54));
  if (((*(int *)(DAT_0202f5c0 + 0x54) + uVar1 * 0xc000) - *(int *)(param_1 + 0x54)) - 0x5800 <
      0x1000) {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

