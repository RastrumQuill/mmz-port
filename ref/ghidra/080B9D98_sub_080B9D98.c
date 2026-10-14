// sub_080B9D98 at 0x080B9D98 (thumb)

undefined4 sub_080B9D98(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,3);
  sub_080B9DB8(param_1);
  return in_lr;
}

