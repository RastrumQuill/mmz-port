// sub_0805F824 at 0x0805F824 (thumb)

undefined4 sub_0805F824(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

