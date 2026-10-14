// sub_080BA228 at 0x080BA228 (thumb)

undefined4 sub_080BA228(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,10);
  sub_080BA248(param_1);
  return in_lr;
}

