// sub_080B2358 at 0x080B2358 (thumb)

undefined4 sub_080B2358(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080B23A8(param_1);
  }
  else {
    sub_080B24D0(param_1);
  }
  return in_lr;
}

