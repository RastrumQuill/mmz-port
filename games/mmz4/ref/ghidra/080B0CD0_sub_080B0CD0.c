// sub_080B0CD0 at 0x080B0CD0 (thumb)

undefined4 sub_080B0CD0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080B0FB4(param_1);
  }
  else {
    sub_080B1028(param_1);
  }
  return in_lr;
}

