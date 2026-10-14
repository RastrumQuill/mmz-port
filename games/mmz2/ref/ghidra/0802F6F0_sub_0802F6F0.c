// sub_0802F6F0 at 0x0802F6F0 (thumb)

undefined4 sub_0802F6F0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  sub_0802F72C(param_1);
  return in_lr;
}

