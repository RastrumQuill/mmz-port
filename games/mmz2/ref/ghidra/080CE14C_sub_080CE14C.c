// sub_080CE14C at 0x080CE14C (thumb)

undefined4 sub_080CE14C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CE1A0(param_1);
  }
  else {
    sub_080CE2F8(param_1);
  }
  return in_lr;
}

