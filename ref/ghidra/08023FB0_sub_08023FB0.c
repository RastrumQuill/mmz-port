// sub_08023FB0 at 0x08023FB0 (thumb)

undefined4 sub_08023FB0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_080184E8(param_1);
    sub_08018680(param_1);
  }
  return in_lr;
}

