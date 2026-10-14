// sub_080CFABC at 0x080CFABC (thumb)

undefined4 sub_080CFABC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080CFB98(param_1);
  }
  else {
    sub_080CFCD8(param_1);
  }
  return in_lr;
}

