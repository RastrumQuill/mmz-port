// sub_080CF750 at 0x080CF750 (thumb)

undefined4 sub_080CF750(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CF800(param_1);
  }
  else {
    sub_080CF9FC(param_1);
  }
  return in_lr;
}

