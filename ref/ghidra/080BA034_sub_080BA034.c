// sub_080BA034 at 0x080BA034 (thumb)

undefined4 sub_080BA034(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,4);
  sub_080BA054(param_1);
  return in_lr;
}

