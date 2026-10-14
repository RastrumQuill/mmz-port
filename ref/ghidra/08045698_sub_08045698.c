// sub_08045698 at 0x08045698 (thumb)

undefined4 sub_08045698(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080456B4(param_1);
  }
  else {
    sub_080457AC(param_1);
  }
  return in_lr;
}

