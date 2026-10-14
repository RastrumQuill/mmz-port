// sub_0802F3A8 at 0x0802F3A8 (thumb)

undefined4 sub_0802F3A8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b9) = 8;
  sub_0802F3D8();
  return in_lr;
}

