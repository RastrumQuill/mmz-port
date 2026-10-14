// sub_08034F4C at 0x08034F4C (thumb)

undefined4 sub_08034F4C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 2;
  sub_0801E9FC(param_1,0x3d);
  *(undefined *)(param_1 + 0x2b8) = 0;
  sub_08033A1C(param_1,3,0,0,0xe,*(undefined *)(param_1 + 0x215),0);
  return in_lr;
}

