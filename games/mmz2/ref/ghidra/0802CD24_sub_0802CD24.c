// sub_0802CD24 at 0x0802CD24 (thumb)

undefined4 sub_0802CD24(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x2b9) < 9) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 3;
  }
  return in_lr;
}

