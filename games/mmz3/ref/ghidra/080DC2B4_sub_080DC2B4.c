// sub_080DC2B4 at 0x080DC2B4 (thumb)

undefined4 sub_080DC2B4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080DC368(param_1);
  }
  else {
    sub_080DC530(param_1);
  }
  return in_lr;
}

