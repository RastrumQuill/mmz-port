// sub_080AFB64 at 0x080AFB64 (thumb)

undefined4 sub_080AFB64(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080AFBD4(param_1);
  }
  else {
    sub_080AFC54(param_1);
  }
  return in_lr;
}

