// sub_080AD79C at 0x080AD79C (thumb)

undefined4 sub_080AD79C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080AD7F4(param_1);
  }
  else {
    sub_080AD8B8(param_1);
  }
  return in_lr;
}

