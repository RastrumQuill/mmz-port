// sub_080A6570 at 0x080A6570 (thumb)

undefined4 sub_080A6570(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080A6730(param_1);
  }
  else {
    sub_080A6834(param_1);
  }
  return in_lr;
}

