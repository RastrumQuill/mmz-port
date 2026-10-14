// sub_08075530 at 0x08075530 (thumb)

undefined4 sub_08075530(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080755E8();
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_08075758();
  }
  else {
    sub_080758A4();
  }
  return in_lr;
}

