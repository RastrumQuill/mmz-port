// sub_080750D8 at 0x080750D8 (thumb)

undefined4 sub_080750D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08075220(param_1);
  }
  else {
    sub_0807532C(param_1);
  }
  return in_lr;
}

