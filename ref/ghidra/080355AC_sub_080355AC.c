// sub_080355AC at 0x080355AC (thumb)

undefined4 sub_080355AC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080355FC(param_1);
  }
  else {
    sub_08035798(param_1);
  }
  return in_lr;
}

