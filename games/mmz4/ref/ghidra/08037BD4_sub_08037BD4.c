// sub_08037BD4 at 0x08037BD4 (thumb)

undefined4 sub_08037BD4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x100) = 1;
  sub_08037BE8();
  return in_lr;
}

