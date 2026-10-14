// sub_0802BAE8 at 0x0802BAE8 (thumb)

undefined4 sub_0802BAE8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_08034C88(param_1,0x35);
  *(undefined *)(param_1 + 0x2b7) = 0;
  *(undefined *)(param_1 + 0x2b8) = 0;
  *(undefined *)(param_1 + 0x2b9) = 2;
  return in_lr;
}

