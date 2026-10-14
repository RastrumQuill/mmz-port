// sub_080FE0CC at 0x080FE0CC (thumb)

undefined4 sub_080FE0CC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080FE120(param_1);
  }
  else {
    sub_080FE178(param_1);
  }
  return in_lr;
}

