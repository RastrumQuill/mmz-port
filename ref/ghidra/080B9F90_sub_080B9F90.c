// sub_080B9F90 at 0x080B9F90 (thumb)

undefined4 sub_080B9F90(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,9);
  sub_080B9FB0(param_1);
  return in_lr;
}

