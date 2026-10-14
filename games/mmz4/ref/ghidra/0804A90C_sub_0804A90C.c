// sub_0804A90C at 0x0804A90C (thumb)

undefined4 sub_0804A90C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xbd) != '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
  }
  sub_0803A8C0(param_1);
  return in_lr;
}

