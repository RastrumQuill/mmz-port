// sub_0802F74C at 0x0802F74C (thumb)

undefined4 sub_0802F74C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b7) = 5;
  sub_0801E9FC(param_1,0x5c);
  return in_lr;
}

