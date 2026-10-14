// sub_080CF76C at 0x080CF76C (thumb)

undefined4 sub_080CF76C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CFABC(param_1);
  }
  else {
    sub_080CFAD8(param_1);
  }
  return in_lr;
}

