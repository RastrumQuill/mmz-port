// sub_0800F1D8 at 0x0800F1D8 (thumb)

undefined4 sub_0800F1D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080086AC(0x10,8,0xb2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

