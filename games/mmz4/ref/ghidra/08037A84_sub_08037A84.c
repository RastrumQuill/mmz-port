// sub_08037A84 at 0x08037A84 (thumb)

undefined4 sub_08037A84(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x1c03);
  sub_0803A3A8(param_1,2);
  *(undefined *)(param_1 + 0x101) = 1;
  sub_08037AB4(param_1);
  return in_lr;
}

