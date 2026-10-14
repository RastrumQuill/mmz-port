// sub_080B9DF0 at 0x080B9DF0 (thumb)

undefined4 sub_080B9DF0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080B9E00();
  return in_lr;
}

