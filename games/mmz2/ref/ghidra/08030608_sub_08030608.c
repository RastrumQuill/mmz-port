// sub_08030608 at 0x08030608 (thumb)

undefined4 sub_08030608(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b9) = 8;
  sub_08030638();
  return in_lr;
}

