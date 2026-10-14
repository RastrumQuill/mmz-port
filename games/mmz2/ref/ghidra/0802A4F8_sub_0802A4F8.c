// sub_0802A4F8 at 0x0802A4F8 (thumb)

undefined4 sub_0802A4F8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801E9FC(param_1,0x34);
  sub_08033A80(param_1,0,1,0,7,*(undefined *)(param_1 + 0x215),0);
  return in_lr;
}

