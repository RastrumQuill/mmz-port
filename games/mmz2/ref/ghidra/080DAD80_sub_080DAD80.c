// sub_080DAD80 at 0x080DAD80 (thumb)

undefined4 sub_080DAD80(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080DAD90();
  return in_lr;
}

