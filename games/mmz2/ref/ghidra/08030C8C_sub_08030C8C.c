// sub_08030C8C at 0x08030C8C (thumb)

undefined4 sub_08030C8C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801E9FC(param_1,0x7a);
  sub_0803C778(param_1,5,0,*(undefined *)(param_1 + 0x215));
  return in_lr;
}

