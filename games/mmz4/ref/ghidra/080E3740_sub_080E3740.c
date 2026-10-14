// sub_080E3740 at 0x080E3740 (thumb)

undefined4 sub_080E3740(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1200;
  sub_0801CF00(param_1,0x904);
  *(undefined *)(param_1 + 0x12) = 0xb4;
  *(undefined *)(param_1 + 0xd) = 2;
  return in_lr;
}

