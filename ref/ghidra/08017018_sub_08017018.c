// sub_08017018 at 0x08017018 (thumb)

undefined4 sub_08017018(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08018BE8(param_1,6);
  return in_lr;
}

