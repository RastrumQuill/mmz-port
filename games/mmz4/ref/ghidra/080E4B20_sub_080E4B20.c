// sub_080E4B20 at 0x080E4B20 (thumb)

undefined4 sub_080E4B20(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0xa605);
  *(undefined4 *)(param_1 + 0x60) = 0x20;
  *(undefined *)(param_1 + 0x13) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

