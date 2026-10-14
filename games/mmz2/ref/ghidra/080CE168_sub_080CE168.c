// sub_080CE168 at 0x080CE168 (thumb)

undefined4 sub_080CE168(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CE3C4(param_1);
  }
  else {
    sub_080CE4CC(param_1);
  }
  return in_lr;
}

