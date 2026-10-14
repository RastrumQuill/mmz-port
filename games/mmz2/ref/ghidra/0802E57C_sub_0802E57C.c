// sub_0802E57C at 0x0802E57C (thumb)

undefined4 sub_0802E57C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08035238(param_1);
    sub_0803543C(param_1);
    *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  }
  return in_lr;
}

