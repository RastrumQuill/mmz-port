// sub_08034938 at 0x08034938 (thumb)

undefined4 sub_08034938(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x1401);
  sub_0803A3A8(param_1,0);
  *(undefined *)(param_1 + 0x101) = 1;
  sub_08034968(param_1);
  return in_lr;
}

