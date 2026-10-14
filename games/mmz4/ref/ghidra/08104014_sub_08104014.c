// sub_08104014 at 0x08104014 (thumb)

undefined4 sub_08104014(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  sub_0801CF00(param_1,0xdb00);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  return in_lr;
}

