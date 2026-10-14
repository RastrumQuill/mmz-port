// sub_080B75F4 at 0x080B75F4 (thumb)

undefined4 sub_080B75F4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080B7608();
  return in_lr;
}

