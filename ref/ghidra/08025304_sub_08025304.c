// sub_08025304 at 0x08025304 (thumb)

undefined4 sub_08025304(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 1;
    sub_08018BE8(param_1,0x92);
  }
  return in_lr;
}

