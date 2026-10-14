// sub_0802932C at 0x0802932C (thumb)

undefined4 sub_0802932C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0x80;
  sub_0801E9FC(param_1,2);
  sub_080293B0(param_1);
  return in_lr;
}

