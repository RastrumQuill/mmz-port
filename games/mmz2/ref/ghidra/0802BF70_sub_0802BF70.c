// sub_0802BF70 at 0x0802BF70 (thumb)

undefined4 sub_0802BF70(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_08034C88(param_1,0x6f);
  sub_0803C778(param_1,1,0,*(undefined *)(param_1 + 0x215));
  return in_lr;
}

