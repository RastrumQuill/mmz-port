// sub_080FE0E8 at 0x080FE0E8 (thumb)

undefined4 sub_080FE0E8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080FE17C(param_1);
  }
  else {
    sub_080FE198(param_1);
  }
  return in_lr;
}

