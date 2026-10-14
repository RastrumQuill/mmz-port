// sub_080308F4 at 0x080308F4 (thumb)

undefined4 sub_080308F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08035310(param_1);
    sub_08035488(param_1);
    *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  }
  return in_lr;
}

