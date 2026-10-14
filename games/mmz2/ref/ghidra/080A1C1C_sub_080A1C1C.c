// sub_080A1C1C at 0x080A1C1C (thumb)

undefined4 sub_080A1C1C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080A1E44(param_1);
  }
  else {
    sub_080A2000(param_1);
  }
  return in_lr;
}

