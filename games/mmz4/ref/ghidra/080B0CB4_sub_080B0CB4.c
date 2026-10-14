// sub_080B0CB4 at 0x080B0CB4 (thumb)

undefined4 sub_080B0CB4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080B0E30(param_1);
  }
  else {
    sub_080B0E5C(param_1);
  }
  return in_lr;
}

