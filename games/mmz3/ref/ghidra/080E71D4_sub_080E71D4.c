// sub_080E71D4 at 0x080E71D4 (thumb)

undefined4 sub_080E71D4(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  sub_08017700(param_1,0x530a);
  *(undefined4 *)(param_1 + 0x54) = 0x16400;
  *(undefined4 *)(param_1 + 0x58) = 0x600;
  return in_lr;
}

