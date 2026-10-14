// sub_080C5B84 at 0x080C5B84 (thumb)

undefined4 sub_080C5B84(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    sub_08002B5C(0x18a);
    *(char *)(param_1 + 0xb8) = '\0';
  }
  sub_080BD014(param_1);
  return in_lr;
}

