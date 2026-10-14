// sub_080B4F4C at 0x080B4F4C (thumb)

undefined4 sub_080B4F4C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080B510C();
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_080B51A4();
  }
  return in_lr;
}

