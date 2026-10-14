// sub_080DAEB8 at 0x080DAEB8 (thumb)

undefined4 sub_080DAEB8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080DAEC8();
  return in_lr;
}

