// sub_080055FC at 0x080055FC (thumb)

undefined4 sub_080055FC(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined2 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  sub_0800561C();
  return in_lr;
}

