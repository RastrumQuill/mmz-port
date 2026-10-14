// sub_08030188 at 0x08030188 (thumb)

undefined4 sub_08030188(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  sub_080301C4(param_1);
  return in_lr;
}

