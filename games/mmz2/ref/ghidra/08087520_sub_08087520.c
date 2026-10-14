// sub_08087520 at 0x08087520 (thumb)

undefined4 sub_08087520(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08087574(param_1);
  }
  else {
    sub_08087614(param_1);
  }
  return in_lr;
}

