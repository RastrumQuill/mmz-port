// sub_08029790 at 0x08029790 (thumb)

undefined4 sub_08029790(int param_1,undefined param_2,undefined param_3,undefined param_4)

{
  undefined4 in_lr;
  
  sub_080033F0(param_1 + 0x6c,param_2);
  *(undefined *)(param_1 + 0x71) = param_3;
  *(undefined *)(param_1 + 0x72) = param_4;
  *(undefined2 *)(param_1 + 0x1c) = 0xff;
  return in_lr;
}

