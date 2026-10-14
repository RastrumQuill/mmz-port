// sub_080DA560 at 0x080DA560 (thumb)

undefined4 sub_080DA560(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 2;
  sub_080DA570();
  return in_lr;
}

