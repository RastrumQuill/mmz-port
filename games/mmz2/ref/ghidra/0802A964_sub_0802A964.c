// sub_0802A964 at 0x0802A964 (thumb)

undefined4 sub_0802A964(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b9) = 8;
  sub_0802A994();
  return in_lr;
}

