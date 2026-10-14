// sub_08014F38 at 0x08014F38 (thumb)

undefined4 sub_08014F38(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  sub_080033A8(param_1,param_1 + 0x38,0,0);
  *(int *)(param_1 + 4) = param_1 + 0x28;
  *(undefined *)(param_1 + 0x19) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  sub_08014FD8(param_1,param_2);
  sub_0801504C(param_1,8);
  return in_lr;
}

