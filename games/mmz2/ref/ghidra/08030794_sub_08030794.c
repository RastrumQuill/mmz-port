// sub_08030794 at 0x08030794 (thumb)

undefined4 sub_08030794(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b9) = 6;
  sub_080307C4();
  return in_lr;
}

