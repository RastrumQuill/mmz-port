// sub_080454CC at 0x080454CC (thumb)

undefined4 sub_080454CC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080454E8(param_1);
  }
  else {
    sub_080455D8(param_1);
  }
  return in_lr;
}

