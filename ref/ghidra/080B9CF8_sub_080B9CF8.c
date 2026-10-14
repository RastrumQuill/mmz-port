// sub_080B9CF8 at 0x080B9CF8 (thumb)

undefined4 sub_080B9CF8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080B9D08();
  return in_lr;
}

