// sub_0801EEE0 at 0x0801EEE0 (thumb)

undefined4 sub_0801EEE0(int param_1)

{
  undefined4 in_lr;
  undefined4 local_8 [2];
  
  local_8[0] = 0x8037525;
  local_8[1] = in_lr;
  sub_080EF118(param_1,local_8[*(byte *)(param_1 + 9)]);
  return local_8[1];
}

