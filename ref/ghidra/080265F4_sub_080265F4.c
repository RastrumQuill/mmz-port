// sub_080265F4 at 0x080265F4 (thumb)

undefined4 sub_080265F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_08026610(param_1);
  }
  else {
    sub_080266D8(param_1);
  }
  return in_lr;
}

