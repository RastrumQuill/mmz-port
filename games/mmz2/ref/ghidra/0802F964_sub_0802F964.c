// sub_0802F964 at 0x0802F964 (thumb)

undefined4 sub_0802F964(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801E9FC(param_1,0x76);
  sub_0803C778(param_1,4,0,*(undefined *)(param_1 + 0x215));
  return in_lr;
}

