// sub_080C1430 at 0x080C1430 (thumb)

undefined4 sub_080C1430(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080C1480(param_1);
  }
  else {
    sub_080C1508(param_1);
  }
  return in_lr;
}

