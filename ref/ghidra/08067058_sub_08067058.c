// sub_08067058 at 0x08067058 (thumb)

undefined4 sub_08067058(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08067344(param_1);
  }
  else {
    sub_08067AB8(param_1);
  }
  return in_lr;
}

