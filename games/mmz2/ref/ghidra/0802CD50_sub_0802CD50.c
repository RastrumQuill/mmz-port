// sub_0802CD50 at 0x0802CD50 (thumb)

undefined4 sub_0802CD50(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x17f) == ':') {
    if ((byte)(*(char *)(param_1 + 0x73) - 2U) < 2) {
      sub_0803518C(param_1);
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x2c) + 0x73) == '\x03') {
    sub_0801E9FC(param_1,0x3a);
  }
  return in_lr;
}

