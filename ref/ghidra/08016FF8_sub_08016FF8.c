// sub_08016FF8 at 0x08016FF8 (thumb)

undefined4 sub_08016FF8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08018BE8(param_1,6);
  return in_lr;
}

