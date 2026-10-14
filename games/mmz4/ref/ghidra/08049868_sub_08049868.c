// sub_08049868 at 0x08049868 (thumb)

undefined4 sub_08049868(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbd) != '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080D0894(1,param_1 + 0x54);
      sub_08002B10(0x35);
    }
    else {
      sub_080D0894(2,param_1 + 0x54);
    }
  }
  sub_0803A8C0(param_1);
  return in_lr;
}

