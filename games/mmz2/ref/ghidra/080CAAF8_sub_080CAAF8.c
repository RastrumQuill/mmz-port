// sub_080CAAF8 at 0x080CAAF8 (thumb)

undefined4 sub_080CAAF8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080CAB44(param_1);
  }
  else {
    sub_080CAC58(param_1);
  }
  return in_lr;
}

