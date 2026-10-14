// sub_080AE734 at 0x080AE734 (thumb)

undefined4 sub_080AE734(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080AE788(param_1);
  }
  else {
    sub_080AE888(param_1);
  }
  return in_lr;
}

