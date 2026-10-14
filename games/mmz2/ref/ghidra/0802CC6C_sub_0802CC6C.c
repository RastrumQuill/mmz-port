// sub_0802CC6C at 0x0802CC6C (thumb)

undefined4 sub_0802CC6C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0xf) = 2;
  if (*(char *)(param_1 + 0x215) == '\x01') {
    *(undefined *)(param_1 + 0x2b8) = 1;
  }
  else {
    *(undefined *)(param_1 + 0x2b8) = 0;
  }
  sub_0801E9FC(param_1,0x39);
  *(undefined4 *)(param_1 + 0xc4) = 0x380;
  *(undefined *)(param_1 + 0x2b9) = 0x18;
  return in_lr;
}

