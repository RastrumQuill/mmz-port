// sub_08022050 at 0x08022050 (thumb)

undefined4 sub_08022050(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 1;
    sub_08018BE8(param_1,0x83);
  }
  return in_lr;
}

