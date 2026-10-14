// sub_080301B0 at 0x080301B0 (thumb)

undefined4 sub_080301B0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080303CC(param_1);
  }
  else {
    sub_080304C4(param_1);
  }
  return in_lr;
}

