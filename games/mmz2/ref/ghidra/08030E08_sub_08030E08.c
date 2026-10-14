// sub_08030E08 at 0x08030E08 (thumb)

undefined4 sub_08030E08(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801E9FC(param_1,0x7d);
  sub_0803CF10(param_1,5,1,*(undefined *)(param_1 + 0x215));
  return in_lr;
}

