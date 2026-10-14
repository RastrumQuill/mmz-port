// sub_080B4F30 at 0x080B4F30 (thumb)

undefined4 sub_080B4F30(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080B4F80();
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_080B506C();
  }
  return in_lr;
}

