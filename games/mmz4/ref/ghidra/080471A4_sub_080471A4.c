// sub_080471A4 at 0x080471A4 (thumb)

undefined4 sub_080471A4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0xbd) != '\0')) {
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
  }
  sub_0803A8C0(param_1);
  return in_lr;
}

