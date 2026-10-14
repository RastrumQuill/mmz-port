// sub_080F1B60 at 0x080F1B60 (thumb)

undefined4 sub_080F1B60(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000;
  uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x10000 < uVar1) {
    sub_080E8F60(param_1);
  }
  return in_lr;
}

