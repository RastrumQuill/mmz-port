// sub_080382BC at 0x080382BC (thumb)

undefined4 sub_080382BC(int param_1,int param_2)

{
  undefined4 in_lr;
  
  sub_081284E4(param_2,param_1 + 0xb4,0x10);
  sub_081284E8(param_2 + 0x40,param_1 + 0xf4,0x4000001);
  *(undefined2 *)(param_1 + 0xa4) = 0x40;
  return in_lr;
}

