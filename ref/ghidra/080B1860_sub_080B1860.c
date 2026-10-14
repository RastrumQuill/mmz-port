// sub_080B1860 at 0x080B1860 (thumb)

undefined4 sub_080B1860(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080B18B8(param_1);
  }
  else {
    sub_080B1A28(param_1);
  }
  return in_lr;
}

