// sub_080750F4 at 0x080750F4 (thumb)

undefined4 sub_080750F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08075480(param_1);
  }
  else {
    sub_08075498(param_1);
  }
  return in_lr;
}

