// sub_080212C0 at 0x080212C0 (thumb)

undefined4 sub_080212C0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08018BE8(param_1,0xa0);
  return in_lr;
}

