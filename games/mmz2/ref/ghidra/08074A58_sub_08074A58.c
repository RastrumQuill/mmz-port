// sub_08074A58 at 0x08074A58 (thumb)

undefined4 sub_08074A58(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08074AAC(param_1);
  }
  else {
    sub_08074B6C(param_1);
  }
  return in_lr;
}

