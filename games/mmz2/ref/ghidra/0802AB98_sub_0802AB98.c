// sub_0802AB98 at 0x0802AB98 (thumb)

undefined4 sub_0802AB98(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b9) = 6;
  sub_0802ABC8();
  return in_lr;
}

