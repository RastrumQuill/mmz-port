// sub_0802FFB8 at 0x0802FFB8 (thumb)

undefined4 sub_0802FFB8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  sub_0802FFF4(param_1);
  return in_lr;
}

