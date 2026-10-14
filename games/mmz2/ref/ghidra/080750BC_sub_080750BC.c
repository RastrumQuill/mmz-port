// sub_080750BC at 0x080750BC (thumb)

undefined4 sub_080750BC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08075110(param_1);
  }
  else {
    sub_08075168(param_1);
  }
  return in_lr;
}

