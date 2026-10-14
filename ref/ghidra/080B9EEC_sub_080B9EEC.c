// sub_080B9EEC at 0x080B9EEC (thumb)

undefined4 sub_080B9EEC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080B9EFC();
  return in_lr;
}

