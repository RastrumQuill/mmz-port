// sub_0803084C at 0x0803084C (thumb)

undefined4 sub_0803084C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_08036A0C(param_1);
  sub_0803087C(param_1);
  return in_lr;
}

