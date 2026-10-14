// sub_080C574C at 0x080C574C (thumb)

undefined4 sub_080C574C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080C5764();
  return in_lr;
}

