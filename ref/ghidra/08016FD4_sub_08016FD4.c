// sub_08016FD4 at 0x08016FD4 (thumb)

undefined4 sub_08016FD4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  if (*(char *)(param_1 + 0x115) != '\x06') {
    sub_08018BE8(param_1,6);
  }
  return in_lr;
}

