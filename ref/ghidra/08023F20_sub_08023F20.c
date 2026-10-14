// sub_08023F20 at 0x08023F20 (thumb)

undefined4 sub_08023F20(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 1;
    sub_08018BE8(param_1,0x8a);
  }
  return in_lr;
}

