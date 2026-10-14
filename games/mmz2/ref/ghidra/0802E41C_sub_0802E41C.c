// sub_0802E41C at 0x0802E41C (thumb)

undefined4 sub_0802E41C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b9) = 6;
  sub_0802E44C();
  return in_lr;
}

