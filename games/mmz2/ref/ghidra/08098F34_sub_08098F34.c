// sub_08098F34 at 0x08098F34 (thumb)

undefined4 sub_08098F34(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08099118(param_1);
  }
  else {
    sub_08099258(param_1);
  }
  return in_lr;
}

