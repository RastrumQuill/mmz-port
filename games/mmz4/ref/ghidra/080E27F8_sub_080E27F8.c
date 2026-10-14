// sub_080E27F8 at 0x080E27F8 (thumb)

undefined4 sub_080E27F8(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x9412);
  *(undefined *)(param_1 + 0xd) = 3;
  return in_lr;
}

