// sub_08048CD4 at 0x08048CD4 (thumb)

undefined4 sub_08048CD4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbd) != '\0') {
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
  }
  sub_0803A8C0(param_1);
  return in_lr;
}

