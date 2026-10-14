// sub_080DD84C at 0x080DD84C (thumb)

undefined4 sub_080DD84C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080DD990(param_1);
  }
  else {
    sub_080DD9C4(param_1);
  }
  return in_lr;
}

