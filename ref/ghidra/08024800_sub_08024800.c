// sub_08024800 at 0x08024800 (thumb)

undefined4 sub_08024800(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  sub_08018BE8(param_1,0x8e);
  sub_08028DA0(param_1,3,0);
  return in_lr;
}

