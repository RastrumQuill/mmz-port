// sub_080B94E4 at 0x080B94E4 (thumb)

undefined4 sub_080B94E4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080033F0(param_1 + 0x6c,0xb);
  sub_080B9504(param_1);
  return in_lr;
}

