// sub_0801CFC8 at 0x0801CFC8 (thumb)

undefined4 sub_0801CFC8(int param_1,undefined2 param_2,undefined param_3,undefined param_4)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,param_2);
  *(undefined *)(param_1 + 0x71) = param_3;
  *(undefined *)(param_1 + 0x72) = param_4;
  return in_lr;
}

