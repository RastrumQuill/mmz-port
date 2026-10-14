// sub_08104084 at 0x08104084 (thumb)

undefined4 sub_08104084(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
  sub_0801CF00(param_1,0xdb01);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  return in_lr;
}

