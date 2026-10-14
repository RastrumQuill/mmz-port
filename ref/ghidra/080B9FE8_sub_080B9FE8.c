// sub_080B9FE8 at 0x080B9FE8 (thumb)

undefined4 sub_080B9FE8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080B9FF8();
  return in_lr;
}

