// sub_080B9E94 at 0x080B9E94 (thumb)

undefined4 sub_080B9E94(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,7);
  sub_080B9EB4(param_1);
  return in_lr;
}

