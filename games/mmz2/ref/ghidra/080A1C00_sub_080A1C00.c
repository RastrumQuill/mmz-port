// sub_080A1C00 at 0x080A1C00 (thumb)

undefined4 sub_080A1C00(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080A1C50(param_1);
  }
  else {
    sub_080A1DA8(param_1);
  }
  return in_lr;
}

