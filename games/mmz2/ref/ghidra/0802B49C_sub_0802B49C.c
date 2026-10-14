// sub_0802B49C at 0x0802B49C (thumb)

undefined4 sub_0802B49C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801E9FC(param_1,0x6b);
  sub_0803C778(param_1,0,0,*(undefined *)(param_1 + 0x215));
  return in_lr;
}

