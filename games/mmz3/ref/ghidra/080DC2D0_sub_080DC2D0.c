// sub_080DC2D0 at 0x080DC2D0 (thumb)

undefined4 sub_080DC2D0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080DC3B8(param_1);
  }
  else {
    sub_080DC650(param_1);
  }
  return in_lr;
}

