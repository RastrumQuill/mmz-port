// sub_080FE104 at 0x080FE104 (thumb)

undefined4 sub_080FE104(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080FE1A4(param_1);
  }
  else {
    sub_080FE1A8(param_1);
  }
  return in_lr;
}

