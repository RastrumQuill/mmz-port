// sub_0804E4EC at 0x0804E4EC (thumb)

undefined4 sub_0804E4EC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbd) != '\0') {
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
  }
  sub_0803A8C0(param_1);
  return in_lr;
}

