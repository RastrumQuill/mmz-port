// sub_080C47BC at 0x080C47BC (thumb)

undefined4 sub_080C47BC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    sub_08002B5C(0x18b);
    *(char *)(param_1 + 0xb8) = '\0';
  }
  sub_080BD014(param_1);
  return in_lr;
}

