// sub_0802DB0C at 0x0802DB0C (thumb)

undefined4 sub_0802DB0C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 4;
  if (*(char *)(param_1 + 0x215) == '\x03') {
    *(undefined *)(param_1 + 0x2b8) = 3;
  }
  else {
    *(undefined *)(param_1 + 0x2b8) = 0;
  }
  sub_0801E9FC(param_1,0x3e);
  *(undefined4 *)(param_1 + 0xc4) = 0x100;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x60);
  *(undefined *)(param_1 + 0x2b9) = 6;
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) | 0x80;
  return in_lr;
}

