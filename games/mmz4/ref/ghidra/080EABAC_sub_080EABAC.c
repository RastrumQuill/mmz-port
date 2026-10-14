// sub_080EABAC at 0x080EABAC (thumb)

undefined4 sub_080EABAC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 9) == '\x03') {
    *(undefined2 *)(param_1 + 0xba) = 0xffff;
  }
  return in_lr;
}

