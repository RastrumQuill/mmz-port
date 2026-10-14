// sub_080B9E3C at 0x080B9E3C (thumb)

undefined4 sub_080B9E3C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,6);
  sub_080B9E5C(param_1);
  return in_lr;
}

