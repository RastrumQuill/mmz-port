// sub_08074A90 at 0x08074A90 (thumb)

undefined4 sub_08074A90(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08074DB4(param_1);
  }
  else {
    sub_08074DFC(param_1);
  }
  return in_lr;
}

