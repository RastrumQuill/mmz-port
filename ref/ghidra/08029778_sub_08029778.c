// sub_08029778 at 0x08029778 (thumb)

undefined4 sub_08029778(int param_1,undefined param_2)

{
  undefined4 in_lr;
  
  sub_080033F0(param_1 + 0x6c,param_2);
  *(undefined2 *)(param_1 + 0x1c) = 0xff;
  return in_lr;
}

