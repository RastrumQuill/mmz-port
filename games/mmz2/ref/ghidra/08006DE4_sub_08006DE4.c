// sub_08006DE4 at 0x08006DE4 (thumb)

undefined4 sub_08006DE4(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  sub_08006E08();
  return in_lr;
}

