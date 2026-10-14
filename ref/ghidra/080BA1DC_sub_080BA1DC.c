// sub_080BA1DC at 0x080BA1DC (thumb)

undefined4 sub_080BA1DC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080BA1EC();
  return in_lr;
}

