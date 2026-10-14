// sub_080CB2CC at 0x080CB2CC (thumb)

undefined4 sub_080CB2CC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CB624(param_1);
  }
  else {
    sub_080CB63C(param_1);
  }
  return in_lr;
}

