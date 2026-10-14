// sub_08074A74 at 0x08074A74 (thumb)

undefined4 sub_08074A74(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08074BE8(param_1);
  }
  else {
    sub_08074C48(param_1);
  }
  return in_lr;
}

