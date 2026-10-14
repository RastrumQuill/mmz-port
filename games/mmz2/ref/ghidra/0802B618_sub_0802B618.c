// sub_0802B618 at 0x0802B618 (thumb)

undefined4 sub_0802B618(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801E9FC(param_1,0x6e);
  sub_0803CF10(param_1,0,1,*(undefined *)(param_1 + 0x215));
  return in_lr;
}

