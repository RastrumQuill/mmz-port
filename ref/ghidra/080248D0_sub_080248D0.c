// sub_080248D0 at 0x080248D0 (thumb)

undefined4 sub_080248D0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  sub_08018BE8(param_1,0x91);
  sub_08028DA0(param_1,7,0);
  return in_lr;
}

