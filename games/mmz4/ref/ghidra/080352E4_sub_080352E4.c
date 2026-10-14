// sub_080352E4 at 0x080352E4 (thumb)

undefined4 sub_080352E4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x100) = 1;
  sub_080352F8();
  return in_lr;
}

