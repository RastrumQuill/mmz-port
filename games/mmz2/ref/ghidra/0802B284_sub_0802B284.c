// sub_0802B284 at 0x0802B284 (thumb)

undefined4 sub_0802B284(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b7) = 5;
  sub_0801E9FC(param_1,0x4e);
  return in_lr;
}

