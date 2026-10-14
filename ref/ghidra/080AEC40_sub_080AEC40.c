// sub_080AEC40 at 0x080AEC40 (thumb)

undefined4 sub_080AEC40(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080AEC94(param_1);
  }
  else {
    sub_080AED8C(param_1);
  }
  return in_lr;
}

