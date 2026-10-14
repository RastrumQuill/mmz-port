// sub_08021104 at 0x08021104 (thumb)

undefined4 sub_08021104(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0x80;
  sub_08018BE8(param_1,2);
  sub_08021170(param_1);
  return in_lr;
}

