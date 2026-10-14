// sub_080BA088 at 0x080BA088 (thumb)

undefined4 sub_080BA088(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,5);
  sub_080BA0A8(param_1);
  return in_lr;
}

