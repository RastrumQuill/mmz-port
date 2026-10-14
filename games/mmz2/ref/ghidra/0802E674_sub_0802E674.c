// sub_0802E674 at 0x0802E674 (thumb)

undefined4 sub_0802E674(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b7) = 5;
  sub_0801E9FC(param_1,0x57);
  return in_lr;
}

