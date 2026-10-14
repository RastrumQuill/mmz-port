// sub_08023EB4 at 0x08023EB4 (thumb)

undefined4 sub_08023EB4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  sub_08018BE8(param_1,0x8a);
  sub_08028DA0(param_1,2,0);
  return in_lr;
}

