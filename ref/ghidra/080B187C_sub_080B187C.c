// sub_080B187C at 0x080B187C (thumb)

undefined4 sub_080B187C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080B1968(param_1);
  }
  else {
    sub_080B1AE0(param_1);
  }
  return in_lr;
}

