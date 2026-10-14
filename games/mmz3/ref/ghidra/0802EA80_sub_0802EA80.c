// sub_0802EA80 at 0x0802EA80 (thumb)

undefined4 sub_0802EA80(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0802DC88();
  return in_lr;
}

