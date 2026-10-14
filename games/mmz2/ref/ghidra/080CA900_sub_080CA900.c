// sub_080CA900 at 0x080CA900 (thumb)

undefined4 sub_080CA900(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CAAF8(param_1);
  }
  else {
    sub_080CAB14(param_1);
  }
  return in_lr;
}

