// sub_08073160 at 0x08073160 (thumb)

undefined4 sub_08073160(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08073304(param_1);
  }
  else {
    sub_0807343C(param_1);
  }
  return in_lr;
}

