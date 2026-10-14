// sub_080BA184 at 0x080BA184 (thumb)

undefined4 sub_080BA184(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,1);
  sub_080BA1A4(param_1);
  return in_lr;
}

