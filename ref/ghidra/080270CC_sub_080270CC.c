// sub_080270CC at 0x080270CC (thumb)

undefined4 sub_080270CC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_080270E8(param_1);
  }
  else {
    sub_08027140(param_1);
  }
  return in_lr;
}

