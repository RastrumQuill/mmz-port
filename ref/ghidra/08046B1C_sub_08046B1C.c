// sub_08046B1C at 0x08046B1C (thumb)

undefined4 sub_08046B1C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08046B6C(param_1);
  }
  else {
    sub_08046D10(param_1);
  }
  return in_lr;
}

