// sub_08046B38 at 0x08046B38 (thumb)

undefined4 sub_08046B38(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08046DA0(param_1);
  }
  else {
    sub_08046E80(param_1);
  }
  return in_lr;
}

