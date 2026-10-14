// sub_08074A88 at 0x08074A88 (thumb)

undefined4 sub_08074A88(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08074D7C(param_1);
  }
  else {
    sub_08074EA4(param_1);
  }
  return in_lr;
}

