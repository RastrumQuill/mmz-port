// sub_080177CC at 0x080177CC (thumb)

undefined4 sub_080177CC(int param_1,undefined2 param_2,undefined param_3,undefined param_4)

{
  undefined4 in_lr;
  
  sub_08017700(param_1,param_2);
  *(undefined *)(param_1 + 0x71) = param_3;
  *(undefined *)(param_1 + 0x72) = param_4;
  return in_lr;
}

