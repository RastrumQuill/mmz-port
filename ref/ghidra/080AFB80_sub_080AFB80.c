// sub_080AFB80 at 0x080AFB80 (thumb)

undefined4 sub_080AFB80(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080AFC78(param_1);
  }
  else {
    sub_080AFE08(param_1);
  }
  return in_lr;
}

