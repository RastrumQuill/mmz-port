// sub_08023E00 at 0x08023E00 (thumb)

undefined4 sub_08023E00(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_080184E8(param_1);
    sub_08018680(param_1);
  }
  return in_lr;
}

