// sub_080DD830 at 0x080DD830 (thumb)

undefined4 sub_080DD830(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080DD880(param_1);
  }
  else {
    sub_080DD918(param_1);
  }
  return in_lr;
}

