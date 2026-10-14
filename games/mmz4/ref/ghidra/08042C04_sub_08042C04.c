// sub_08042C04 at 0x08042C04 (thumb)

undefined4 sub_08042C04(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x801f);
  *(undefined *)(param_1 + 0x25) = 0x12;
  return in_lr;
}

