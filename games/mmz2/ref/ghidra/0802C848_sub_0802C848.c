// sub_0802C848 at 0x0802C848 (thumb)

undefined4 sub_0802C848(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0xf) = 2;
  *(bool *)(param_1 + 0x2b8) = *(char *)(param_1 + 0x1fc) == '\x05';
  sub_0801E9FC(param_1,0x37);
  *(undefined4 *)(param_1 + 0xc4) = 0x380;
  *(undefined *)(param_1 + 0x2b9) = 0x10;
  return in_lr;
}

