// sub_080220E0 at 0x080220E0 (thumb)

undefined4 sub_080220E0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08018364(param_1);
    sub_08018634(param_1);
  }
  return in_lr;
}

