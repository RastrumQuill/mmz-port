// sub_080CADD0 at 0x080CADD0 (thumb)

undefined4 sub_080CADD0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CAFF8(param_1);
  }
  else {
    sub_080CB174(param_1);
  }
  return in_lr;
}

