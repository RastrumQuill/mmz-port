// sub_080A6554 at 0x080A6554 (thumb)

undefined4 sub_080A6554(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080A65A4(param_1);
  }
  else {
    sub_080A668C(param_1);
  }
  return in_lr;
}

