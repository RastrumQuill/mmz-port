// sub_080DCF98 at 0x080DCF98 (thumb)

undefined4 sub_080DCF98(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080DD16C(param_1);
  }
  else {
    sub_080DD364(param_1);
  }
  return in_lr;
}

