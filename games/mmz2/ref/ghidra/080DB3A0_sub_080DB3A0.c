// sub_080DB3A0 at 0x080DB3A0 (thumb)

undefined4 sub_080DB3A0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080DB3B0();
  return in_lr;
}

