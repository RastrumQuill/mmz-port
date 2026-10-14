// sub_08042AE4 at 0x08042AE4 (thumb)

undefined4 sub_08042AE4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08044A4C(param_1);
  }
  return in_lr;
}

