// sub_080CA8E4 at 0x080CA8E4 (thumb)

undefined4 sub_080CA8E4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CA994(param_1);
  }
  else {
    sub_080CAAC0(param_1);
  }
  return in_lr;
}

