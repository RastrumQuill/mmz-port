// sub_080DB130 at 0x080DB130 (thumb)

undefined4 sub_080DB130(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080DB140();
  return in_lr;
}

