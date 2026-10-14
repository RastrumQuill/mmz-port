// sub_080CB26C at 0x080CB26C (thumb)

undefined4 sub_080CB26C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CB2E8(param_1);
  }
  else {
    sub_080CB3AC(param_1);
  }
  return in_lr;
}

