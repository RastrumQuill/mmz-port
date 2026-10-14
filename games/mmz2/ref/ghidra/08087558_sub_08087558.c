// sub_08087558 at 0x08087558 (thumb)

undefined4 sub_08087558(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08087828(param_1);
  }
  else {
    sub_08087840(param_1);
  }
  return in_lr;
}

