// sub_080CE184 at 0x080CE184 (thumb)

undefined4 sub_080CE184(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CE70C(param_1);
  }
  else {
    sub_080CE768(param_1);
  }
  return in_lr;
}

